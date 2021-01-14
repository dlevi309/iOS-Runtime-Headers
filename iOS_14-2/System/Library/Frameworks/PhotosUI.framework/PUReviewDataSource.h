/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PUReviewDataSource : NSObject {

	NSHashTable* __observers;
	NSMutableArray* __assetIdentifiers;
	NSMutableDictionary* __assetsByIdentifier;
	NSMutableDictionary* __representativeAssetsByBurstIdentifier;
	NSMutableDictionary* __enqueuedBurstAssetIdentifiersByBurstIdentifier;
	NSMutableDictionary* __enqueuedBurstAssetsByAssetIdentifier;
	long long __nestedPerformChanges;
	NSMutableSet* __updatedAssetIdentifiers;

}

@property (nonatomic,readonly) NSHashTable * _observers;                                                           //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _assetIdentifiers;                                                 //@synthesize _assetIdentifiers=__assetIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _assetsByIdentifier;                                          //@synthesize _assetsByIdentifier=__assetsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _representativeAssetsByBurstIdentifier;                       //@synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enqueuedBurstAssetIdentifiersByBurstIdentifier;              //@synthesize _enqueuedBurstAssetIdentifiersByBurstIdentifier=__enqueuedBurstAssetIdentifiersByBurstIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enqueuedBurstAssetsByAssetIdentifier;                        //@synthesize _enqueuedBurstAssetsByAssetIdentifier=__enqueuedBurstAssetsByAssetIdentifier - In the implementation block
@property (assign,setter=_setNestedPerformChanges:,nonatomic) long long _nestedPerformChanges;                     //@synthesize _nestedPerformChanges=__nestedPerformChanges - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _updatedAssetIdentifiers;                                            //@synthesize _updatedAssetIdentifiers=__updatedAssetIdentifiers - In the implementation block
-(void)registerChangeObserver:(id)arg1 ;
-(void)insertAsset:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)init;
-(NSHashTable *)_observers;
-(NSMutableDictionary *)_assetsByIdentifier;
-(NSMutableArray *)_assetIdentifiers;
-(id)orderedIdentifiers;
-(id)assetsByIdentifier;
-(void)insertAssets:(id)arg1 ;
-(id)existingAssetForIdentifier:(id)arg1 ;
-(id)existingRepresentativeAssetForBurstIdentifier:(id)arg1 ;
-(void)replaceAsset:(id)arg1 ;
-(void)removeAssetWithIdentifier:(id)arg1 ;
-(void)removeRepresentativeAssetForBurstIdentifier:(id)arg1 ;
-(void)enqueuePendingBurstAsset:(id)arg1 ;
-(void)processPendingBurstAssets;
-(NSMutableDictionary *)_enqueuedBurstAssetIdentifiersByBurstIdentifier;
-(NSMutableDictionary *)_enqueuedBurstAssetsByAssetIdentifier;
-(long long)_nestedPerformChanges;
-(void)_setNestedPerformChanges:(long long)arg1 ;
-(NSMutableSet *)_updatedAssetIdentifiers;
-(id)description;
-(void)removeAllAssets;
-(NSMutableDictionary *)_representativeAssetsByBurstIdentifier;
-(void)performChanges:(/*^block*/id)arg1 ;
@end

