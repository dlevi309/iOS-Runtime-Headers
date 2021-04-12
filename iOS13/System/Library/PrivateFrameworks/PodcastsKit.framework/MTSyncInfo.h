/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, MTEpisode, MTPlaylist, MTPodcast;

@interface MTSyncInfo : NSManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) long long syncID; 
@property (assign,nonatomic) int entityType; 
@property (assign,nonatomic) int syncability; 
@property (assign,nonatomic) long long insertionRevision; 
@property (assign,nonatomic) long long updateRevision; 
@property (assign,nonatomic) long long artworkUpdateRevision; 
@property (assign,nonatomic,__weak) MTEpisode * episode; 
@property (assign,nonatomic,__weak) MTPlaylist * playlist; 
@property (assign,nonatomic,__weak) MTPodcast * podcast; 
+(id)predicateForHasNoInverseRelation;
+(id)predicateForIsCurrentlySyncable:(BOOL)arg1 ;
@end

