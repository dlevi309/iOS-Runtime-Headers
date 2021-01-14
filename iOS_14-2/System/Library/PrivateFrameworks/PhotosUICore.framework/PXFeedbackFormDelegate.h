/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXFeedbackFormDelegate <NSObject>
@optional
-(void)userDidFinish:(BOOL)arg1;
-(BOOL)wantsCustomFeedbackSection;
-(BOOL)wantsPositiveFeedbackSection;
-(BOOL)shouldContinuePresentingFormAfterFeedback;

@required
-(id)longTitleText;
-(id)viewTitleForRadar;
-(id)negativeFeedbackKeys;
-(id)positiveFeedbackKeys;
-(BOOL)shouldDisplaySecondaryFeedbackButtons;
-(void)userIndicatedLike;
-(void)userIndicatedDislike;
-(void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;

@end

