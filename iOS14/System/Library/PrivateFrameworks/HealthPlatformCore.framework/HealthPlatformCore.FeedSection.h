/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthPlatformCore.framework/HealthPlatformCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, _TtC18HealthPlatformCore4Feed, NSOrderedSet;

@interface HealthPlatformCore.FeedSection : NSManagedObject

@property (copy,nonatomic) NSString * identifier; 
@property (retain,nonatomic) _TtC18HealthPlatformCore4Feed * feed; 
@property (retain,nonatomic) NSOrderedSet * feedItems; 
@property (assign,nonatomic) BOOL isCollapsible; 
@property (assign,nonatomic) long long sortOrder; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

