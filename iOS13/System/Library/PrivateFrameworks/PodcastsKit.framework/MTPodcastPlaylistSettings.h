/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSOrderedSet, MTPlaylist, MTPodcast;

@interface MTPodcastPlaylistSettings : NSManagedObject

@property (assign,nonatomic) int downloaded; 
@property (assign,nonatomic) long long episodesToShow; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) long long mediaType; 
@property (assign,nonatomic) BOOL showPlayedEpisodes; 
@property (assign,nonatomic) long long sortOrder; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSOrderedSet * episodes; 
@property (nonatomic,retain) MTPlaylist * playlist; 
@property (nonatomic,retain) MTPlaylist * playlistIfDefault; 
@property (nonatomic,retain) MTPodcast * podcast; 
@property (assign,nonatomic) long long playOrder; 
+(id)predicateForPlaylistSettingsUuid:(id)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

