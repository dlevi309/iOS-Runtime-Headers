/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <CoreData/NSManagedObject.h>

@class NSString, _TtC16HealthExperience4Feed, NSOrderedSet;

@interface HealthExperience.FeedSection : NSManagedObject

@property (copy,nonatomic) NSString * identifier; 
@property (retain,nonatomic) _TtC16HealthExperience4Feed * feed; 
@property (retain,nonatomic) NSOrderedSet * feedItems; 
@property (assign,nonatomic) BOOL isCollapsible; 
@property (assign,nonatomic) long long sortOrder; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

