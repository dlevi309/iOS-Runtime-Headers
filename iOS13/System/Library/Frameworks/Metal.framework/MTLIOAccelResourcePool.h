/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)purge;
-(void)purgeWithLock;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const IOAccelNewResourceArgs*)arg3 resourceArgsSize:(unsigned)arg4 options:(id)arg5 ;
-(void)setResourceArgs:(const IOAccelNewResourceArgs*)arg1 resourceArgsSize:(unsigned)arg2 ;
-(int)availableCount;
-(BOOL)updateResourcePurgeability;
-(IOAccelNewResourceArgs*)resourceArgs;
-(unsigned)resourceArgsSize;
@end

