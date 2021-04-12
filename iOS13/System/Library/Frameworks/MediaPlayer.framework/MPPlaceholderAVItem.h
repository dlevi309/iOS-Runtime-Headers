/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)album;
-(NSString *)artist;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)loadAssetAndPlayerItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(NSString *)mainTitle;
-(double)durationFromExternalMetadata;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(BOOL)isTailPlaceholder;
-(id)artworkCatalogBlock;
-(void)setDurationFromExternalMetadata:(double)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(void)setLikedStateEnabled:(BOOL)arg1 ;
-(void)setMainTitle:(NSString *)arg1 ;
-(void)setSupportsLikedState:(BOOL)arg1 ;
-(void)setTailPlaceholder:(BOOL)arg1 ;
-(void)setArtworkCatalogBlock:(id)arg1 ;
@end

