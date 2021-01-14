/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIForceTransitioningDelegate.h>

@class UIInteractionProgress, _UIStatesFeedbackGenerator, NSString;

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate> {

	UIInteractionProgress* interactionProgressForPresentation;
	_UIStatesFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;                          //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
@end

