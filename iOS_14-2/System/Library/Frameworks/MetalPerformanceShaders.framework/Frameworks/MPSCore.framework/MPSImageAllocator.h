/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


@protocol MPSImageAllocator <NSObject,NSSecureCoding>
@optional
-(id)imageBatchForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 count:(unsigned long long)arg4;

@required
-(id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3;

@end

