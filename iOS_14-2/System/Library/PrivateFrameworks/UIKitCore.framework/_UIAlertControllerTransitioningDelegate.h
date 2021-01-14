/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIForceTransitioningDelegate.h>

@class UIInteractionProgress, NSString;

@interface _UIAlertControllerTransitioningDelegate : NSObject <UIForceTransitioningDelegate> {

	UIInteractionProgress* interactionProgressForPresentation;

}

@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)_interactionControllerForTransitionOfType:(long long)arg1 forAlertController:(id)arg2 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
@end

