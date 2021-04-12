/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

typedef struct _LXLexicon* LXLexiconRef;

typedef struct time_value {
	int seconds;
	int microseconds;
} time_value;

typedef struct mach_task_basic_info {
	unsigned long long virtual_size;
	unsigned long long resident_size;
	unsigned long long resident_size_max;
	time_value user_time;
	time_value system_time;
	int policy;
	int suspend_count;
} mach_task_basic_info;

typedef struct task_vm_info {
	unsigned long long virtual_size;
	int region_count;
	int page_size;
	unsigned long long resident_size;
	unsigned long long resident_size_peak;
	unsigned long long device;
	unsigned long long device_peak;
	unsigned long long internal;
	unsigned long long internal_peak;
	unsigned long long external;
	unsigned long long external_peak;
	unsigned long long reusable;
	unsigned long long reusable_peak;
	unsigned long long purgeable_volatile_pmap;
	unsigned long long purgeable_volatile_resident;
	unsigned long long purgeable_volatile_virtual;
	unsigned long long compressed;
	unsigned long long compressed_peak;
	unsigned long long compressed_lifetime;
	unsigned long long phys_footprint;
	unsigned long long min_address;
	unsigned long long max_address;
	long long ledger_phys_footprint_peak;
	long long ledger_purgeable_nonvolatile;
	long long ledger_purgeable_novolatile_compressed;
	long long ledger_purgeable_volatile;
	long long ledger_purgeable_volatile_compressed;
	long long ledger_tag_network_nonvolatile;
	long long ledger_tag_network_nonvolatile_compressed;
	long long ledger_tag_network_volatile;
	long long ledger_tag_network_volatile_compressed;
	long long ledger_tag_media_footprint;
	long long ledger_tag_media_footprint_compressed;
	long long ledger_tag_media_nofootprint;
	long long ledger_tag_media_nofootprint_compressed;
	long long ledger_tag_graphics_footprint;
	long long ledger_tag_graphics_footprint_compressed;
	long long ledger_tag_graphics_nofootprint;
	long long ledger_tag_graphics_nofootprint_compressed;
	long long ledger_tag_neural_footprint;
	long long ledger_tag_neural_footprint_compressed;
	long long ledger_tag_neural_nofootprint;
	long long ledger_tag_neural_nofootprint_compressed;
	unsigned long long limit_bytes_remaining;
	int decompressions;
} task_vm_info;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double values;
	double scaleMinimum;
	double scaleMaximum;
	double valueMinimum;
	double valueMaximum;
	double count;
} SCD_Struct_AX5;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_AX8;

typedef struct {
	SCD_Struct_AX8 range;
	unsigned long long attributes;
} SCD_Struct_AX9;

typedef struct {
	SCD_Struct_AX8 field1;
	unsigned long long field2;
} SCD_Struct_AX10;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_AX12;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	[4 columns];
} SCD_Struct_AX15;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct vector<int, std::__1::allocator<int> >* vector<int, std::__1::allocator<int> >Ref;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

