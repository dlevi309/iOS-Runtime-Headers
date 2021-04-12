/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSNDArrayAllocator.h>

@class NSString;

@interface MPSNDArrayDefaultAllocator : NSObject <MPSNDArrayAllocator> {

	int _dealloc_ok;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)freeBuffer:(id)arg1 forCommandBuffer:(id)arg2 ;
-(id)arrayForCommandBuffer:(id)arg1 arrayDescriptor:(id)arg2 kernel:(id)arg3 ;
-(id)bufferForCommandBuffer:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 kernel:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

