/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)playbackDuration;
-(NSURL *)contentURL;
-(id)init;
-(id)initWithContentURL:(id)arg1 ;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(long long)storeItemIdentifier;
-(id)initWithVideo:(id)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setStoreItemIdentifier:(long long)arg1 ;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setPlaybackDuration:(double)arg1 ;
-(BOOL)isITunesStream;
-(id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2 ;
-(BOOL)shouldUseITunesStoreSecureKeyDelivery;
-(void)setShouldUseITunesStoreSecureKeyDelivery:(BOOL)arg1 ;
@end

