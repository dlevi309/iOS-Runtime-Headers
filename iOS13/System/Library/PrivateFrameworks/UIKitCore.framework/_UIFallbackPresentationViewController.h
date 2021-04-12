/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIApplicationRotationFollowingController.h>

@class _UIFallbackPresentationWindow, UIWindow;

@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController {

	_UIFallbackPresentationWindow* _presentationWindow;
	BOOL _hasPreservedKeyboardInputViews;
	BOOL _hasDismissCompletionHandler;
	UIWindow* _rotationDecider;
	/*^block*/id _presentationPreparationBlock;

}

@property (assign,nonatomic) BOOL hasPreservedKeyboardInputViews;              //@synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews - In the implementation block
@property (assign,nonatomic) BOOL hasDismissCompletionHandler;                 //@synthesize hasDismissCompletionHandler=_hasDismissCompletionHandler - In the implementation block
@property (nonatomic,retain) UIWindow * rotationDecider;                       //@synthesize rotationDecider=_rotationDecider - In the implementation block
@property (nonatomic,copy) id presentationPreparationBlock;                    //@synthesize presentationPreparationBlock=_presentationPreparationBlock - In the implementation block
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)setHasDismissCompletionHandler:(BOOL)arg1 ;
-(BOOL)hasDismissCompletionHandler;
-(void)setRotationDecider:(UIWindow *)arg1 ;
-(void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHasPreservedKeyboardInputViews:(BOOL)arg1 ;
-(BOOL)hasPreservedKeyboardInputViews;
-(void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_preparePresentationControllerForPresenting:(id)arg1 ;
-(UIWindow *)rotationDecider;
-(id)presentationPreparationBlock;
-(void)setPresentationPreparationBlock:(id)arg1 ;
@end

