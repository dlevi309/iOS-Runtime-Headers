/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBlitCommandEncoder.h>
#import <libobjc.A.dylib/MTLGPUDebugCommandEncoder.h>

@class NSString;

@interface MTLGPUDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder <MTLGPUDebugCommandEncoder> {

	unsigned _encoderID;

}

@property (readonly) unsigned encoderID;                            //@synthesize encoderID=_encoderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4 ;
-(void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(unsigned)encoderID;
-(id)initWithBlitCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned)arg3 ;
@end

