/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/

typedef struct __IOSurfaceClient* IOSurfaceClientRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned long long clientAddress;
	unsigned surfaceID;
	unsigned pixelFormat;
	unsigned retainCount;
	unsigned yCbCrMatrix;
	unsigned cacheMode;
	unsigned mapCacheAttribute;
	unsigned purgeableState;
	unsigned purgeableStateAPI;
	unsigned allocOffset;
	unsigned allocSize;
	unsigned char isGlobal;
	unsigned char isAllocated;
	unsigned char isWired;
	unsigned char pad;
	unsigned morePad;
	unsigned long long detachModeCode;
	unsigned long long initDetachModeCodeTime;
	unsigned long long protectionOptions;
} SCD_Struct_IO3;

typedef struct {
	unsigned offset;
	unsigned width;
	unsigned height;
	unsigned bytesPerRow;
	unsigned bytesPerElement;
	unsigned elementWidth;
	unsigned elementHeight;
} SCD_Struct_IO4;

