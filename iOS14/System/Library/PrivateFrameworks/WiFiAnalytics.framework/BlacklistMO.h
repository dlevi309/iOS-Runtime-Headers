/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet;

@interface BlacklistMO : NSManagedObject

@property (assign,nonatomic) short reason; 
@property (assign,nonatomic) short subReason; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,retain) NSSet * bss; 
@property (nonatomic,retain) NSSet * network; 
+(id)entityName;
+(id)fetchRequest;
@end

