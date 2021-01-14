/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSNumber;

@interface RTMapItemExtendedAttributesMO : NSManagedObject

@property (nonatomic,copy) NSString * addressIdentifier; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * isMe; 
@property (nonatomic,copy) NSNumber * wifiConfidence; 
@property (nonatomic,copy) NSNumber * wifiFingerprintLabelType; 
+(id)fetchRequest;
+(id)managedObjectWithExtendedAttributes:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithExtendedAttributes:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

