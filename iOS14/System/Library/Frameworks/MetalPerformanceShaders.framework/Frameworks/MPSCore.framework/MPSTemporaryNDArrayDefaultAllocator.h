/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSNDArrayDefaultAllocator.h>
#import <MPSCore/MPSNDArrayAllocator.h>

@class NSString;

@interface MPSTemporaryNDArrayDefaultAllocator : MPSNDArrayDefaultAllocator <MPSNDArrayAllocator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)arrayForCommandBuffer:(id)arg1 arrayDescriptor:(id)arg2 kernel:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

