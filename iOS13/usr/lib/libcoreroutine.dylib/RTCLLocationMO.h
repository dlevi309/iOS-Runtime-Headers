/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface RTCLLocationMO : NSManagedObject

@property (assign,nonatomic) double altitude; 
@property (assign,nonatomic) double course; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double speed; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (assign,nonatomic) double verticalAccuracy; 
+(id)fetchRequest;
+(id)managedObjectWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 horizontalAccuracy:(double)arg4 verticalAccuracy:(double)arg5 course:(double)arg6 speed:(double)arg7 timestamp:(id)arg8 inManagedObjectContext:(id)arg9 ;
@end

