/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset, PXDisplayAssetCollection, PXDisplayCollectionList, PXDisplayCollection;
@class NSArray, NSString;

@interface PXProgrammaticNavigationDestination : NSObject {

	id<PXDisplayAsset> _asset;
	id<PXDisplayAssetCollection> _assetCollection;
	id<PXDisplayCollectionList> _collectionList;
	id<PXDisplayCollection> _collection;
	NSArray* _collectionHierarchy;
	long long _type;
	long long _revealMode;
	NSString* _assetUUID;
	NSString* _assetLocalIdentifier;
	NSString* _assetCollectionUUID;
	long long _assetCollectionType;
	long long _assetCollectionSubtype;
	NSString* _collectionListUUID;
	long long _collectionListType;
	long long _collectionListSubtype;
	NSString* _importSourceUUID;
	PXProgrammaticNavigationDestination* _sidebarBackNavigationRootDestination;
	NSString* _keyboardInput;

}

@property (nonatomic,readonly) long long type;                                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long revealMode;                                                                         //@synthesize revealMode=_revealMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetUUID;                                                                    //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;                                                         //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                                                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetCollectionUUID;                                                          //@synthesize assetCollectionUUID=_assetCollectionUUID - In the implementation block
@property (nonatomic,readonly) long long assetCollectionType;                                                                //@synthesize assetCollectionType=_assetCollectionType - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                                                             //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection;                                                 //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionListUUID;                                                           //@synthesize collectionListUUID=_collectionListUUID - In the implementation block
@property (nonatomic,readonly) long long collectionListType;                                                                 //@synthesize collectionListType=_collectionListType - In the implementation block
@property (nonatomic,readonly) long long collectionListSubtype;                                                              //@synthesize collectionListSubtype=_collectionListSubtype - In the implementation block
@property (nonatomic,readonly) id<PXDisplayCollectionList> collectionList;                                                   //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,copy,readonly) NSString * importSourceUUID;                                                             //@synthesize importSourceUUID=_importSourceUUID - In the implementation block
@property (nonatomic,readonly) id<PXDisplayCollection> collection;                                                           //@synthesize collection=_collection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * collectionHierarchy;                                                           //@synthesize collectionHierarchy=_collectionHierarchy - In the implementation block
@property (nonatomic,copy,readonly) PXProgrammaticNavigationDestination * sidebarBackNavigationRootDestination;              //@synthesize sidebarBackNavigationRootDestination=_sidebarBackNavigationRootDestination - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyboardInput;                                                                //@synthesize keyboardInput=_keyboardInput - In the implementation block
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4 ;
-(id<PXDisplayCollection>)collection;
-(long long)assetCollectionSubtype;
-(id)initWithURL:(id)arg1 ;
-(id<PXDisplayAsset>)asset;
-(id)initWithObject:(id)arg1 revealMode:(long long)arg2 sidebarNavigationBackButtonRootDestination:(id)arg3 ;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 ;
-(long long)assetCollectionType;
-(id<PXDisplayCollectionList>)collectionList;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 asset:(id)arg3 assetCollection:(id)arg4 ;
-(long long)collectionListSubtype;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 keyboardInput:(id)arg3 ;
-(NSString *)assetUUID;
-(id)description;
-(NSString *)keyboardInput;
-(NSString *)assetCollectionUUID;
-(PXProgrammaticNavigationDestination *)sidebarBackNavigationRootDestination;
-(long long)collectionListType;
-(NSString *)collectionListUUID;
-(NSString *)assetLocalIdentifier;
-(NSArray *)collectionHierarchy;
-(long long)type;
-(id<PXDisplayAssetCollection>)assetCollection;
-(long long)revealMode;
-(NSString *)importSourceUUID;
-(id)initWithImportSourceUUID:(id)arg1 revealMode:(long long)arg2 ;
-(id)initWithObject:(id)arg1 revealMode:(long long)arg2 ;
@end

