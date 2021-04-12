/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice;

@interface MTLIOAccelDeviceShmem : NSObject {

	MTLIOAccelDeviceShmemPrivate* _priv;
	MTLIOAccelDevice* _device;
	unsigned _shmemID;
	unsigned _shmemSize;
	void* _virtualAddress;
	BOOL purgeable;

}

@property (readonly) void* virtualAddress;              //@synthesize virtualAddress=_virtualAddress - In the implementation block
@property (readonly) unsigned shmemID;                  //@synthesize shmemID=_shmemID - In the implementation block
@property (readonly) unsigned shmemSize;                //@synthesize shmemSize=_shmemSize - In the implementation block
-(void)dealloc;
-(void*)virtualAddress;
-(id)initWithDevice:(id)arg1 shmemSize:(unsigned)arg2 ;
-(unsigned)shmemID;
-(unsigned)shmemSize;
@end

