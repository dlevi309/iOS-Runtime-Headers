/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSSessionProxy.h>
#import <TVRemoteCore/TVRMSDAAPControlSession.h>

@protocol TVRMSDAAPControlSessionDelegate;
@class TVRMSIDSClient, TVRMSNowPlayingInfo, TVRMSService, NSString;

@interface TVRMSDAAPControlSessionProxy : TVRMSSessionProxy <TVRMSDAAPControlSession> {

	TVRMSIDSClient* _idsClient;
	TVRMSNowPlayingInfo* _nowPlayingInfo;
	id<TVRMSDAAPControlSessionDelegate> _delegate;
	TVRMSService* _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVRMSDAAPControlSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TVRMSService * service;                                         //@synthesize service=_service - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TVRMSDAAPControlSessionDelegate>)delegate;
-(void)setDelegate:(id<TVRMSDAAPControlSessionDelegate>)arg1 ;
-(TVRMSService *)service;
-(void)logout;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)heartbeatDidFail;
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
-(void)_handleNowPlayingInfoDidUpdateNotification:(id)arg1 ;
-(void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg1 ;
-(void)_handleAudioRoutesDidUpdateNotification:(id)arg1 ;
-(void)_handleVolumeDidUpdateNotification:(id)arg1 ;
-(void)_notifyDelegateForArtworkChange;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendKeyboardReturnCommand;
-(void)setKeyboardText:(id)arg1 ;
-(void)clearKeyboardText;
@end

