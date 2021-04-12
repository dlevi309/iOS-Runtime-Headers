/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHProject, NSData, PHRelationshipChangeRequestHelper, NSString, NSManagedObjectID;

@interface PHProjectChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHProject* _originalProject;
	NSData* _previewImageData;
	BOOL _didSetPreviewImage;
	PHRelationshipChangeRequestHelper* _assetsHelper;
	PHRelationshipChangeRequestHelper* _keyAssetHelper;

}

@property (nonatomic,retain) NSString * projectDocumentType; 
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * assetsHelper;                //@synthesize assetsHelper=_assetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyAssetHelper;              //@synthesize keyAssetHelper=_keyAssetHelper - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSData * projectExtensionData; 
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
+(id)creationRequestForProjectWithDocumentType:(id)arg1 projectExtensionIdentifier:(id)arg2 ;
+(id)creationRequestForProjectCopyFromProject:(id)arg1 ;
+(void)_deleteProjects:(id)arg1 withOperation:(long long)arg2 ;
+(id)creationRequestForProjectWithDocumentType:(id)arg1 projectExtensionIdentifier:(id)arg2 assets:(id)arg3 title:(id)arg4 ;
+(void)deleteProjects:(id)arg1 ;
+(void)undeleteProjects:(id)arg1 ;
+(void)expungeProjects:(id)arg1 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(void)_prepareAssetIDsIfNeeded;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setKeyAsset:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHRelationshipChangeRequestHelper *)keyAssetHelper;
-(id)projectData;
-(NSData *)projectExtensionData;
-(id)projectExtensionIdentifier;
-(NSString *)projectDocumentType;
-(id)projectRenderUuid;
-(void)addAssets:(id)arg1 ;
-(void)setAssets:(id)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(id)initForNewObject;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(void)removeAssets:(id)arg1 ;
-(NSString *)managedEntityName;
-(id)initWithProject:(id)arg1 ;
-(void)setProjectDocumentType:(NSString *)arg1 ;
-(void)setProjectData:(id)arg1 ;
-(NSString *)title;
-(void)setProjectExtensionIdentifier:(id)arg1 ;
-(void)setProjectExtensionData:(NSData *)arg1 ;
-(void)setProjectRenderUuid:(id)arg1 ;
-(void)_setOriginalProject:(id)arg1 ;
-(void)setProjectPreviewImage:(id)arg1 ;
-(id)placeholderForCreatedProject;
-(void)_prepareKeyAssetIDIfNeeded;
-(void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(PHRelationshipChangeRequestHelper *)assetsHelper;
@end

