/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RTPersistenceImportable.h>

@class RTDeviceMO, NSString, NSData, NSUUID, NSDate;

@interface RTCloudManagedObject : NSManagedObject <RTPersistenceImportable>

@property (nonatomic,retain) RTDeviceMO * device; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,copy) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) unsigned long long flags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityNamesEligibleForDeletionByOtherDevices;
+(id)notTombstonedPredicate;
-(NSUUID *)identifier;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)awakeFromInsert;
@end

