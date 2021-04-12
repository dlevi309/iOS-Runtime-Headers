/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandEncoder.h>

@class NSString, MTLToolsCommandBuffer;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder> {

	MTLToolsCommandBuffer* _commandBuffer;

}

@property (nonatomic,readonly) MTLToolsCommandBuffer * commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)endEncoding;
-(void)setLabel:(NSString *)arg1 ;
-(MTLToolsCommandBuffer *)commandBuffer;
-(NSString *)label;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)insertDebugSignpost:(id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)addRetainedObject:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(ILayerLockingPolicy*)arg3 ;
@end

