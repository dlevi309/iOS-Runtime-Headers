/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FASetupDelegate.h>

@protocol FAFamilySetupPrompterDelegate;
@class ACAccountStore, ACAccount, UIViewController, NSOperationQueue, NSString;

@interface FAFamilySetupPrompter : NSObject <FASetupDelegate> {

	ACAccountStore* _accountStore;
	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	ACAccount* _iTunesAccount;
	UIViewController* _presentingViewController;
	NSOperationQueue* _networkingQueue;
	BOOL _isRequestInFlight;
	id<FAFamilySetupPrompterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FAFamilySetupPrompterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<FAFamilySetupPrompterDelegate>)delegate;
-(void)setDelegate:(id<FAFamilySetupPrompterDelegate>)arg1 ;
-(id)initWithiTunesAccount:(id)arg1 ;
-(void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(BOOL)arg2 ;
-(void)dealloc;
-(void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(void)_showUnderageAlertWithEligibilityResponse:(id)arg1 ;
-(void)_handleFamilyEligibilityResponse:(id)arg1 isFirstRun:(BOOL)arg2 ;
-(void)_showConfirmationForStartingFamilySetupWithPendingInvite;
-(void)_showConfirmationForStartingFamilySetup;
-(void)_showPendingInvitesDialog;
-(void)_startFamilySetupFlowWithEligibilityResponse:(id)arg1 ;
-(void)_goToFamilySetup;
-(void)_goToInvitations;
@end

