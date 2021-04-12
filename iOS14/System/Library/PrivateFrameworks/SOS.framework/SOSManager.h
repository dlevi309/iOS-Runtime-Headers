/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/

#import <SOS/SOSInternalClientProtocol.h>
#import <SOS/SOSClientProtocol.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSXPCConnection, NSMapTable, NSString;

@interface SOSManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol> {

	BOOL _sendingLocationUpdate;
	long long _sosInitiationState;
	long long _sosInteractiveState;
	NSObject*<OS_dispatch_semaphore> _initialStateSemaphore;
	int _connectionRequestNotificationToken;
	NSXPCConnection* _connection;
	NSMapTable* _observerToQueue;
	NSString* _mostRecentSOSActivationReason;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int connectionRequestNotificationToken;                                                 //@synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken - In the implementation block
@property (nonatomic,readonly) NSMapTable * observerToQueue;                                                         //@synthesize observerToQueue=_observerToQueue - In the implementation block
@property (nonatomic,copy) NSString * mostRecentSOSActivationReason;                                                 //@synthesize mostRecentSOSActivationReason=_mostRecentSOSActivationReason - In the implementation block
@property (assign,getter=isAutomaticCallCountdownEnabled,nonatomic) BOOL automaticCallCountdownEnabled; 
@property (assign,getter=isAllowedToMessageSOSContacts,nonatomic) BOOL allowedToMessageSOSContacts; 
@property (assign,nonatomic) long long currentSOSInitiationState; 
@property (assign,nonatomic) long long currentSOSInteractiveState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)triggerSOS;
+(id)sharedInstance;
+(void)triggerSOSWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)_beginSOSCallWithCompletion:(/*^block*/id)arg1 triggerMechanism:(long long)arg2 ;
+(BOOL)shouldTriggerSOS;
+(void)notifySOSTriggerMechanismChanged;
+(void)_triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)deviceSupportsSOS;
+(void)triggerSOSWithCompletion:(/*^block*/id)arg1 ;
+(long long)TPInCallUILaunchReasonForSOSTriggerMechanism:(long long)arg1 ;
-(BOOL)isAutomaticCallCountdownEnabled;
-(long long)currentSOSInteractiveState;
-(id)init;
-(void)startSendingLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)setLongPressTriggersEmergencySOS:(BOOL)arg1 ;
-(void)setAllowedToMessageSOSContacts:(BOOL)arg1 ;
-(void)mostRecentLocationSentWithCompletion:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(BOOL)longPressTriggersEmergencySOS;
-(void)setCurrentSOSInteractiveState:(long long)arg1 ;
-(void)setAutomaticCallCountdownEnabled:(BOOL)arg1 ;
-(BOOL)isAllowedToMessageSOSContacts;
-(void)didDismissClientSOSBeforeSOSCall:(long long)arg1 ;
-(NSXPCConnection *)connection;
-(NSMapTable *)observerToQueue;
-(BOOL)isSendingLocationUpdate;
-(void)removeObserver:(id)arg1 ;
-(id)remoteSOSEngineProxy;
-(void)_waitForInitialState;
-(int)connectionRequestNotificationToken;
-(long long)currentSOSInitiationState;
-(void)setCurrentSOSInitiationState:(long long)arg1 ;
-(void)setSendingLocationUpdate:(BOOL)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)updateClientCurrentSOSInitiationState:(long long)arg1 ;
-(NSString *)mostRecentSOSActivationReason;
-(void)setConnectionRequestNotificationToken:(int)arg1 ;
-(void)updateClientCurrentSOSInteractiveState:(long long)arg1 ;
-(void)setMostRecentSOSActivationReason:(NSString *)arg1 ;
-(void)willStartSendingLocationUpdate;
-(void)dismissSOSWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_resetStateWithCompletion:(/*^block*/id)arg1 ;
-(void)stopSendingLocationUpdate;
-(void)dismissClientSOSWithCompletion:(/*^block*/id)arg1 ;
-(void)didDismissSOSBeforeSOSCall:(long long)arg1 ;
@end

