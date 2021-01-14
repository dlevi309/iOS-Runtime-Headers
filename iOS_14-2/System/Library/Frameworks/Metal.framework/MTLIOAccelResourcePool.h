/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLDevice;
#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice;

@interface MTLIOAccelResourcePool : NSObject {

	MTLIOAccelResourcePoolPrivate* _priv;
	Class _resourceClass;
	MTLIOAccelDevice*<MTLDevice> _device;
	IOAccelNewResourceArgs* _resourceArgs;
	unsigned _resourceArgsSize;
	unsigned long long age_to_purge;
	unsigned generation;

}

@property (readonly) IOAccelNewResourceArgs* resourceArgs;              //@synthesize resourceArgs=_resourceArgs - In the implementation block
@property (readonly) unsigned resourceArgsSize;                         //@synthesize resourceArgsSize=_resourceArgsSize - In the implementation block
-(unsigned)resourceArgsSize;
-(void)setResourceArgs:(const IOAccelNewResourceArgs*)arg1 resourceArgsSize:(unsigned)arg2 ;
-(void)purgeWithLock;
-(BOOL)updateResourcePurgeability;
-(int)availableCount;
-(IOAccelNewResourceArgs*)resourceArgs;
-(void)purge;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const IOAccelNewResourceArgs*)arg3 resourceArgsSize:(unsigned)arg4 options:(id)arg5 ;
@end

