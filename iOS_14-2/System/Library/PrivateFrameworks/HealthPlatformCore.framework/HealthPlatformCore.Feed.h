/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthPlatformCore.framework/HealthPlatformCore
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSOrderedSet;

@interface HealthPlatformCore.Feed : NSManagedObject

@property (copy,nonatomic) NSDate * dateUpdated; 
@property (copy,nonatomic) NSString * kindRawValue; 
@property (retain,nonatomic) NSOrderedSet * sections; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

