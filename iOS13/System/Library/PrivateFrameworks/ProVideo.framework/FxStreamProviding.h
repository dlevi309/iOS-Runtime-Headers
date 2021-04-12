/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol FxStreamProviding
@required
-(unsigned)timeScaleForStream:(id)arg1;
-(double)startTimeForStream:(id)arg1;
-(double)durationForStream:(id)arg1;
-(double)frameDurationForStream:(id)arg1;
-(BOOL)isStreamPremultiplied:(id)arg1;
-(double)pixelAspectForStream:(id)arg1;
-(BOOL)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
-(unsigned long long)fieldOrderForSample:(id)arg1;
-(BOOL)isSamplePredetermined:(id)arg1;
-(id)requiredSamplesForSample:(id)arg1;
-(id)evaluateSample:(id)arg1 withOptions:(id)arg2;
-(id)domainOfDefinitionForSample:(id)arg1;

@end

