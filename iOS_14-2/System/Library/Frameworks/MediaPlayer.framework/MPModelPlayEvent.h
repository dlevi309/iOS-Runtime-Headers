/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSDate, MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelRadioStation;

@interface MPModelPlayEvent : MPModelObject

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy) NSDate * datePlayed; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (nonatomic,retain) MPModelRadioStation * radioStation; 
+(id)__album_KEY;
+(id)__datePlayed_KEY;
+(id)__playlist_KEY;
+(id)__radioStation_KEY;
+(id)__artist_KEY;
-(id)contentItemCollectionInfo;
-(long long)itemType;
-(id)genericObjectRepresentation;
-(NSString *)title;
@end

