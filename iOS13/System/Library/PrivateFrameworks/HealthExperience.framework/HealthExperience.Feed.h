/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSOrderedSet;

@interface HealthExperience.Feed : NSManagedObject

@property (copy,nonatomic) NSDate * dateUpdated; 
@property (copy,nonatomic) NSString * kindRawValue; 
@property (retain,nonatomic) NSOrderedSet * sections; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

