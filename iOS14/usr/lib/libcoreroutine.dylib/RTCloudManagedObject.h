/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)awakeFromInsert;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

