/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)setPresentationPreparationBlock:(id)arg1 ;
-(BOOL)hasDismissCompletionHandler;
-(void)setHasDismissCompletionHandler:(BOOL)arg1 ;
-(void)setRotationDecider:(UIWindow *)arg1 ;
-(void)_preparePresentationControllerForPresenting:(id)arg1 ;
-(UIWindow *)rotationDecider;
-(void)setHasPreservedKeyboardInputViews:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
-(BOOL)hasPreservedKeyboardInputViews;
-(id)presentationPreparationBlock;
@end

