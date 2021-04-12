/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)arrayForCommandBuffer:(id)arg1 arrayDescriptor:(id)arg2 kernel:(id)arg3 ;
-(id)bufferForCommandBuffer:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 kernel:(id)arg4 ;
-(void)freeBuffer:(id)arg1 forCommandBuffer:(id)arg2 ;
@end

