/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class NSMutableOrderedSet, NSString, NSData;

@interface PLLimitedLibraryFetchFilter : PLManagedObject {

	NSMutableOrderedSet* _assetUUIDs;

}

@property (nonatomic,copy) NSString * applicationIdentifier; 
@property (nonatomic,copy) NSString * designatedRequirement; 
@property (nonatomic,retain) NSData * fetchFilterData; 
+(id)entityName;
+(id)_fetchFiltersMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4 ;
+(void)deleteLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchFilterIdentifierForApplicationIdentifier:(id)arg1 ;
+(id)fetchOrCreateLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 auditToken:(SCD_Struct_PL32)arg2 inManagedObjectContext:(id)arg3 ;
+(id)insertIntoManagedObjectContext:(id)arg1 forApplicationIdentifier:(id)arg2 ;
+(id)disallowedAlbumKinds;
+(void)deleteAllLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1 ;
+(id)_assetUUIDStringsFromFetchFilterData:(id)arg1 ;
+(id)entityNameToPredicateMapFromFetchFilterData:(id)arg1 ;
+(id)debugDescriptionOfCurrentLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1 ;
+(id)_decodeFetchFilterData:(id)arg1 withUUIDHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(id)fetchLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)debugDescription;
-(BOOL)containsAssetWithUUID:(id)arg1 ;
-(void)addAssetsWithUUIDs:(id)arg1 ;
-(void)removeAllAssets;
-(id)assetUUIDStrings;
-(id)predicateForEntityName:(id)arg1 ;
-(void)_loadAssetUUIDs;
@end

