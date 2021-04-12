/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIRemoteAlertServiceInterface_Internal.h>
#import <libobjc.A.dylib/SBUIRemoteAlertServiceInterface.h>

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface_Internal, SBUIRemoteAlertServiceInterface> {

	BOOL _hasPreservedInputViews;
	BOOL _hasSentAnimationFence;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)setUserInfo:(id)arg1 ;
-(void)synchronizeAnimationsInActions:(/*^block*/id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)sb_restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_selectorIsOverriden:(SEL)arg1 ;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1 ;
-(void)didInvalidateForRemoteAlert;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg1 windowedAccessoryCutoutFrameInScreen:(CGRect)arg2 ;
-(void)sb_becomeFirstResponder;
-(void)sb_resignFirstResponder;
-(void)sb_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)sb_presentForAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)sb_dismissForAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

