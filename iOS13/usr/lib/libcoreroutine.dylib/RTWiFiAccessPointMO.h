/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSString, RTFingerprintMO;

@interface RTWiFiAccessPointMO : NSManagedObject

@property (nonatomic,copy) NSNumber * age; 
@property (nonatomic,copy) NSNumber * channel; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * mac; 
@property (nonatomic,copy) NSNumber * rssi; 
@property (nonatomic,retain) RTFingerprintMO * fingerprint; 
+(id)fetchRequest;
+(id)managedObjectWithAccessPoint:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

