/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)_ensureXPCStarted;
-(void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)activityStateWithCompletion:(/*^block*/id)arg1 ;
-(void)appleIDInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)subCredentialPresentCardWithParams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)findContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getDeviceAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPeopleSuggestions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openSetupURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preventExitForLocaleReason:(id)arg1 ;
-(void)reenableProxCardType:(unsigned char)arg1 completion:(/*^block*/id)arg2 ;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)retriggerProximityPairing:(/*^block*/id)arg1 ;
-(void)retriggerProximitySetup:(/*^block*/id)arg1 ;
-(void)setAudioRoutingScore:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)showDevicePickerWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)testContinuityKeyboardBegin:(BOOL)arg1 ;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)wifiPasswordSharingAvailabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)repairDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupDevice:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

