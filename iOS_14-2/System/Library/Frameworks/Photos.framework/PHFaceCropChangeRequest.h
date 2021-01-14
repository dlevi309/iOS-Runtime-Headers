/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, PHRelationshipChangeRequestHelper, NSData, PHObjectPlaceholder, NSManagedObjectID;

@interface PHFaceCropChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	NSString* _originatingFaceUUID;
	PHRelationshipChangeRequestHelper* _faceHelper;
	PHRelationshipChangeRequestHelper* _personHelper;

}

@property (nonatomic,retain) NSData * resourceData; 
@property (nonatomic,copy) NSString * originatingFaceUUID;                                       //@synthesize originatingFaceUUID=_originatingFaceUUID - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * faceHelper;                   //@synthesize faceHelper=_faceHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * personHelper;                 //@synthesize personHelper=_personHelper - In the implementation block
@property (assign,nonatomic) short state; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFaceCrop; 
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
+(id)changeRequestForFaceCrop:(id)arg1 ;
+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3 ;
+(void)deleteFaceCrops:(id)arg1 ;
+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3 ;
+(id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2 ;
-(NSData *)resourceData;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setFace:(id)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)setState:(short)arg1 ;
-(short)state;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedFaceCrop;
-(void)_prepareFaceHelperIfNeeded;
-(void)_preparePersonHelperIfNeeded;
-(id)_mutablePersonObjectIDsAndUUIDs;
-(void)setResourceData:(NSData *)arg1 ;
-(NSString *)originatingFaceUUID;
-(PHRelationshipChangeRequestHelper *)faceHelper;
-(void)setOriginatingFaceUUID:(NSString *)arg1 ;
-(PHRelationshipChangeRequestHelper *)personHelper;
-(id)initForNewObject;
-(NSString *)managedEntityName;
@end

