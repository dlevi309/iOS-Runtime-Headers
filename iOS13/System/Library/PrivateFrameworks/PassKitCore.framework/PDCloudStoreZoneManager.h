/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PDCloudStoreDataSource, PDCloudStoreZoneManagerDataSource;
@interface PDCloudStoreZoneManager : NSObject {

	id<PDCloudStoreDataSource> _databaseDataSource;
	id<PDCloudStoreZoneManagerDataSource> _zoneDataSource;

}

@property (assign,nonatomic,__weak) id<PDCloudStoreZoneManagerDataSource> zoneDataSource;              //@synthesize zoneDataSource=_zoneDataSource - In the implementation block
-(id)containerName;
-(void)setZoneDataSource:(id<PDCloudStoreZoneManagerDataSource>)arg1 ;
-(id)cloudStoreZonesForCloudStoreItem:(id)arg1 ;
-(id)allPossibleZoneNames;
-(id)subscriptionIdentifierForZoneName:(id)arg1 ;
-(id)allCloudStoreZones;
-(id)cloudStoreZoneForZoneName:(id)arg1 ;
-(id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 recordName:(id)arg2 ;
-(id)zoneNameForSubscriptionIdentifier:(id)arg1 ;
-(id)allPossibleSubscriptionIdentifiers;
-(id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 ;
-(id)cloudStoreZoneForSubscriptionIdentifier:(id)arg1 ;
-(id)initWithDatabaseDataSource:(id)arg1 ;
-(id)zoneNameToSubscriptionIdentifiersThatNeedToBeCreated;
-(void)createdZoneWithName:(id)arg1 ;
-(void)createdSubscriptionIdentifier:(id)arg1 forZoneName:(id)arg2 ;
-(void)updateTokenData:(id)arg1 forZoneName:(id)arg2 ;
-(void)updateFetchTimestamp:(id)arg1 forZoneName:(id)arg2 ;
-(void)updateSubscriptionIdentifier:(id)arg1 ;
-(void)clearZonesInDatabase;
-(void)removeCloudStoreSubscriptionIdentifier:(id)arg1 ;
-(void)removeCloudStoreZoneWithName:(id)arg1 ;
-(id)zoneNamesThatNeedToBeCreated;
-(id<PDCloudStoreZoneManagerDataSource>)zoneDataSource;
@end

