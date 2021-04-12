/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHCollectionList, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHCollectionListChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHCollectionList* _originalCollectionList;
	BOOL _isTopLevelUserCollection;
	PHRelationshipChangeRequestHelper* _collectionsHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * collectionsHelper;                  //@synthesize collectionsHelper=_collectionsHelper - In the implementation block
@property (assign,nonatomic) unsigned customSortKey; 
@property (assign,nonatomic) BOOL customSortAscending; 
@property (assign,nonatomic) BOOL isTopLevelUserCollection;                                            //@synthesize isTopLevelUserCollection=_isTopLevelUserCollection - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedCollectionList; 
@property (nonatomic,retain) NSString * title; 
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2 ;
+(id)changeRequestForCollectionList:(id)arg1 ;
+(id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2 ;
+(id)changeRequestForTopLevelCollectionListUserCollections:(id)arg1 ;
+(id)creationRequestForCollectionListWithTitle:(id)arg1 ;
+(void)deleteCollectionLists:(id)arg1 ;
+(void)expungeCollectionLists:(id)arg1 ;
+(void)undeleteCollectionLists:(id)arg1 ;
+(void)_deleteCollectionLists:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(PHObjectPlaceholder *)placeholderForCreatedCollectionList;
-(void)_setOriginalCollectionList:(id)arg1 ;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2 ;
-(void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addChildCollection:(id)arg1 ;
-(void)removeChildCollection:(id)arg1 ;
-(void)addChildCollections:(id)arg1 ;
-(void)removeChildCollections:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)collectionsHelper;
-(BOOL)isTopLevelUserCollection;
-(void)setIsTopLevelUserCollection:(BOOL)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(NSString *)description;
-(unsigned)customSortKey;
-(void)setCustomSortKey:(unsigned)arg1 ;
-(BOOL)customSortAscending;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initForNewObject;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(NSString *)managedEntityName;
-(NSString *)title;
-(id)_mutableObjectIDsAndUUIDs;
@end

