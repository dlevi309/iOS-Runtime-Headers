/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)changeRequestForFaceCrop:(id)arg1 ;
+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3 ;
+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3 ;
+(id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2 ;
+(void)deleteFaceCrops:(id)arg1 ;
-(short)state;
-(void)setState:(short)arg1 ;
-(void)setFace:(id)arg1 ;
-(NSData *)resourceData;
-(void)setResourceData:(NSData *)arg1 ;
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
-(PHObjectPlaceholder *)placeholderForCreatedFaceCrop;
-(void)_prepareFaceHelperIfNeeded;
-(void)_preparePersonHelperIfNeeded;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(id)_mutablePersonObjectIDsAndUUIDs;
-(NSString *)originatingFaceUUID;
-(void)setOriginatingFaceUUID:(NSString *)arg1 ;
-(PHRelationshipChangeRequestHelper *)faceHelper;
-(PHRelationshipChangeRequestHelper *)personHelper;
@end

