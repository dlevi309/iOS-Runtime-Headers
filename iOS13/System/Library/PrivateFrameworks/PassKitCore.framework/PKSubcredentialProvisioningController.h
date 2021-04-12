/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKSubcredentialProvisioningOperationDelegate.h>
#import <libobjc.A.dylib/PKAppletSubcredentialPairingSessionDelegate.h>

@protocol OS_dispatch_queue, PKSubcredentialProvisioningControllerDelegate;
@class PKSubcredentialProvisioningConfiguration, PKSubcredentialProvisioningTransitionTable, NSObject, PKAssertion, PKSubcredentialProvisioningOperation, PKPaymentPass, PKAppletSubcredential, NSString;

@interface PKSubcredentialProvisioningController : NSObject <PKSubcredentialProvisioningOperationDelegate, PKAppletSubcredentialPairingSessionDelegate> {

	PKSubcredentialProvisioningConfiguration* _configuration;
	PKSubcredentialProvisioningTransitionTable* _transitionTable;
	NSObject*<OS_dispatch_queue> _operationSerialQueue;
	os_unfair_lock_s _stateLock;
	BOOL _hasStarted;
	BOOL _hasBeenCanceled;
	PKAssertion* _userNotificationAssertion;
	PKAssertion* _contactlessInterfaceSupressionAssertion;
	PKSubcredentialProvisioningOperation* _currentOperation;
	long long _currentState;
	PKPaymentPass* _provisionedPass;
	PKAppletSubcredential* _addedCredential;
	/*^block*/id _cancelCompletion;
	id<PKSubcredentialProvisioningControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialProvisioningControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredential * addedCredential; 
@property (nonatomic,readonly) PKPaymentPass * provisionedPass; 
@property (nonatomic,readonly) long long currentState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PKSubcredentialProvisioningControllerDelegate>)delegate;
-(void)setDelegate:(id<PKSubcredentialProvisioningControllerDelegate>)arg1 ;
-(long long)currentState;
-(void)operation:(id)arg1 addedCredential:(id)arg2 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(BOOL)arg2 ;
-(void)operation:(id)arg1 addedPass:(id)arg2 ;
-(void)operationWasCanceled:(id)arg1 ;
-(PKAppletSubcredential *)addedCredential;
-(PKPaymentPass *)provisionedPass;
-(id)webServiceFromConfiguration:(id)arg1 ;
-(void)transitionToState:(long long)arg1 withOperation:(id)arg2 error:(id)arg3 ;
-(void)acquireProvisioningAssertionsWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpProvisioningAfterError:(BOOL)arg1 ;
-(void)releaseProvisioningAssertions;
-(void)finishProvisioningWithError:(id)arg1 ;
-(void)operation:(id)arg1 advanceToState:(long long)arg2 ;
-(void)operation:(id)arg1 failWithError:(id)arg2 ;
-(void)startProvisioningWithConfiguration:(id)arg1 ;
-(void)cancelProvisioningWithCompletion:(/*^block*/id)arg1 ;
@end

