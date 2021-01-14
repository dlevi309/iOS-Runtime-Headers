/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)managedObjectWithHint:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

