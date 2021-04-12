/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHCollection.h>

@class NSString, NSDate, NSArray, PHQuery, NSManagedObjectID;

@interface PHCollectionList : PHCollection {

	long long _collectionListType;
	long long _collectionListSubtype;
	NSString* _localizedTitle;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _localizedLocationNames;
	NSArray* _collections;
	PHQuery* _query;
	NSString* _transientIdentifier;
	NSManagedObjectID* _parentFolderObjectID;
	int _plAlbumKind;
	/*^block*/id _childCollectionsSortingComparator;
	unsigned long long _unreadAssetCollectionsCount;
	unsigned long long _estimatedChildCollectionCount;

}

@property (nonatomic,readonly) NSArray * collections;                                         //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) PHQuery * query;                                               //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) id childCollectionsSortingComparator;                     //@synthesize childCollectionsSortingComparator=_childCollectionsSortingComparator - In the implementation block
@property (nonatomic,readonly) unsigned long long unreadAssetCollectionsCount;                //@synthesize unreadAssetCollectionsCount=_unreadAssetCollectionsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedChildCollectionCount;              //@synthesize estimatedChildCollectionCount=_estimatedChildCollectionCount - In the implementation block
@property (nonatomic,readonly) BOOL keyCollectionsAtEnd; 
@property (nonatomic,readonly) NSString * transientIdentifier;                                //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) long long collectionListType;                                  //@synthesize collectionListType=_collectionListType - In the implementation block
@property (nonatomic,readonly) long long collectionListSubtype;                               //@synthesize collectionListSubtype=_collectionListSubtype - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * localizedLocationNames;                              //@synthesize localizedLocationNames=_localizedLocationNames - In the implementation block
+(id)entityKeyMap;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
+(id)identifierCode;
+(id)fetchType;
+(BOOL)managedObjectSupportsTrashedState;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
+(id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3 ;
+(id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2 ;
+(id)fetchRootAlbumCollectionListWithOptions:(id)arg1 ;
+(id)fetchRootProjectCollectionListWithOptions:(id)arg1 ;
+(id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 photoLibrary:(id)arg4 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
-(PHQuery *)query;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(id)localizedTitle;
-(NSDate *)endDate;
-(BOOL)collectionHasFixedOrder;
-(NSDate *)startDate;
-(id)pl_assetContainerList;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(NSArray *)localizedLocationNames;
-(long long)collectionListSubtype;
-(Class)changeRequestClass;
-(id)description;
-(long long)collectionListType;
-(unsigned long long)collectionFixedOrderPriority;
-(id)parentFolderID;
-(id)effectiveCustomSortKey;
-(BOOL)hasLocationInfo;
-(id)objectReference;
-(NSArray *)collections;
-(BOOL)keyCollectionsAtEnd;
-(NSString *)transientIdentifier;
-(BOOL)canContainCollections;
-(id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4 photoLibrary:(id)arg5 ;
-(id)childCollectionsSortingComparator;
-(unsigned long long)unreadAssetCollectionsCount;
-(unsigned long long)estimatedChildCollectionCount;
@end

