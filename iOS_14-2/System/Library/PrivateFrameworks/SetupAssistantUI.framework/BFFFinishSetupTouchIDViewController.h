/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BiometricKitUIEnrollResultDelegate.h>

@class BiometricKitUIEnrollViewController, BiometricKitIdentity, UIBarButtonItem, NSString;

@interface BFFFinishSetupTouchIDViewController : UIViewController <BiometricKitUIEnrollResultDelegate> {

	BiometricKitUIEnrollViewController* _enrollController;
	BiometricKitIdentity* _identity;
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
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)completion;
-(void)didResignActive:(id)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)viewDidLoad;
-(NSString *)passcode;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)enrollResult:(int)arg1 identity:(id)arg2 ;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(void)beginEnrollment;
-(void)deleteIdentity;
-(void)endEnrollment;
-(void)resetLeftNavigationItem;
-(void)_didCompleteMesaControllerWithResult:(unsigned long long)arg1 ;
-(id)_cancelLeftNavigationItem;
-(void)restartEnrollment;
@end

