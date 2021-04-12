/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@protocol CHHapticPatternPlayer <NSObject>
@property (assign) BOOL isMuted; 
@required
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2;
-(void)setIsMuted:(BOOL)arg1;
-(BOOL)isMuted;
-(BOOL)cancelAndReturnError:(id*)arg1;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3;

@end

