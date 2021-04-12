/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, GKGameCacheObject;

@interface FriendsPlayedGameList : NSManagedObject

@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,retain) NSSet * entries; 
@property (nonatomic,retain) GKGameCacheObject * game; 
+(id)fetchRequest;
@end

