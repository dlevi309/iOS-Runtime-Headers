/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableSet, NSString, HMDMediaEndpoint, HMDMediaSessionState, NSObject, NSUUID, NSMutableArray, HMFTimer, NSArray, NSSet;

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {

	id<HMFLocking> _lock;
	NSMutableSet* _mediaProfiles;
	BOOL _connected;
	BOOL _currentAccessorySession;
	NSString* _sessionIdentifier;
	HMDMediaEndpoint* _endpoint;
	HMDMediaSessionState* _state;
	NSString* _logID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uuid;
	NSMutableArray* _setPlaybackStateCompletionHandlers;
	HMFTimer* _setPlaybackStateTimer;

}

@property (nonatomic,retain) HMDMediaEndpoint * endpoint;                                                //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) HMDMediaSessionState * state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * setPlaybackStateCompletionHandlers;                        //@synthesize setPlaybackStateCompletionHandlers=_setPlaybackStateCompletionHandlers - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                          //@synthesize connected=_connected - In the implementation block
@property (assign,getter=isCurrentAccessorySession,nonatomic) BOOL currentAccessorySession;              //@synthesize currentAccessorySession=_currentAccessorySession - In the implementation block
@property (nonatomic,retain) NSString * logID;                                                           //@synthesize logID=_logID - In the implementation block
@property (nonatomic,retain) HMFTimer * setPlaybackStateTimer;                                           //@synthesize setPlaybackStateTimer=_setPlaybackStateTimer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;                                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * mediaProfiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
+(id)sessionForCurrentAccessory:(id)arg1 ;
+(id)mediaPropertyMessageKeys;
+(Class)mediaPropertyValueTypeWithMessageKey:(id)arg1 ;
-(BOOL)isConnected;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)timerDidFire:(id)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(NSArray *)mediaProfiles;
-(NSString *)logID;
-(id)dumpState;
-(void)setEndpoint:(HMDMediaEndpoint *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDMediaEndpoint *)endpoint;
-(id)logIdentifier;
-(NSString *)sessionIdentifier;
-(void)setState:(HMDMediaSessionState *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HMDMediaSessionState *)state;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)registerForSessionUpdates:(BOOL)arg1 ;
-(id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3 ;
-(void)updateWithResponses:(id)arg1 message:(id)arg2 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg1 ;
-(void)readProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3 ;
-(id)_initWithMediaProfiles:(id)arg1 state:(id)arg2 ;
-(HMFTimer *)setPlaybackStateTimer;
-(void)setSetPlaybackStateTimer:(HMFTimer *)arg1 ;
-(BOOL)isCurrentAccessorySession;
-(void)_postNotificationOfMediaStateUpdateWithError:(id)arg1 inResponseToMessage:(id)arg2 ;
-(void)_getPlaybackStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleGetPlaybackState:(id)arg1 ;
-(void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1 ;
-(void)_postNotificationOfMediaStateUpdateWithPayload:(id)arg1 ;
-(void)handleMediaPlaybackStateNotification:(id)arg1 ;
-(NSMutableArray *)setPlaybackStateCompletionHandlers;
-(void)_queueSetPlaybackStateCompletion:(/*^block*/id)arg1 ;
-(void)_setPlaybackState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSetPlayback:(id)arg1 ;
-(void)_handleMediaSessionSetAudioControl:(id)arg1 ;
-(void)_handleMediaUpdateVolume:(id)arg1 ;
-(void)_handleMediaUpdateMuted:(id)arg1 ;
-(void)_registerForSessionUpdates:(BOOL)arg1 ;
-(void)handleRefreshPlayback:(id)arg1 ;
-(void)handleSetPlayback:(id)arg1 ;
-(void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3 ;
-(void)handleMediaSessionSetAudioControl:(id)arg1 ;
-(void)updateEndpoint:(id)arg1 ;
-(void)addMediaProfile:(id)arg1 ;
-(void)removeMediaProfile:(id)arg1 ;
-(void)setCurrentAccessorySession:(BOOL)arg1 ;
-(void)setLogID:(NSString *)arg1 ;
-(void)setSetPlaybackStateCompletionHandlers:(NSMutableArray *)arg1 ;
@end

