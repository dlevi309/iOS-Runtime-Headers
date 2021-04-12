/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHFaceGroup, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHFaceGroupChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHFaceGroup* _originalFaceGroup;
	PHRelationshipChangeRequestHelper* _facesHelper;
	PHRelationshipChangeRequestHelper* _keyFaceHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * facesHelper;                   //@synthesize facesHelper=_facesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyFaceHelper;                 //@synthesize keyFaceHelper=_keyFaceHelper - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFaceGroup; 
@property (assign,nonatomic) long long unnamedFaceCount; 
@property (assign,nonatomic) long long personBuilderState; 
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
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)creationRequestForFaceGroup;
+(id)changeRequestForFaceGroup:(id)arg1 ;
+(void)deleteFaceGroups:(id)arg1 ;
-(void)setPersonBuilderState:(long long)arg1 ;
-(long long)personBuilderState;
-(void)setKeyFace:(id)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(long long)unnamedFaceCount;
-(PHObjectPlaceholder *)placeholderForCreatedFaceGroup;
-(void)setUnnamedFaceCount:(long long)arg1 ;
-(void)_prefetchFacesAndPersonRelationship:(id)arg1 inContext:(id)arg2 ;
-(id)_existentFaceObjectIDs;
-(void)_prepareKeyFaceHelperIfNeeded;
-(void)_prepareFacesHelperIfNeeded;
-(id)_mutableObjectIDsAndUUIDs;
-(id)_mutableKeyFaceObjectIDsAndUUIDs;
-(void)addFaces:(id)arg1 ;
-(void)removeFaces:(id)arg1 ;
-(void)_setOriginalFaceGroup:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)facesHelper;
-(PHRelationshipChangeRequestHelper *)keyFaceHelper;
@end

