/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIAlertController, UIInteractionProgress, NSString;

@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presentation;
	UIAlertController* _alertController;
	UIInteractionProgress* _interactionProgress;

}

@property (getter=isPresentation) BOOL presentation;                                   //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                      //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)setInteractionProgress:(UIInteractionProgress *)arg1 ;
-(BOOL)isPresentation;
-(id)_alertControllerForContext:(id)arg1 ;
-(UIInteractionProgress *)interactionProgress;
-(double)transitionDuration:(id)arg1 ;
-(void)_animateTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithInteractionProgress:(id)arg1 ;
-(void)setPresentation:(BOOL)arg1 ;
@end

