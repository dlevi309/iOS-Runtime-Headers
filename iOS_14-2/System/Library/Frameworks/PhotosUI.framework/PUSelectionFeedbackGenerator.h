/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class UISelectionFeedbackGenerator;

@interface PUSelectionFeedbackGenerator : NSObject {

	UISelectionFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,readonly) UISelectionFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
-(id)init;
-(void)prepareFeedback;
-(void)performFeedback;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
@end

