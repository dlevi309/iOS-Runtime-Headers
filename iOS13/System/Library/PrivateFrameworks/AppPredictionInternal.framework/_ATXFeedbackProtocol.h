/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol _ATXFeedbackProtocol
@property (nonatomic,readonly) double currentAlpha; 
@property (nonatomic,readonly) double currentBeta; 
@optional
-(void)doDecayAtTime:(double)arg1;

@required
-(void)resetData;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 date:(id)arg3 location:(id)arg4;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(BOOL)arg3 date:(id)arg4 location:(id)arg5;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(BOOL)arg3;
-(void)decayCounts;
-(void)removeFeedbackForBundle:(id)arg1;
-(double)currentAlpha;
-(double)currentBeta;

@end

