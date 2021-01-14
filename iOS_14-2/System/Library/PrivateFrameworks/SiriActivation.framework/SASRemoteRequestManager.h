/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class AFRemoteRequestWatcher, INUIAppIntentDeliverer, AFRequestInfo, CMPocketStateManager;

@interface SASRemoteRequestManager : NSObject {

	BOOL _hasPendingVoiceTriggerActivation;
	AFRemoteRequestWatcher* _remoteRequestWatcher;
	INUIAppIntentDeliverer* _currentAppIntentDeliverer;
	unsigned long long _currentVoiceTriggerRestriction;
	unsigned long long _pendingVoiceTriggerRestrictionCount;
	AFRequestInfo* _pendingVoiceTriggerActivationInfo;
	CMPocketStateManager* _pocketStateManager;
	long long _currentPocketState;

}

@property (nonatomic,retain) AFRemoteRequestWatcher * remoteRequestWatcher;                       //@synthesize remoteRequestWatcher=_remoteRequestWatcher - In the implementation block
@property (nonatomic,retain) INUIAppIntentDeliverer * currentAppIntentDeliverer;                  //@synthesize currentAppIntentDeliverer=_currentAppIntentDeliverer - In the implementation block
@property (assign,nonatomic) unsigned long long currentVoiceTriggerRestriction;                   //@synthesize currentVoiceTriggerRestriction=_currentVoiceTriggerRestriction - In the implementation block
@property (assign,nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount;              //@synthesize pendingVoiceTriggerRestrictionCount=_pendingVoiceTriggerRestrictionCount - In the implementation block
@property (assign,nonatomic) BOOL hasPendingVoiceTriggerActivation;                               //@synthesize hasPendingVoiceTriggerActivation=_hasPendingVoiceTriggerActivation - In the implementation block
@property (nonatomic,retain) AFRequestInfo * pendingVoiceTriggerActivationInfo;                   //@synthesize pendingVoiceTriggerActivationInfo=_pendingVoiceTriggerActivationInfo - In the implementation block
@property (nonatomic,retain) CMPocketStateManager * pocketStateManager;                           //@synthesize pocketStateManager=_pocketStateManager - In the implementation block
@property (assign,nonatomic) long long currentPocketState;                                        //@synthesize currentPocketState=_currentPocketState - In the implementation block
+(id)new;
+(id)manager;
-(id)init;
-(id)_init;
-(void)setPocketStateManager:(CMPocketStateManager *)arg1 ;
-(void)setRemoteRequestWatcher:(AFRemoteRequestWatcher *)arg1 ;
-(AFRemoteRequestWatcher *)remoteRequestWatcher;
-(void)_handleRemotePrewarmWithInfo:(id)arg1 ;
-(void)_handleNewRemoteRequestWithInfo:(id)arg1 ;
-(void)_handleRemoteRequestDismissalWithReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 ;
-(BOOL)_requestWatcherVoiceActivationEnabled;
-(void)_startFetchingPocketStateUpdates;
-(void)setCurrentVoiceTriggerRestriction:(unsigned long long)arg1 ;
-(unsigned long long)pendingVoiceTriggerRestrictionCount;
-(void)setPendingVoiceTriggerRestrictionCount:(unsigned long long)arg1 ;
-(void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg1 delay:(double)arg2 ;
-(void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg1 ;
-(void)setHasPendingVoiceTriggerActivation:(BOOL)arg1 ;
-(void)setPendingVoiceTriggerActivationInfo:(AFRequestInfo *)arg1 ;
-(unsigned long long)currentVoiceTriggerRestriction;
-(void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg1 ;
-(BOOL)hasPendingVoiceTriggerActivation;
-(AFRequestInfo *)pendingVoiceTriggerActivationInfo;
-(INUIAppIntentDeliverer *)currentAppIntentDeliverer;
-(void)setCurrentAppIntentDeliverer:(INUIAppIntentDeliverer *)arg1 ;
-(CMPocketStateManager *)pocketStateManager;
-(long long)currentPocketState;
-(void)setCurrentPocketState:(long long)arg1 ;
@end

