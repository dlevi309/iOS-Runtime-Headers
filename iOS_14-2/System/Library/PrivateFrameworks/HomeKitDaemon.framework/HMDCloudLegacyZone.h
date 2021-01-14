/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCloudZone.h>

@class NSUUID, CKRecordID;

@interface HMDCloudLegacyZone : HMDCloudZone {

	NSUUID* _metadataObjectID;
	CKRecordID* _metadataRecordID;
	NSUUID* _homeDataObjectID;
	CKRecordID* _homeDataRecordID;
	NSUUID* _homeDataV3ObjectID;
	CKRecordID* _homeDataV3RecordID;

}

@property (nonatomic,readonly) NSUUID * metadataObjectID;                                                      //@synthesize metadataObjectID=_metadataObjectID - In the implementation block
@property (nonatomic,readonly) CKRecordID * metadataRecordID;                                                  //@synthesize metadataRecordID=_metadataRecordID - In the implementation block
@property (getter=isMetadataRecordAvailable,nonatomic,readonly) BOOL metadataRecordAvailable; 
@property (nonatomic,readonly) NSUUID * homeDataObjectID;                                                      //@synthesize homeDataObjectID=_homeDataObjectID - In the implementation block
@property (nonatomic,readonly) CKRecordID * homeDataRecordID;                                                  //@synthesize homeDataRecordID=_homeDataRecordID - In the implementation block
@property (getter=isHomeDataRecordAvailable,nonatomic,readonly) BOOL homeDataRecordAvailable; 
@property (nonatomic,readonly) NSUUID * homeDataV3ObjectID;                                                    //@synthesize homeDataV3ObjectID=_homeDataV3ObjectID - In the implementation block
@property (nonatomic,readonly) CKRecordID * homeDataV3RecordID;                                                //@synthesize homeDataV3RecordID=_homeDataV3RecordID - In the implementation block
@property (getter=isHomeDataV3RecordAvailable,nonatomic,readonly) BOOL homeDataV3RecordAvailable; 
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(void)createLegacyZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServerChangeToken:(id)arg1 ;
-(id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2 ;
-(BOOL)doesProcessChangeEvenIfDecryptionFails;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg1 ;
-(NSUUID *)metadataObjectID;
-(NSUUID *)homeDataObjectID;
-(NSUUID *)homeDataV3ObjectID;
-(CKRecordID *)metadataRecordID;
-(BOOL)isMetadataRecordAvailable;
-(CKRecordID *)homeDataRecordID;
-(BOOL)isHomeDataRecordAvailable;
-(CKRecordID *)homeDataV3RecordID;
-(BOOL)isHomeDataV3RecordAvailable;
-(id)metadataModelWithPushDataPush:(id)arg1 ;
-(id)homeDataModelWithPushDataPush:(id)arg1 ;
-(id)homeDataV3ModelWithPushDataPush:(id)arg1 ;
-(void)dropCachedRecords;
@end

