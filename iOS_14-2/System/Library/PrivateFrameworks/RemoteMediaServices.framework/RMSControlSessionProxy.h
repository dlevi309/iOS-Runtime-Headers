/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RMSSessionProxy.h>
#import <libobjc.A.dylib/RMSControlSession.h>

@protocol RMSControlSessionDelegate;
@class RMSIDSClient, RMSNowPlayingInfo, RMSService, NSString;

@interface RMSControlSessionProxy : RMSSessionProxy <RMSControlSession> {

	RMSIDSClient* _idsClient;
	RMSNowPlayingInfo* _nowPlayingInfo;
	id<RMSControlSessionDelegate> _delegate;
	RMSService* _service;

}

@property (assign,nonatomic,__weak) id<RMSControlSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RMSService * service;                                     //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logout;
-(id)init;
-(id<RMSControlSessionDelegate>)delegate;
-(void)setDelegate:(id<RMSControlSessionDelegate>)arg1 ;
-(RMSService *)service;
-(void)dealloc;
-(void)sendText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)beginObservingNowPlaying;
-(void)endObservingNowPlaying;
-(void)sendPlaybackCommand:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pickAudioRoute:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToPlaybackTime:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendNavigationCommand:(long long)arg1 ;
-(void)_handleDidReceivePairingChallengeRequestNotification:(id)arg1 ;
-(void)_handleNowPlayingInfoDidUpdateNotification:(id)arg1 ;
-(void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg1 ;
-(void)_handleAudioRoutesDidUpdateNotification:(id)arg1 ;
-(void)_handleVolumeDidUpdateNotification:(id)arg1 ;
-(void)_handleDidBeginEditingTextNotification:(id)arg1 ;
-(void)_handleDidEndEditingTextNotification:(id)arg1 ;
-(void)_notifyDelegateForArtworkChange;
@end

