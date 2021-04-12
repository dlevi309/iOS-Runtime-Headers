/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSSet, GKGameCacheObject;

@interface FriendPlayedGameEntry : NSManagedObject

@property (nonatomic,retain) NSSet * friendsPlayed; 
@property (nonatomic,retain) GKGameCacheObject * game; 
+(id)fetchRequest;
@end

