/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, GKPlayerProfileCacheObject;

@interface FriendPlayedEntry : NSManagedObject

@property (nonatomic,copy) NSDate * playedAt; 
@property (nonatomic,retain) GKPlayerProfileCacheObject * friend; 
+(id)fetchRequest;
@end

