/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/MTLComputeCommandEncoder.h>
#import <libobjc.A.dylib/MTLCommandEncoder.h>

@protocol MTLComputeCommandEncoder;
@class NSString;

@interface MPSComputeEncoder : NSObject <MTLComputeCommandEncoder, MTLCommandEncoder> {

	id<MTLComputeCommandEncoder> _encoder;

}

@property (readonly) unsigned long long dispatchType; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)computeCommandEncoder;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 withDispatchType:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
@end

