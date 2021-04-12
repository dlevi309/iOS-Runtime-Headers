/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIRemoteAlertServiceInterface_Internal.h>
#import <libobjc.A.dylib/SBUIRemoteAlertServiceInterface.h>

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface_Internal, SBUIRemoteAlertServiceInterface> {

	BOOL _hasPreservedInputViews;
	BOOL _hasSentAnimationFence;

}
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)synchronizeAnimationsInActions:(/*^block*/id)arg1 ;
-(void)sb_restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_selectorIsOverriden:(SEL)arg1 ;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1 ;
-(void)didInvalidateForRemoteAlert;
-(void)sb_becomeFirstResponder;
-(void)sb_resignFirstResponder;
-(void)sb_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)sb_presentForAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)sb_dismissForAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

