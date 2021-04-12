/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(MPMediaItemArtwork *)artwork;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
@end

