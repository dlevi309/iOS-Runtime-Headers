/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncCodableRegistry, NSSet, NSArray, NSString, NSDate, HKProfileIdentifier;

@interface HDCloudSyncRegistryRecord : HDCloudSyncRecord {

	HDCloudSyncCodableRegistry* _underlyingRegistry;

}

@property (nonatomic,retain) NSSet * disabledOwnerIdentifiers; 
@property (nonatomic,copy,readonly) NSSet * ownerIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * childHeaderRecordIDs; 
@property (assign,nonatomic) BOOL deleted; 
@property (nonatomic,copy) NSString * displayFirstName; 
@property (nonatomic,copy) NSString * displayLastName; 
@property (nonatomic,copy) NSDate * displayNameModificationDate; 
@property (nonatomic,copy) HKProfileIdentifier * ownerProfileIdentifier; 
@property (nonatomic,copy) HKProfileIdentifier * sharedProfileIdentifier; 
+(id)recordType;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)sharedProfileIdentifierForOwnerProfileIdentifier:(id)arg1 ;
+(BOOL)isRegistryRecord:(id)arg1 ;
+(BOOL)isRegistryRecordID:(id)arg1 ;
-(BOOL)deleted;
-(id)description;
-(void)setDeleted:(BOOL)arg1 ;
-(NSSet *)ownerIdentifiers;
-(NSString *)displayFirstName;
-(id)serializeUnderlyingMessage;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(void)setDisplayFirstName:(NSString *)arg1 ;
-(void)setDisplayLastName:(NSString *)arg1 ;
-(void)setOwnerProfileIdentifier:(HKProfileIdentifier *)arg1 ;
-(void)setSharedProfileIdentifier:(HKProfileIdentifier *)arg1 ;
-(void)setDisplayNameModificationDate:(NSDate *)arg1 ;
-(NSSet *)disabledOwnerIdentifiers;
-(void)setDisabledOwnerIdentifiers:(NSSet *)arg1 ;
-(NSDate *)displayNameModificationDate;
-(NSString *)displayLastName;
-(HKProfileIdentifier *)ownerProfileIdentifier;
-(HKProfileIdentifier *)sharedProfileIdentifier;
-(id)initInZone:(id)arg1 ownerProfileIdentifier:(id)arg2 ;
-(id)storeIdentifiersForOwnerIdentifier:(id)arg1 ;
-(void)addStoreIdentifier:(id)arg1 ownerIdentifier:(id)arg2 ;
-(id)initInZone:(id)arg1 ownerProfileIdentifier:(id)arg2 sharedProfileIdentifier:(id)arg3 ;
-(id)_profileIdentifierWithCodableProfileIdentifier:(id)arg1 ;
-(id)_codableProfileIdentifierWithProfileIdentifier:(id)arg1 ;
-(NSArray *)childHeaderRecordIDs;
-(void)removeStoreIdentifier:(id)arg1 ownerIdentifier:(id)arg2 ;
@end

