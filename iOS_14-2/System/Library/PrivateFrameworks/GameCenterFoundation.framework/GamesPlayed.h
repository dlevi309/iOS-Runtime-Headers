/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSSet;

@interface GamesPlayed : NSManagedObject

@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * playerID; 
@property (nonatomic,retain) NSSet * entries; 
+(id)fetchRequest;
@end

