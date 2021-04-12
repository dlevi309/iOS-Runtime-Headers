/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHAssetCollection, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHAssetCollectionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHAssetCollection* _originalAssetCollection;
	PHRelationshipChangeRequestHelper* _assetsHelper;
	PHRelationshipChangeRequestHelper* _customKeyAssetHelper;

}

@property (nonatomic,retain) PHAssetCollection * originalAssetCollection;                               //@synthesize originalAssetCollection=_originalAssetCollection - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * assetsHelper;                        //@synthesize assetsHelper=_assetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * customKeyAssetHelper;                //@synthesize customKeyAssetHelper=_customKeyAssetHelper - In the implementation block
@property (assign,nonatomic) unsigned customSortKey; 
@property (assign,nonatomic) BOOL customSortAscending; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedAssetCollection; 
@property (nonatomic,retain) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (readonly) BOOL isNewRequest; 
@property (nonatomic,readonly) id concurrentWorkBlock; 
@property (getter=isMutated,readonly) BOOL mutated; 
+(id)validateAssetCollectionTitle:(id)arg1 error:(id*)arg2 ;
+(id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2 ;
+(id)changeRequestForAssetCollection:(id)arg1 ;
+(id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2 ;
+(id)creationRequestForAssetCollectionWithTitle:(id)arg1 ;
+(id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)arg1 ;
+(void)deleteAssetCollections:(id)arg1 ;
+(void)expungeAssetCollections:(id)arg1 ;
+(void)undeleteAssetCollections:(id)arg1 ;
+(void)_deleteAssetCollections:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3 ;
-(NSString *)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isPinned;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)setCustomKeyAsset:(id)arg1 ;
-(BOOL)customSortAscending;
-(unsigned)customSortKey;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)setCustomSortKey:(unsigned)arg1 ;
-(void)addAsset:(id)arg1 ;
-(void)setIsPinned:(BOOL)arg1 ;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)_mutableKeyAssetObjectIDsAndUUIDs;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)_prepareKeyAssetIDIfNeeded;
-(void)addAssets:(id)arg1 ;
-(void)removeAssets:(id)arg1 ;
-(void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(PHRelationshipChangeRequestHelper *)assetsHelper;
-(PHObjectPlaceholder *)placeholderForCreatedAssetCollection;
-(void)_setOriginalAssetCollection:(id)arg1 ;
-(id)_mutableAssetsObjectIDsAndUUIDs;
-(void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1 ;
-(void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2 ;
-(void)removeAsset:(id)arg1 ;
-(PHAssetCollection *)originalAssetCollection;
-(void)setOriginalAssetCollection:(PHAssetCollection *)arg1 ;
-(PHRelationshipChangeRequestHelper *)customKeyAssetHelper;
@end

