/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLObjectWithLabel.h>

@protocol MTLDevice, MTLCommandBuffer, MTLFence;
@class _MTLCommandBuffer, NSMutableArray, NSString;

@interface _MTLCommandEncoder : _MTLObjectWithLabel {

	id<MTLDevice> _device;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	unsigned long long _numThisEncoder;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	id<MTLFence> _progressFence;
	BOOL _needsFrameworkAssistedErrorTracking;
	BOOL _isProgressTrackingEncoder;
	NSMutableArray* _debugSignposts;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (nonatomic,readonly) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long numThisEncoder;                     //@synthesize numThisEncoder=_numThisEncoder - In the implementation block
@property (readonly) unsigned long long dispatchType; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)memoryBarrierNotificationWithScope:(unsigned long long)arg1 ;
-(void)setNumThisEncoder:(unsigned long long)arg1 ;
-(unsigned long long)numThisEncoder;
-(unsigned long long)dispatchType;
-(id<MTLDevice>)device;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)memoryBarrierNotificationWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getType;
-(id)description;
-(void)popDebugGroup;
-(unsigned long long)getDriverUniqueID;
-(id)commandBuffer;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)preEndEncoding;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)dealloc;
@end

