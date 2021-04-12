/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLObjectWithLabel.h>

@protocol MTLDevice, MTLCommandBuffer;
@class _MTLCommandBuffer, NSString;

@interface _MTLCommandEncoder : _MTLObjectWithLabel {

	id<MTLDevice> _device;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	unsigned long long _numThisEncoder;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (nonatomic,readonly) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long numThisEncoder;                     //@synthesize numThisEncoder=_numThisEncoder - In the implementation block
@property (readonly) unsigned long long dispatchType; 
-(void)dealloc;
-(id)description;
-(id<MTLDevice>)device;
-(void)endEncoding;
-(id)commandBuffer;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)insertDebugSignpost:(id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(unsigned long long)dispatchType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)getType;
-(void)memoryBarrierNotificationWithScope:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)memoryBarrierNotificationWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)numThisEncoder;
-(void)setNumThisEncoder:(unsigned long long)arg1 ;
@end

