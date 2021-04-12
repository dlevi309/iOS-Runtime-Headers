/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol Endpointer <NSObject>
@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
@optional
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2;
-(BOOL)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2;

@required
-(void)reset;
-(int)getStatus:(AudioQueueBuffer*)arg1;
-(int)endpointMode;
-(void)setEndpointMode:(int)arg1;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1;

@end

