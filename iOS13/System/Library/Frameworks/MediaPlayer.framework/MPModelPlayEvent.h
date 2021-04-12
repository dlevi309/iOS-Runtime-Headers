/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSDate, MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelRadioStation;

@interface MPModelPlayEvent : MPModelObject

@property (nonatomic,copy) NSDate * datePlayed; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (nonatomic,retain) MPModelRadioStation * radioStation; 
+(id)__album_KEY;
+(id)__artist_KEY;
+(id)__datePlayed_KEY;
+(id)__playlist_KEY;
+(id)__radioStation_KEY;
-(long long)itemType;
-(id)genericObjectRepresentation;
-(id)contentItemCollectionInfo;
@end

