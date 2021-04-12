/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFLocking.h>

@class HMFUnfairLock, HMDMediaSession, NSString;

@interface HMDMediaProfile : HMDAccessoryProfile <HMFLogging, HMFLocking> {

	HMFUnfairLock* _lock;
	HMDMediaSession* _mediaSession;

}

@property (retain) HMDMediaSession * mediaSession;                         //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,readonly) unsigned long long capability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)namespace;
+(BOOL)hasMessageReceiverChildren;
+(id)uniqueIdentifierFromAccessory:(id)arg1 ;
+(id)sessionNamespace;
-(void)unlock;
-(id)urlString;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)lock;
-(NSString *)description;
-(void)registerForNotifications;
-(void)registerForMessages;
-(unsigned long long)capability;
-(HMDMediaSession *)mediaSession;
-(void)setMediaSession:(HMDMediaSession *)arg1 ;
-(void)unregisterForNotifications;
-(id)initWithAccessory:(id)arg1 ;
-(id)messageReceiverChildren;
-(void)updateWithResponses:(id)arg1 message:(id)arg2 ;
-(id)assistantObject;
-(void)handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4 ;
-(void)_handleSetPower:(id)arg1 ;
-(BOOL)_updatePlayback:(id)arg1 ;
-(void)_handleMediaResponses:(id)arg1 message:(id)arg2 ;
-(BOOL)_updateRefreshPlayback:(id)arg1 ;
-(void)sessionAudioControlUpdated:(id)arg1 ;
-(void)handleSessionUpdatedNotification:(id)arg1 ;
-(void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleSetPlayback:(id)arg1 ;
-(void)_handleMediaSessionSetAudioControl:(id)arg1 ;
-(void)_handleRefreshPlayback:(id)arg1 ;
-(void)handleSessionPlaybackStateUpdatedNotification:(id)arg1 ;
-(void)handleSessionVolumeUpdatedNotification:(id)arg1 ;
-(BOOL)_updateAudioControl:(id)arg1 ;
-(void)_sessionPlaybackStateUpdated:(id)arg1 notifyXPCClients:(BOOL)arg2 ;
@end

