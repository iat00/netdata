#ifndef _NETDATA_EBPF_PROCESS_H_
# define _NETDATA_EBPF_PROCESS_H_ 1

# define NETDATA_FILE_GROUP "File"
# define NETDATA_VFS_GROUP "VFS"
# define NETDATA_PROCESS_GROUP "Process"

# define NETDATA_GLOBAL_VECTOR 24
# define NETDATA_MAX_MONITOR_VECTOR 9
# define NETDATA_VFS_ERRORS 3

# define NETDATA_DEL_START 2
# define NETDATA_IN_START_BYTE 3
# define NETDATA_EXIT_START 5
# define NETDATA_PROCESS_START 7

# define NETDATA_FILE_OPEN_CLOSE_COUNT "file_descriptor"
# define NETDATA_FILE_OPEN_ERR_COUNT "file_error"
# define NETDATA_VFS_FILE_CLEAN_COUNT "deleted_objects"
# define NETDATA_VFS_FILE_IO_COUNT "io"
# define NETDATA_VFS_FILE_ERR_COUNT "io_error"

# define NETDATA_EXIT_SYSCALL "exit"
# define NETDATA_PROCESS_SYSCALL "process_thread"
# define NETDATA_PROCESS_ERROR_NAME "task_error"
# define NETDATA_PROCESS_STATUS_NAME "process_status"

# define NETDATA_VFS_IO_FILE_BYTES "io_bytes"
# define NETDATA_VFS_DIM_IN_FILE_BYTES "write"
# define NETDATA_VFS_DIM_OUT_FILE_BYTES "read"

//Index from kernel
typedef enum ebpf_process_index {
    NETDATA_KEY_CALLS_DO_SYS_OPEN,
    NETDATA_KEY_ERROR_DO_SYS_OPEN,

    NETDATA_KEY_CALLS_VFS_WRITE,
    NETDATA_KEY_ERROR_VFS_WRITE,
    NETDATA_KEY_BYTES_VFS_WRITE,

    NETDATA_KEY_CALLS_VFS_READ,
    NETDATA_KEY_ERROR_VFS_READ,
    NETDATA_KEY_BYTES_VFS_READ,

    NETDATA_KEY_CALLS_VFS_UNLINK,
    NETDATA_KEY_ERROR_VFS_UNLINK,

    NETDATA_KEY_CALLS_DO_EXIT,

    NETDATA_KEY_CALLS_RELEASE_TASK,

    NETDATA_KEY_CALLS_DO_FORK,
    NETDATA_KEY_ERROR_DO_FORK,

    NETDATA_KEY_CALLS_CLOSE_FD,
    NETDATA_KEY_ERROR_CLOSE_FD,

    NETDATA_KEY_CALLS_SYS_CLONE,
    NETDATA_KEY_ERROR_SYS_CLONE,

    NETDATA_KEY_CALLS_VFS_WRITEV,
    NETDATA_KEY_ERROR_VFS_WRITEV,
    NETDATA_KEY_BYTES_VFS_WRITEV,

    NETDATA_KEY_CALLS_VFS_READV,
    NETDATA_KEY_ERROR_VFS_READV,
    NETDATA_KEY_BYTES_VFS_READV

} ebpf_process_index_t;

# endif
