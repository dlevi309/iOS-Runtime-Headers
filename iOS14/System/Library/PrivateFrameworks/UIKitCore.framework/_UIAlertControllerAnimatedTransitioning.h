/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(void)_animateTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(UIInteractionProgress *)interactionProgress;
-(void)setPresentation:(BOOL)arg1 ;
-(void)setInteractionProgress:(UIInteractionProgress *)arg1 ;
-(BOOL)isPresentation;
-(UIAlertController *)alertController;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)_alertControllerForContext:(id)arg1 ;
-(id)initWithInteractionProgress:(id)arg1 ;
@end

