/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHCollectionList, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHCollectionListChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHCollectionList* _originalCollectionList;
	PHRelationshipChangeRequestHelper* _collectionsHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * collectionsHelper;                  //@synthesize collectionsHelper=_collectionsHelper - In the implementation block
@property (assign,nonatomic) unsigned customSortKey; 
@property (assign,nonatomic) BOOL customSortAscending; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedCollectionList; 
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
+(id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2 ;
+(id)changeRequestForCollectionList:(id)arg1 ;
+(id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2 ;
+(id)creationRequestForCollectionListWithTitle:(id)arg1 ;
+(void)deleteCollectionLists:(id)arg1 ;
+(void)expungeCollectionLists:(id)arg1 ;
+(void)undeleteCollectionLists:(id)arg1 ;
+(void)_deleteCollectionLists:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3 ;
-(NSString *)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)customSortAscending;
-(unsigned)customSortKey;
-(void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)setCustomSortKey:(unsigned)arg1 ;
-(void)addChildCollections:(id)arg1 ;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)removeChildCollections:(id)arg1 ;
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
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)_mutableObjectIDsAndUUIDs;
-(PHObjectPlaceholder *)placeholderForCreatedCollectionList;
-(void)_setOriginalCollectionList:(id)arg1 ;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2 ;
-(void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2 ;
-(void)addChildCollection:(id)arg1 ;
-(void)removeChildCollection:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)collectionsHelper;
@end

