/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
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
-(double)endWaitTime;
-(int)getStatus:(AudioQueueBuffer*)arg1;
-(int)endpointMode;
-(double)startWaitTime;
-(void)setEndWaitTime:(double)arg1;
-(void)setEndpointMode:(int)arg1;
-(void)setStartWaitTime:(double)arg1;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1;
-(void)reset;

@end

