/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_source, PKAccountProvisioningControllerDelegate;
@class NPKCompanionAgentConnection, PKAccountCredential, PKPaymentProvisioningController, NSObject, NSString;

@interface PKAccountProvisioningController : NSObject {

	NPKCompanionAgentConnection* _watchConnection;
	PKAccountCredential* _accountCredential;
	PKPaymentProvisioningController* _provisioningController;
	BOOL _makeDefaultInAMP;
	NSObject*<OS_dispatch_source> _activationTimer;
	BOOL _usingRemoteLibrary;
	BOOL _passIsActivated;
	BOOL _didAddToAMP;
	double _passActivationTimeout;
	id<PKAccountProvisioningControllerDelegate> _delegate;
	NSString* _provisionedPassUniqueID;
	unsigned long long _provisionLocalPassState;
	unsigned long long _localPassActivationState;
	unsigned long long _provisionWatchPassState;
	unsigned long long _addToIDMSState;
	unsigned long long _makeAccountPassDefaultOnLocalDeviceState;
	unsigned long long _addToAMPState;

}

@property (assign,nonatomic) double passActivationTimeout;                                               //@synthesize passActivationTimeout=_passActivationTimeout - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountProvisioningControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * provisionedPassUniqueID;                                           //@synthesize provisionedPassUniqueID=_provisionedPassUniqueID - In the implementation block
@property (assign,nonatomic) BOOL didAddToAMP;                                                           //@synthesize didAddToAMP=_didAddToAMP - In the implementation block
@property (nonatomic,readonly) unsigned long long provisionLocalPassState;                               //@synthesize provisionLocalPassState=_provisionLocalPassState - In the implementation block
@property (nonatomic,readonly) unsigned long long localPassActivationState;                              //@synthesize localPassActivationState=_localPassActivationState - In the implementation block
@property (nonatomic,readonly) unsigned long long provisionWatchPassState;                               //@synthesize provisionWatchPassState=_provisionWatchPassState - In the implementation block
@property (nonatomic,readonly) unsigned long long addToIDMSState;                                        //@synthesize addToIDMSState=_addToIDMSState - In the implementation block
@property (nonatomic,readonly) unsigned long long makeAccountPassDefaultOnLocalDeviceState;              //@synthesize makeAccountPassDefaultOnLocalDeviceState=_makeAccountPassDefaultOnLocalDeviceState - In the implementation block
@property (nonatomic,readonly) unsigned long long addToAMPState;                                         //@synthesize addToAMPState=_addToAMPState - In the implementation block
+(BOOL)_isPaymentPassActivated:(id)arg1 forAccountCredential:(id)arg2 ;
-(id<PKAccountProvisioningControllerDelegate>)delegate;
-(BOOL)didAddToAMP;
-(void)_stopPassActivationObserver;
-(id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 usingRemoteLibrary:(BOOL)arg3 ;
-(void)setDelegate:(id<PKAccountProvisioningControllerDelegate>)arg1 ;
-(void)_startPassActivationObserver;
-(void)_informDelegateOfStateUpdate;
-(void)_processRemainingTasks;
-(void)_informDelegateOfError:(id)arg1 ;
-(void)_provisionAccountCredenital:(id)arg1 provisioningController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)makeAccountPassDefaultOnLocalDevice;
-(void)addToAMPAsDefault:(BOOL)arg1 ;
-(void)setDidAddToAMP:(BOOL)arg1 ;
-(void)_passLibraryDidChange:(id)arg1 ;
-(id)_notificationDidChangeNames;
-(void)_handlePassActiviated;
-(unsigned long long)addToAMPState;
-(id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 accountService:(id)arg3 ;
-(void)provisionAccountPassToLocalDevice;
-(void)provisionAccountPassToWatchAsDefault:(BOOL)arg1 ;
-(double)passActivationTimeout;
-(void)setPassActivationTimeout:(double)arg1 ;
-(NSString *)provisionedPassUniqueID;
-(void)setProvisionedPassUniqueID:(NSString *)arg1 ;
-(unsigned long long)provisionLocalPassState;
-(unsigned long long)addToIDMSState;
-(unsigned long long)localPassActivationState;
-(unsigned long long)provisionWatchPassState;
-(unsigned long long)makeAccountPassDefaultOnLocalDeviceState;
-(void)addToIDMS;
-(void)dealloc;
@end

