/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol _HMMediaSessionDelegate;
@class HMFUnfairLock, NSUUID, NSString, _HMContext, HMAudioControl;

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSUUID* _uuid;
	NSString* _routeUID;
	long long _playbackState;
	long long _shuffleState;
	long long _repeatState;
	NSString* _mediaUniqueIdentifier;
	_HMContext* _context;
	NSUUID* _uniqueIdentifier;
	NSUUID* _messageTargetUUID;
	HMAudioControl* _audioControl;
	id<_HMMediaSessionDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * messageTargetUUID;                                      //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (assign,nonatomic,__weak) id<_HMMediaSessionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long playbackState;                                                 //@synthesize playbackState=_playbackState - In the implementation block
@property (readonly) long long shuffleState;                                                  //@synthesize shuffleState=_shuffleState - In the implementation block
@property (readonly) long long repeatState;                                                   //@synthesize repeatState=_repeatState - In the implementation block
@property (copy,readonly) NSString * mediaUniqueIdentifier;                                   //@synthesize mediaUniqueIdentifier=_mediaUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * routeUID;                                           //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (readonly) HMAudioControl * audioControl;                                           //@synthesize audioControl=_audioControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<_HMMediaSessionDelegate>)delegate;
-(void)setDelegate:(id<_HMMediaSessionDelegate>)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(long long)playbackState;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(void)setPlaybackState:(long long)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(id)messageDestination;
-(HMAudioControl *)audioControl;
-(void)updateMediaState:(id)arg1 ;
-(void)_handleSessionPlaybackUpdated:(id)arg1 ;
-(void)_handleSessionRouteUIDUpdated:(id)arg1 ;
-(long long)shuffleState;
-(long long)repeatState;
-(NSString *)mediaUniqueIdentifier;
-(void)_updateMediaState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1 ;
-(void)setShuffleState:(long long)arg1 ;
-(void)setRepeatState:(long long)arg1 ;
-(void)setMediaUniqueIdentifier:(NSString *)arg1 ;
-(void)_notifyDelegateOfUpdatedMediaState;
-(void)_notifyDelegateOfUpdatedRouteUID:(id)arg1 ;
-(id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 shuffleState:(long long)arg4 repeatState:(long long)arg5 audioControl:(id)arg6 mediaUniqueIdentifier:(id)arg7 ;
-(void)setMessageTargetUUID:(NSUUID *)arg1 ;
-(void)setPlaybackState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updatePlaybackState:(id)arg1 ;
@end

