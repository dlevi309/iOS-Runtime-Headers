/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSNumber, NSDate, NSSet;

@interface RTFingerprintMO : NSManagedObject

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * settledState; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,retain) NSSet * wifiAccessPoints; 
+(id)fetchRequest;
+(id)fetchLastByStartDateInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)managedObjectWithFingerprint:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

