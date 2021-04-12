/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

