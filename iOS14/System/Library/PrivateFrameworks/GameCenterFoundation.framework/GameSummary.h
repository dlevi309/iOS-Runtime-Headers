/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSSet, GamesPlayedSummaryList;

@interface GameSummary : NSManagedObject

@property (nonatomic,copy) NSNumber * adamID; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSNumber * isArcade; 
@property (nonatomic,retain) NSSet * compatiblePlatforms; 
@property (nonatomic,retain) GamesPlayedSummaryList * list; 
+(id)fetchRequest;
@end

