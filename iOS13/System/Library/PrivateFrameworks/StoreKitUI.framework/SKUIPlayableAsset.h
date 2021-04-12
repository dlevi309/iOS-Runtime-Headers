/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSURL;

@interface SKUIPlayableAsset : NSObject {

	BOOL _ITunesStream;
	BOOL _shouldUseITunesStoreSecureKeyDelivery;
	NSURL* _contentURL;
	double _initialPlaybackTime;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;
	double _playbackDuration;
	long long _storeItemIdentifier;

}

@property (nonatomic,copy) NSURL * contentURL;                                        //@synthesize contentURL=_contentURL - In the implementation block
@property (assign,nonatomic) double initialPlaybackTime;                              //@synthesize initialPlaybackTime=_initialPlaybackTime - In the implementation block
@property (getter=isITunesStream,nonatomic,readonly) BOOL ITunesStream;               //@synthesize ITunesStream=_ITunesStream - In the implementation block
@property (nonatomic,retain,readonly) NSURL * keyCertificateURL;                      //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * keyServerURL;                           //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,nonatomic) double playbackDuration;                                 //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldUseITunesStoreSecureKeyDelivery;              //@synthesize shouldUseITunesStoreSecureKeyDelivery=_shouldUseITunesStoreSecureKeyDelivery - In the implementation block
@property (assign,nonatomic) long long storeItemIdentifier;                           //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
-(id)init;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(double)playbackDuration;
-(void)setPlaybackDuration:(double)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(long long)storeItemIdentifier;
-(void)setStoreItemIdentifier:(long long)arg1 ;
-(BOOL)isITunesStream;
-(id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2 ;
-(id)initWithVideo:(id)arg1 ;
-(BOOL)shouldUseITunesStoreSecureKeyDelivery;
-(void)setShouldUseITunesStoreSecureKeyDelivery:(BOOL)arg1 ;
@end

