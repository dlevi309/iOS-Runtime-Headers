/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BiometricKitUIEnrollResultDelegate.h>

@class BiometricKitUIEnrollViewController, BiometricKitIdentity, UIBarButtonItem, NSString;

@interface BFFFinishSetupTouchIDViewController : UIViewController <BiometricKitUIEnrollResultDelegate> {

	BiometricKitUIEnrollViewController* _enrollController;
	BiometricKitIdentity* _identity;
	UIBarButtonItem* _previousLeftNavigationItem;
	UIBarButtonItem* _cancelLeftNavigationItem;
	BOOL _enrollComplete;
	NSString* _passcode;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSString * passcode;                     //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)didResignActive:(id)arg1 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(void)beginEnrollment;
-(void)deleteIdentity;
-(void)endEnrollment;
-(CGRect)frameForEnrollmentController;
-(void)resetLeftNavigationItem;
-(void)_didCompleteMesaControllerWithResult:(unsigned long long)arg1 ;
-(id)_cancelLeftNavigationItem;
-(void)enrollResult:(int)arg1 identity:(id)arg2 ;
-(void)restartEnrollment;
@end

