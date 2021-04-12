/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
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
@end

