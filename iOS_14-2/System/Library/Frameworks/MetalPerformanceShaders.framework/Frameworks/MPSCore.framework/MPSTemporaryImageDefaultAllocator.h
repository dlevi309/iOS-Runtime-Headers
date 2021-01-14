/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSImageDefaultAllocator.h>
#import <MPSCore/MPSImageAllocator.h>

@class NSString;

@interface MPSTemporaryImageDefaultAllocator : MPSImageDefaultAllocator <MPSImageAllocator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

