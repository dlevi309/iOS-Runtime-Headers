/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKPaymentWebServiceCompanionTargetDeviceDelegate.h>

@class PKPaymentWebService, NPKPaymentWebServiceCompanionTargetDevice, PKPeerPaymentWebService, PKPeerPaymentAccount, NPKCompanionAgentConnection, NPKPeerPaymentWebServiceCompanionTargetDevice, NSString;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate> {

	PKPaymentWebService* _webService;
	NPKPaymentWebServiceCompanionTargetDevice* _targetDevice;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentAccount* _peerPaymentAccount;
	NPKCompanionAgentConnection* _companionAgentConnection;
	NPKPeerPaymentWebServiceCompanionTargetDevice* _peerPaymentTargetDevice;

}

@property (nonatomic,retain) PKPaymentWebService * webService;                                                     //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentWebService * peerPaymentWebService;                                      //@synthesize peerPaymentWebService=_peerPaymentWebService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;                                            //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) NPKCompanionAgentConnection * companionAgentConnection;                               //@synthesize companionAgentConnection=_companionAgentConnection - In the implementation block
@property (nonatomic,retain) NPKPaymentWebServiceCompanionTargetDevice * targetDevice;                             //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) NPKPeerPaymentWebServiceCompanionTargetDevice * peerPaymentTargetDevice;              //@synthesize peerPaymentTargetDevice=_peerPaymentTargetDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWebServiceProvider;
-(NPKPaymentWebServiceCompanionTargetDevice *)targetDevice;
-(PKPaymentWebService *)webService;
-(id)init;
-(id)_peerPaymentAccount;
-(PKPeerPaymentWebService *)peerPaymentWebService;
-(void)setTargetDevice:(NPKPaymentWebServiceCompanionTargetDevice *)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2 ;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg1 ;
-(void)setNewAuthRandom:(/*^block*/id)arg1 ;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(void)dealloc;
-(NPKCompanionAgentConnection *)companionAgentConnection;
-(void)setCompanionAgentConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)setPeerPaymentWebService:(PKPeerPaymentWebService *)arg1 ;
-(id)_webServiceContext;
-(id)_peerPaymentWebServiceContext;
-(void)_deviceFailedToPair:(id)arg1 ;
-(NPKPeerPaymentWebServiceCompanionTargetDevice *)peerPaymentTargetDevice;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(BOOL)arg3 ;
-(void)handlePushToken:(id)arg1 ;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1 ;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3 ;
-(void)handleAppletState:(id)arg1 forUniqueID:(id)arg2 ;
-(void)handleRemoveTransactionsWithIdentifiers:(id)arg1 ;
-(void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2 ;
-(void)handleBalanceReminderUpdate:(id)arg1 balance:(id)arg2 forUniqueID:(id)arg3 ;
-(void)handleCredentialsUpdate:(id)arg1 forUniqueID:(id)arg2 ;
-(void)archiveWebServiceContext:(id)arg1 ;
-(void)archiveWebServiceBackgroundContext:(id)arg1 ;
-(void)handlePaymentWebServiceContextFromWatch:(id)arg1 ;
-(void)sendWebServiceContextToWatch;
-(void)showPaymentSetupForAppDisplayName:(id)arg1 ;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2 ;
-(void)handleDownloadAllPaymentPasses;
-(void)checkCompanionPeerPaymentRegistrationState;
-(void)loadWebService;
-(void)setPeerPaymentTargetDevice:(NPKPeerPaymentWebServiceCompanionTargetDevice *)arg1 ;
@end

