/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/


@protocol MTLDevice;
#import <IOGPU/IOGPU-Structs.h>
@class IOGPUMetalDevice;

@interface IOGPUMetalResourcePool : NSObject {

	IOGPUMetalResourcePoolPrivate* _priv;
	Class _resourceClass;
	IOGPUMetalDevice*<MTLDevice> _device;
	IOGPUNewResourceArgs* _resourceArgs;
	unsigned _resourceArgsSize;
	unsigned long long age_to_purge;
	unsigned generation;

}

@property (readonly) IOGPUNewResourceArgs* resourceArgs;              //@synthesize resourceArgs=_resourceArgs - In the implementation block
@property (readonly) unsigned resourceArgsSize;                       //@synthesize resourceArgsSize=_resourceArgsSize - In the implementation block
-(unsigned)resourceArgsSize;
-(void)setResourceArgs:(const IOGPUNewResourceArgs*)arg1 resourceArgsSize:(unsigned)arg2 ;
-(void)purgeWithLock;
-(BOOL)updateResourcePurgeability;
-(int)availableCount;
-(IOGPUNewResourceArgs*)resourceArgs;
-(void)purge;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const IOGPUNewResourceArgs*)arg3 resourceArgsSize:(unsigned)arg4 options:(id)arg5 ;
@end

