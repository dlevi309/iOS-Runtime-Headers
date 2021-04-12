/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PDCloudStoreContainer.h>
#import <libobjc.A.dylib/PDCloudStoreZoneManagerDataSource.h>

@protocol PDCloudStorePassManager;
@class NSString;

@interface PDPassCloudStoreContainer : PDCloudStoreContainer <PDCloudStoreZoneManagerDataSource> {

	id<PDCloudStorePassManager> _passManager;
	BOOL _canInitializeContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)containerName;
-(void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(BOOL)arg3 groupName:(id)arg4 groupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(id)cloudStoreZonesForCloudStoreItem:(id)arg1 ;
-(id)allPossibleZoneNames;
-(id)subscriptionIdentifierForZoneName:(id)arg1 ;
-(id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 recordName:(id)arg2 ;
-(id)zoneNameForSubscriptionIdentifier:(id)arg1 ;
-(id)allPossibleSubscriptionIdentifiers;
-(id)cloudStoreZonesForCloudStoreItemType:(unsigned long long)arg1 ;
-(void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canInitializeContainer;
-(void)cloudStoreAccountChanged:(id)arg1 ;
-(void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_canInitializeContainer;
-(id)_ubiquitousCatalogOfRecord;
-(BOOL)_isPassItemFromRecordType:(id)arg1 ;
-(BOOL)_isRemoteAssetItemFromRecordType:(id)arg1 ;
-(BOOL)_isPassCatalogItemFromRecordType:(id)arg1 ;
-(id)_catalogOfRecord;
-(id)initWithDataSource:(id)arg1 passManager:(id)arg2 ;
@end

