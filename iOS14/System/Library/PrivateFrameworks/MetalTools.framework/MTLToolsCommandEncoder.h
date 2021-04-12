/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandEncoder.h>

@class NSString, MTLToolsCommandBuffer;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder> {

	MTLToolsCommandBuffer* _commandBuffer;

}

@property (nonatomic,readonly) MTLToolsCommandBuffer * commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pushDebugGroup:(id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)popDebugGroup;
-(MTLToolsCommandBuffer *)commandBuffer;
-(void)endEncoding;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)addRetainedObject:(id)arg1 ;
@end

