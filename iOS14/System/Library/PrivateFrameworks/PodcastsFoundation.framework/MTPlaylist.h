/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, MTPodcastPlaylistSettings, NSOrderedSet, MTSyncInfo;

@interface MTPlaylist : NSManagedObject

@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isITunesPlaylist; 
@property (assign,nonatomic) int containerOrder; 
@property (assign,nonatomic) long long downloadedCount; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) double generatedDate; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) long long mediaLibraryId; 
@property (assign,nonatomic) long long parentMediaLibraryId; 
@property (assign,nonatomic) long long sortOrder; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long unplayedCount; 
@property (assign,nonatomic) double updatedDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * addedEpisodes; 
@property (nonatomic,retain) MTPodcastPlaylistSettings * defaultSettings; 
@property (nonatomic,retain) NSSet * deletedEpisodes; 
@property (nonatomic,retain) NSOrderedSet * episodes; 
@property (nonatomic,retain) NSOrderedSet * podcasts; 
@property (nonatomic,retain) NSOrderedSet * settings; 
@property (nonatomic,retain) MTSyncInfo * syncInfo; 
-(BOOL)isFolder;
-(long long)mt_syncID;
-(BOOL)isITunesPlaylist;
-(void)setMediaLibraryId:(long long)arg1 ;
@end

