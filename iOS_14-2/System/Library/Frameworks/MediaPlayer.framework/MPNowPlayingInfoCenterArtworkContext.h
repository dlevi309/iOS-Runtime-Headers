/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, MPMediaItemArtwork, NSData;

@interface MPNowPlayingInfoCenterArtworkContext : NSObject {

	NSString* _artworkIdentifier;
	MPMediaItemArtwork* _artwork;
	NSData* _artworkData;

}

@property (nonatomic,copy) NSString * artworkIdentifier;                //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) MPMediaItemArtwork * artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSData * artworkData;                      //@synthesize artworkData=_artworkData - In the implementation block
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(MPMediaItemArtwork *)artwork;
-(NSData *)artworkData;
@end

