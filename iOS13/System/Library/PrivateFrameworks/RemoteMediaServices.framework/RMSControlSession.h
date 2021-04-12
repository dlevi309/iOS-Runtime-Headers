/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

@class RMSService;


@protocol RMSControlSession <NSObject>
@property (assign,nonatomic,__weak) id<RMSControlSessionDelegate> delegate; 
@property (nonatomic,readonly) RMSService * service; 
@required
-(id<RMSControlSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(RMSService *)service;
-(void)logout;
-(void)sendText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
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

@end

