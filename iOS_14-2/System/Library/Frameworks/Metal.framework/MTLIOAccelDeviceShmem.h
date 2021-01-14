/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDevice:(id)arg1 shmemSize:(unsigned)arg2 ;
-(void*)virtualAddress;
-(unsigned)shmemID;
-(unsigned)shmemSize;
-(void)dealloc;
@end

