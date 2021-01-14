/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface GamePlatform : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSSet * game; 
@property (nonatomic,retain) NSSet * gameInfo; 
+(id)fetchRequest;
@end

