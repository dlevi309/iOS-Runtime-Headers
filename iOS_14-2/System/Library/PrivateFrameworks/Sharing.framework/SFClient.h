/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCConnection;

@interface SFClient : NSObject {

	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_invalidate;
-(void)appleIDInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)preventExitForLocaleReason:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAudioRoutingScore:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subCredentialPresentCardWithParams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)testContinuityKeyboardBegin:(BOOL)arg1 ;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ensureXPCStarted;
-(void)findContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setupDevice:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showDevicePickerWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_interrupted;
-(void)activityStateWithCompletion:(/*^block*/id)arg1 ;
-(void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getDeviceAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openSetupURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reenableProxCardType:(unsigned char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidated;
-(void)invalidate;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)wifiPasswordSharingAvailabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)getPeopleSuggestions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)invalidationHandler;
-(void)retriggerProximityPairing:(/*^block*/id)arg1 ;
-(void)repairDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retriggerProximitySetup:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(void)dealloc;
@end

