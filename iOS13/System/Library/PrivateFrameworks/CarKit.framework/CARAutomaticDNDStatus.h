/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject {

	unsigned long long _cachedAutomaticDNDActiveState;
	/*^block*/id _statusChangeObserver;
	/*^block*/id _exitConfirmationChangeObserver;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long cachedAutomaticDNDActiveState;              //@synthesize cachedAutomaticDNDActiveState=_cachedAutomaticDNDActiveState - In the implementation block
@property (nonatomic,copy) id statusChangeObserver;                                           //@synthesize statusChangeObserver=_statusChangeObserver - In the implementation block
@property (nonatomic,copy) id exitConfirmationChangeObserver;                                 //@synthesize exitConfirmationChangeObserver=_exitConfirmationChangeObserver - In the implementation block
+(id)automaticDNDQueue;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_setupConnection;
-(void)_detachObservers;
-(unsigned long long)automaticDNDTriggeringMethod;
-(BOOL)hasStartedFirstRidePreference;
-(BOOL)hasCompletedFirstRidePreference;
-(BOOL)hasOptedOutOfAutomaticDND;
-(BOOL)hasAdjustedTriggerMethod;
-(BOOL)shouldActivateWithCarPlay;
-(id)firstBuddyPresentationFirstMoment;
-(id)disableTimerTimestamp;
-(BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
-(BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
-(BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
-(BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
-(id)automaticDNDInternalAutoReplyWhitelist;
-(void)fetchAutomaticDNDAssertionWithReply:(/*^block*/id)arg1 ;
-(void)fetchAutomaticDNDExitConfirmationWithReply:(/*^block*/id)arg1 ;
-(void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)autoReplyMessageWithReply:(/*^block*/id)arg1 ;
-(void)setAutoReplyMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disableDNDUntilEndOfDriveWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_xpcFetchWithServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setMostRecentTriggerMethodChange:(double)arg1 ;
-(void)setHasAdjustedTriggerMethod:(BOOL)arg1 ;
-(id)statusChangeObserver;
-(id)exitConfirmationChangeObserver;
-(void)_completeDNDBuddyWithOption:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_resetUserDNDSettingsWithReply:(/*^block*/id)arg1 ;
-(void)setAutomaticDNDActive:(BOOL)arg1 withReply:(/*^block*/id)arg2 ;
-(void)allowedAutoReplyAudience:(/*^block*/id)arg1 ;
-(void)outputOfDiagnosticUtilityWithReply:(/*^block*/id)arg1 ;
-(BOOL)platformSupportsSendingAutoReplies;
-(BOOL)platformSupportsUrgentMessages;
-(BOOL)shouldEnforceInternalWhitelist;
-(void)setAutomaticDNDInternalAutoReplyWhitelist:(id)arg1 ;
-(void)fetchAutomaticDNDTriggerPreferenceWithReply:(/*^block*/id)arg1 ;
-(void)setAutomaticDNDTriggerPreference:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)disableDNDUntilEndOfDriveWithReply:(/*^block*/id)arg1 ;
-(void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)arg1 ;
-(void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)arg1 ;
-(void)setCompletedFirstRidePreference:(BOOL)arg1 ;
-(void)setStartedFirstRidePreference:(BOOL)arg1 ;
-(void)setAutomaticDNDTriggeringMethod:(unsigned long long)arg1 ;
-(void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)arg1 ;
-(void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)arg1 ;
-(void)setOptedOutOfAutomaticDND:(BOOL)arg1 ;
-(void)setActivateWithCarPlay:(BOOL)arg1 ;
-(double)mostRecentTriggerMethodChange;
-(void)setFirstBuddyPresentationFirstMoment:(id)arg1 ;
-(void)setDisableTimerTimestamp:(id)arg1 ;
-(void)_performCARPreferencesBlock:(/*^block*/id)arg1 forReading:(BOOL)arg2 ;
-(void)_fetchStatusForObserver;
-(void)_notifyExitConfirmationActive:(BOOL)arg1 ;
-(unsigned long long)cachedAutomaticDNDActiveState;
-(void)setStatusChangeObserver:(id)arg1 ;
-(void)setExitConfirmationChangeObserver:(id)arg1 ;
@end

