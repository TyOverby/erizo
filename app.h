#include "platform.h"

struct instance_;
typedef struct app_ {
    struct instance_** instances;
    unsigned num_instances;
} app_t;

/*  Calls instance_run on every instance */
bool app_run(app_t* app);

/*  Triggered from the UI */
struct instance_* app_open(app_t* app, const char* filename);
void app_close_native_window(app_t* app, void* window);

void app_close_instance(app_t* app, unsigned index);
