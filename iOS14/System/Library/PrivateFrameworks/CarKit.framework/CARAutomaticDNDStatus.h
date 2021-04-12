/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_DNDServiceInterface;
+(BOOL)isAutomaticDNDAvailable;
-(void)_setupConnection;
-(unsigned long long)cachedAutomaticDNDActiveState;
-(unsigned long long)automaticDNDTriggeringMethod;
-(BOOL)isAutomaticDNDInternalDNDBuddyPreference;
-(BOOL)hasAdjustedTriggerMethod;
-(void)setDisableTimerTimestamp:(id)arg1 ;
-(BOOL)shouldActivateWithCarPlay;
-(id)init;
-(void)disableDNDUntilEndOfDriveWithReply:(/*^block*/id)arg1 ;
-(void)setActivateWithCarPlay:(BOOL)arg1 ;
-(BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
-(id)exitConfirmationChangeObserver;
-(void)setFirstBuddyPresentationFirstMoment:(id)arg1 ;
-(id)statusChangeObserver;
-(void)_performCARPreferencesBlock:(/*^block*/id)arg1 forReading:(BOOL)arg2 ;
-(void)setOptedOutOfAutomaticDND:(BOOL)arg1 ;
-(void)setAutoReplyMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)arg1 ;
-(void)fetchAutomaticDNDAssertionWithReply:(/*^block*/id)arg1 ;
-(BOOL)platformSupportsSendingAutoReplies;
-(void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)arg1 ;
-(void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(BOOL)arg1 ;
-(BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
-(NSXPCConnection *)connection;
-(void)outputOfDiagnosticUtilityWithReply:(/*^block*/id)arg1 ;
-(void)_detachObservers;
-(BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
-(void)setAutomaticDNDActive:(BOOL)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setAutomaticDNDTriggerPreference:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)allowedAutoReplyAudience:(/*^block*/id)arg1 ;
-(void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchAutomaticDNDTriggerPreferenceWithReply:(/*^block*/id)arg1 ;
-(void)autoReplyMessageWithReply:(/*^block*/id)arg1 ;
-(BOOL)hasOptedOutOfAutomaticDND;
-(void)disableDNDUntilEndOfDriveWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(double)mostRecentTriggerMethodChange;
-(id)firstBuddyPresentationFirstMoment;
-(void)_fetchStatusForObserver;
-(BOOL)hasCompletedFirstRidePreference;
-(BOOL)hasStartedFirstRidePreference;
-(void)fetchAutomaticDNDExitConfirmationWithReply:(/*^block*/id)arg1 ;
-(void)_completeDNDBuddyWithOption:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setHasAdjustedTriggerMethod:(BOOL)arg1 ;
-(void)_xpcFetchWithServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setCompletedFirstRidePreference:(BOOL)arg1 ;
-(void)_notifyExitConfirmationActive:(BOOL)arg1 ;
-(void)_resetUserDNDSettingsWithReply:(/*^block*/id)arg1 ;
-(void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)arg1 ;
-(void)setExitConfirmationChangeObserver:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setStatusChangeObserver:(id)arg1 ;
-(BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
-(void)setAutomaticDNDTriggeringMethod:(unsigned long long)arg1 ;
-(void)setStartedFirstRidePreference:(BOOL)arg1 ;
-(void)setMostRecentTriggerMethodChange:(double)arg1 ;
-(BOOL)platformSupportsUrgentMessages;
-(void)dealloc;
-(BOOL)shouldEnforceInternalWhitelist;
-(void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)arg1 ;
-(id)disableTimerTimestamp;
@end

