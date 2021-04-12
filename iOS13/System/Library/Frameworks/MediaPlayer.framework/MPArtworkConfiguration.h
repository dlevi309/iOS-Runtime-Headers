/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject {

	ML3ArtworkConfiguration* _artworkConfiguration;

}

@property (nonatomic,retain) ML3ArtworkConfiguration * artworkConfiguration;              //@synthesize artworkConfiguration=_artworkConfiguration - In the implementation block
+(id)systemConfiguration;
-(id)description;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(id)supportedSizesForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2 ;
-(id)sizesToAutogenerateForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2 ;
-(ML3ArtworkConfiguration *)artworkConfiguration;
-(void)setArtworkConfiguration:(ML3ArtworkConfiguration *)arg1 ;
@end

