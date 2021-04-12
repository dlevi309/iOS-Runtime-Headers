/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)isFolder;
-(long long)mt_syncID;
-(BOOL)isITunesPlaylist;
-(void)setMediaLibraryId:(long long)arg1 ;
@end

