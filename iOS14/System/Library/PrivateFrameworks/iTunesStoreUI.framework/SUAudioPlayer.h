/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class AVURLAsset, NSURL, NSMutableDictionary, AVPlayer, AVPlayerItem, SUPlayerStatus, NSString;

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate> {

	AVURLAsset* _asset;
	NSURL* _certificateUrl;
	BOOL _didPostForPreviewHistory;
	NSURL* _keyUrl;
	NSMutableDictionary* _nowPlayingInfo;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	long long _storeItemIdentifier;
	SUPlayerStatus* _status;
	id _timeObserver;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * URL;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * certificateURL;                       //@synthesize certificateUrl=_certificateUrl - In the implementation block
@property (nonatomic,retain) NSURL * keyURL;                               //@synthesize keyUrl=_keyUrl - In the implementation block
@property (nonatomic,readonly) SUPlayerStatus * playerStatus; 
@property (assign,nonatomic) long long storeItemIdentifier;                //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)play;
-(NSURL *)keyURL;
-(void)stop;
-(SUPlayerStatus *)playerStatus;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(long long)storeItemIdentifier;
-(NSURL *)URL;
-(void)_itemFailedToPlayToEndNotification:(id)arg1 ;
-(void)setStoreItemIdentifier:(long long)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(void)dealloc;
-(void)setKeyURL:(NSURL *)arg1 ;
-(void)_destroyPlayer;
-(void)_destroyPlayerItem;
-(void)_handleAssetValuesDidLoad;
-(void)_setPlayerState:(long long)arg1 ;
-(void)_applyNowPlayingInfo;
-(void)_updateForPeriodicTickWithTime:(double)arg1 ;
-(id)_newFadeInAudioMixForAsset:(id)arg1 ;
-(void)_itemPlayedToEndNotification:(id)arg1 ;
-(void)_postStatusChangeNotification;
-(void)setValue:(id)arg1 forNowPlayingKey:(id)arg2 ;
-(id)valueForNowPlayingKey:(id)arg1 ;
@end

