/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSDAAPNowPlayingManagerDelegate.h>
#import <TVRemoteCore/TVRMSDAAPRequestManagerDelegate.h>
#import <TVRemoteCore/TVRMSDAAPTouchRemoteManagerDelegate.h>
#import <TVRemoteCore/TVRMSDAAPControlSession.h>
@class TVRMSService;


@protocol TVRMSDAAPControlSession <NSObject>
@property (assign,nonatomic,__weak) id<TVRMSDAAPControlSessionDelegate> delegate; 
@property (nonatomic,readonly) TVRMSService * service; 
@required
-(id<TVRMSDAAPControlSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(TVRMSService *)service;
-(void)logout;
-(void)beginObservingNowPlaying;
-(void)endObservingNowPlaying;
-(void)sendPlaybackCommand:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pickAudioRoute:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setVolume:(float)arg1 completionHandler:(/*^block*/id)arg2;
-(void)seekToPlaybackTime:(int)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned)arg2;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned)arg2;
-(void)sendNavigationCommand:(long long)arg1;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)sendKeyboardReturnCommand;
-(void)setKeyboardText:(id)arg1;
-(void)clearKeyboardText;

@end


@protocol TVRMSDAAPControlSessionDelegate;
@class TVRMSService, TVRMSDAAPRequestManager, TVRMSDAAPLoginManager, TVRMSDAAPNowPlayingManager, TVRMSDAAPTouchRemoteManager, TVRMSNowPlayingInfo, NSString;

@interface TVRMSDAAPControlSession : NSObject <TVRMSDAAPNowPlayingManagerDelegate, TVRMSDAAPRequestManagerDelegate, TVRMSDAAPTouchRemoteManagerDelegate, TVRMSDAAPControlSession> {

	TVRMSDAAPRequestManager* _requestManager;
	TVRMSDAAPLoginManager* _loginManager;
	TVRMSDAAPNowPlayingManager* _nowPlayingManager;
	TVRMSDAAPTouchRemoteManager* _touchRemoteManager;
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
+(id)localControlSession;
+(id)proxyControlSession;
-(id)init;
-(void)dealloc;
-(id<TVRMSDAAPControlSessionDelegate>)delegate;
-(void)setDelegate:(id<TVRMSDAAPControlSessionDelegate>)arg1 ;
-(TVRMSService *)service;
-(void)logout;
-(void)nowPlayingManager:(id)arg1 didUpdateNowPlayingInfo:(id)arg2 ;
-(void)beginObservingNowPlaying;
-(void)nowPlayingManager:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3 ;
-(void)nowPlayingManager:(id)arg1 didUpdateAudioRoutes:(id)arg2 ;
-(void)nowPlayingManager:(id)arg1 didUpdateVolume:(float)arg2 ;
-(void)endObservingNowPlaying;
-(void)requestManagerFailedWithUnknownError:(id)arg1 ;
-(void)requestManagerFailedWithUnauthorizedError:(id)arg1 ;
-(void)sendPlaybackCommand:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pickAudioRoute:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToPlaybackTime:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 ;
-(void)sendNavigationCommand:(long long)arg1 ;
-(void)_initializeManagersWithControlInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_stringFromRMSPlaybackCommand:(long long)arg1 ;
-(void)touchRemoteManagerDidDisconnect:(id)arg1 ;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendKeyboardReturnCommand;
-(void)setKeyboardText:(id)arg1 ;
-(void)clearKeyboardText;
-(void)touchRemoteManagerKeyboardEditingSessionDidBegin:(id)arg1 ;
-(void)touchRemoteManagerKeyboardEditingSessionDidUpdate:(id)arg1 ;
-(void)touchRemoteManagerKeyboardEditingSessionDidEnd:(id)arg1 ;
@end

