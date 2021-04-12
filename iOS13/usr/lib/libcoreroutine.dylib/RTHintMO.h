/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface RTHintMO : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) long long source; 
+(id)fetchRequest;
+(id)managedObjectWithLatitude:(double)arg1 longitude:(double)arg2 source:(long long)arg3 date:(id)arg4 inManagedObjectContext:(id)arg5 ;
@end

