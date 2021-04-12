/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlaybackIntentDataSource, NSSecureCoding;
@class NSString, NSData;

@interface MPCPlaybackIntent : NSObject {

	id<MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
	BOOL _prefersEnqueuingUsingAirPlay;
	NSString* _localizedTitle;
	long long _tracklistSource;
	id<NSSecureCoding> _tracklistToken;
	long long _actionAfterQueueLoad;
	long long _shuffleMode;
	long long _repeatMode;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;
	NSString* _siriAssetInfo;
	NSString* _siriReferenceIdentifier;

}

@property (nonatomic,readonly) id<MPCPlaybackIntentDataSource> tracklistDataSource; 
@property (nonatomic,copy) NSString * localizedTitle;                                            //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (assign,nonatomic) long long tracklistSource;                                          //@synthesize tracklistSource=_tracklistSource - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> tracklistToken;                                  //@synthesize tracklistToken=_tracklistToken - In the implementation block
@property (assign,nonatomic) long long actionAfterQueueLoad;                                     //@synthesize actionAfterQueueLoad=_actionAfterQueueLoad - In the implementation block
@property (assign,nonatomic) long long shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) long long repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL prefersEnqueuingUsingAirPlay;                                  //@synthesize prefersEnqueuingUsingAirPlay=_prefersEnqueuingUsingAirPlay - In the implementation block
@property (nonatomic,copy) NSString * playActivityFeatureName;                                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;                              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) NSString * siriAssetInfo;                                             //@synthesize siriAssetInfo=_siriAssetInfo - In the implementation block
@property (nonatomic,copy) NSString * siriReferenceIdentifier;                                   //@synthesize siriReferenceIdentifier=_siriReferenceIdentifier - In the implementation block
+(id)radioPlaybackIntentWithStationURL:(id)arg1 ;
+(id)radioPlaybackIntentFromSong:(id)arg1 ;
+(id)tracklistDataSourceForSource:(long long)arg1 ;
+(id)radioPlaybackIntentFromReference:(id)arg1 ;
+(id)intentFromQueueDescriptor:(id)arg1 ;
+(id)radioPlaybackIntentFromAlbum:(id)arg1 ;
+(id)radioPlaybackIntentFromArtist:(id)arg1 ;
+(id)radioPlaybackIntentWithStation:(id)arg1 ;
+(id)radioPlaybackIntentWithStationStringID:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(NSString *)siriReferenceIdentifier;
-(void)setSiriReferenceIdentifier:(NSString *)arg1 ;
-(NSString *)siriAssetInfo;
-(long long)actionAfterQueueLoad;
-(void)setActionAfterQueueLoad:(long long)arg1 ;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
-(long long)shuffleMode;
-(void)setShuffleMode:(long long)arg1 ;
-(void)getPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<MPCPlaybackIntentDataSource>)tracklistDataSource;
-(void)setTracklistToken:(id<NSSecureCoding>)arg1 ;
-(void)setTracklistSource:(long long)arg1 ;
-(void)getRepresentativeMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)getArchiveWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)tracklistSource;
-(id<NSSecureCoding>)tracklistToken;
-(BOOL)prefersEnqueuingUsingAirPlay;
-(void)setPrefersEnqueuingUsingAirPlay:(BOOL)arg1 ;
@end

