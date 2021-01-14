/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/


#import <IOGPU/IOGPU-Structs.h>
@class IOGPUMetalDevice;

@interface IOGPUMetalDeviceShmem : NSObject {

	IOGPUMetalDeviceShmemPrivate* _priv;
	IOGPUMetalDevice* _device;
	unsigned _shmemID;
	unsigned _shmemSize;
	void* _virtualAddress;
	BOOL purgeable;

}

@property (readonly) void* virtualAddress;              //@synthesize virtualAddress=_virtualAddress - In the implementation block
@property (readonly) unsigned shmemID;                  //@synthesize shmemID=_shmemID - In the implementation block
@property (readonly) unsigned shmemSize;                //@synthesize shmemSize=_shmemSize - In the implementation block
-(void*)virtualAddress;
-(id)initWithDevice:(id)arg1 shmemSize:(unsigned)arg2 shmemType:(int)arg3 ;
-(unsigned)shmemID;
-(unsigned)shmemSize;
-(void)dealloc;
@end

