/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerDelegate.h>

@protocol PKPeerPaymentAssociatedAccountSetupDelegate, OS_dispatch_source;
@class PKPeerPaymentSetupFlowController, PKFamilyMember, PKPeerPaymentIconEducationView, PKPeerPaymentAccount, NSObject, PKAppleCashSharingRecipientCapabilities, NSString;

@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDelegate> {

	PKPeerPaymentSetupFlowController* _controller;
	PKFamilyMember* _familyMember;
	id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
	unsigned long long _state;
	PKPeerPaymentIconEducationView* _iconEducationView;
	PKPeerPaymentAccount* _account;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _timerHasFired;
	PKAppleCashSharingRecipientCapabilities* _childAppleCashCapabilities;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setState:(unsigned long long)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(void)viewDidLoad;
-(void)_cancelTimer;
-(void)_handlePeerPaymentAccountDidChangeNotification;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)_checkFamilyMemberAppleCashCapabilities;
-(void)_sendMoneyInMessages;
-(BOOL)_isAssociatedAccountPending;
-(void)_startTimerIfNeccessary;
-(unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(BOOL*)arg1 ;
-(void)_terminateAddAssociatedAccountFlowWithSucces:(BOOL)arg1 updatedAccount:(id)arg2 ;
-(void)familyMemberAppleCashCapabilitiesUpdated:(id)arg1 forHandle:(id)arg2 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)dealloc;
@end

