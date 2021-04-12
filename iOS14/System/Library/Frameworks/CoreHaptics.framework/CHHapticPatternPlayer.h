/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@protocol CHHapticPatternPlayer <NSObject>
@property (assign) BOOL isMuted; 
@required
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2;
-(BOOL)cancelAndReturnError:(id*)arg1;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
-(void)setIsMuted:(BOOL)arg1;
-(BOOL)isMuted;

@end

