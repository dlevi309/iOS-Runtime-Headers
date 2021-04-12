/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
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

