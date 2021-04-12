/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <libobjc.A.dylib/RMSControlSession.h>

@protocol RMSControlSessionDelegate;
@class RMSService, NSString;

@interface RMSMediaRemoteControlSession : NSObject <RMSControlSession> {

	void* _television;
	/*^block*/id _connectionResponseBlock;
	void* _textEditingSession;
	BOOL _observingNowPlaying;
	void* _origin;
	unsigned _state;
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
-(void)_updateNowPlayingInfo;
-(RMSService *)service;
-(void)dealloc;
-(void)sendText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
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
-(BOOL)_isSystemVersionSupported:(void*)arg1 ;
-(BOOL)_isPairingAllowed:(void*)arg1 ;
-(void)_didReceivePairingCallbackWithCredentials:(SCD_Struct_RM15)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didReceiveConnectionStateCallbackWithConnectionState:(unsigned)arg1 error:(CFErrorRef)arg2 ;
-(void)_handleConnected;
-(void)_endObservingTextEditingEvents;
-(void)_handleMediaRemoteOriginNowPlayingInfoDidChangeNotification:(id)arg1 ;
-(void)_handleMediaRemoteNowPlayingApplicationPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_handleDisconnectedWithError:(CFErrorRef)arg1 ;
-(void)_beginObservingTextEditingEvents;
-(void)_unpairExternalDevice;
-(BOOL)_isExternalDeviceConnected;
-(void)_disconnectExternalDevice;
-(void)_didReceiveTextEditingCallbackWithSession:(void*)arg1 eventType:(unsigned)arg2 ;
-(void)_didGetTextEditingSession:(void*)arg1 error:(CFErrorRef)arg2 ;
-(void)_handleDidBeginEditingWithSession:(void*)arg1 ;
-(void)_handleDidEndEditing;
-(id)_nowPlayingInfoWithNowPlayingMetadata:(id)arg1 ;
-(id)_artworkDataWithArtwork:(void*)arg1 ;
-(void)_updateNowPlayingInfo:(id)arg1 withPlaybackState:(unsigned)arg2 ;
@end

