/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSMutableDictionary, SignpostRenderServerRenderInterval, SignpostHIDLatencyInterval, SignpostFrameLatencyInterval;

@interface SignpostFrameAccumulatedState : NSObject {

	unsigned _frameSeed;
	NSMutableDictionary* _contextIDtoContextInfoDict;
	SignpostRenderServerRenderInterval* _renderInterval;
	NSMutableDictionary* _frameSeedToSkippedRenderIntervals;
	SignpostHIDLatencyInterval* _hidLatency;
	SignpostFrameLatencyInterval* _frameLatency;

}

@property (nonatomic,readonly) unsigned frameSeed;                                                 //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contextIDtoContextInfoDict;                     //@synthesize contextIDtoContextInfoDict=_contextIDtoContextInfoDict - In the implementation block
@property (nonatomic,retain) SignpostRenderServerRenderInterval * renderInterval;                  //@synthesize renderInterval=_renderInterval - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameSeedToSkippedRenderIntervals;              //@synthesize frameSeedToSkippedRenderIntervals=_frameSeedToSkippedRenderIntervals - In the implementation block
@property (nonatomic,retain) SignpostHIDLatencyInterval * hidLatency;                              //@synthesize hidLatency=_hidLatency - In the implementation block
@property (nonatomic,retain) SignpostFrameLatencyInterval * frameLatency;                          //@synthesize frameLatency=_frameLatency - In the implementation block
-(NSMutableDictionary *)frameSeedToSkippedRenderIntervals;
-(unsigned)frameSeed;
-(id)initWithFrameSeed:(unsigned)arg1 ;
-(void)_addSkippedRender:(id)arg1 ;
-(NSMutableDictionary *)contextIDtoContextInfoDict;
-(void)setContextIDtoContextInfoDict:(NSMutableDictionary *)arg1 ;
-(SignpostRenderServerRenderInterval *)renderInterval;
-(void)setRenderInterval:(SignpostRenderServerRenderInterval *)arg1 ;
-(void)setFrameSeedToSkippedRenderIntervals:(NSMutableDictionary *)arg1 ;
-(SignpostHIDLatencyInterval *)hidLatency;
-(void)setHidLatency:(SignpostHIDLatencyInterval *)arg1 ;
-(SignpostFrameLatencyInterval *)frameLatency;
-(void)setFrameLatency:(SignpostFrameLatencyInterval *)arg1 ;
@end

