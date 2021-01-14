/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHMomentShare, NSXPCConnection, NSString, NSArray, NSDictionary, PHShareRelationshipChangeRequestHelper, NSDate, NSData, PHObjectPlaceholder, NSManagedObjectID;

@interface PHMomentShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHMomentShare* _originalMomentShare;
	NSXPCConnection* _clientConnection;
	NSString* _keySourceAssetIdentifier;
	NSArray* _sourceAssetIdentifiers;
	NSDictionary* _sourceAssetIdentifiersToAdjustmentBakeInOptionsDictionary;
	NSDictionary* _sourceAssetIdentifiersToMetadataCopyOptionsDictionary;
	PHShareRelationshipChangeRequestHelper* _participantsHelper;

}

@property (nonatomic,readonly) PHShareRelationshipChangeRequestHelper * participantsHelper;              //@synthesize participantsHelper=_participantsHelper - In the implementation block
@property (nonatomic,retain) NSString * originatingScopeIdentifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSData * previewData; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedMomentShare; 
@property (assign,nonatomic) BOOL shouldIgnoreBudgets; 
@property (assign,nonatomic) BOOL shouldNotifyOnUploadCompletion; 
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
+(void)trashMomentShares:(id)arg1 ;
+(id)validateMomentShareCreationDate:(id)arg1 error:(id*)arg2 ;
+(id)changeRequestForMomentShare:(id)arg1 ;
+(id)creationRequestForMomentShareWithTitle:(id)arg1 publicPermission:(short)arg2 creationDate:(id)arg3 createMomentShareAssetsFromAssets:(id)arg4 creationOptionsPerAsset:(id)arg5 preview:(id)arg6 originatingMomentShare:(id)arg7 ;
+(void)expungeMomentShares:(id)arg1 ;
-(short)mode;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setPublicPermission:(short)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setPreviewData:(NSData *)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedMomentShare;
-(BOOL)shouldIgnoreBudgets;
-(NSString *)originatingScopeIdentifier;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(void)setShouldIgnoreBudgets:(BOOL)arg1 ;
-(BOOL)shouldNotifyOnUploadCompletion;
-(void)setShouldNotifyOnUploadCompletion:(BOOL)arg1 ;
-(void)_setOriginalMomentShare:(id)arg1 ;
-(void)createMomentShareAssetsFromAssets:(id)arg1 withCreationOptionsPerAsset:(id)arg2 withPreview:(id)arg3 ;
-(PHShareRelationshipChangeRequestHelper *)participantsHelper;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)addParticipants:(id)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSDate *)creationDate;
-(id)thumbnailImageData;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)setThumbnailImageData:(id)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(NSData *)previewData;
-(id)initForNewObject;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(NSString *)managedEntityName;
-(NSString *)title;
@end

