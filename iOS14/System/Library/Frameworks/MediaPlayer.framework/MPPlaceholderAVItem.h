/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVItem.h>

@class NSString;

@interface MPPlaceholderAVItem : MPAVItem {

	BOOL _explicitTrack;
	BOOL _likeStateEnabled;
	BOOL _supportsLikedState;
	BOOL _tailPlaceholder;
	NSString* _album;
	NSString* _artist;
	double _durationFromExternalMetadata;
	NSString* _mainTitle;
	/*^block*/id _artworkCatalogBlock;

}

@property (assign,getter=isTailPlaceholder,nonatomic) BOOL tailPlaceholder;                  //@synthesize tailPlaceholder=_tailPlaceholder - In the implementation block
@property (nonatomic,retain) NSString * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * artist;                                              //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) double durationFromExternalMetadata;                            //@synthesize durationFromExternalMetadata=_durationFromExternalMetadata - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;                      //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,getter=isLikedStateEnabled,nonatomic) BOOL likedStateEnabled;              //@synthesize likeStateEnabled=_likeStateEnabled - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) BOOL supportsLikedState;                                        //@synthesize supportsLikedState=_supportsLikedState - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;                                           //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
+(BOOL)isPlaceholder;
-(NSString *)artist;
-(id)init;
-(NSString *)mainTitle;
-(id)description;
-(void)loadAssetAndPlayerItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(double)durationFromExternalMetadata;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(BOOL)isTailPlaceholder;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(id)artworkCatalogBlock;
-(void)setArtist:(NSString *)arg1 ;
-(void)setDurationFromExternalMetadata:(double)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(void)setMainTitle:(NSString *)arg1 ;
-(void)setLikedStateEnabled:(BOOL)arg1 ;
-(void)setSupportsLikedState:(BOOL)arg1 ;
-(void)setTailPlaceholder:(BOOL)arg1 ;
-(void)setArtworkCatalogBlock:(id)arg1 ;
@end

