/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemArtwork.h>

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {

	MPArtworkCatalog* _catalog;
	CGRect _bounds;

}

@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
-(CGRect)bounds;
-(MPArtworkCatalog *)artworkCatalog;
-(id)initWithArtworkCatalog:(id)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 allowsNetworking:(BOOL)arg2 ;
@end

