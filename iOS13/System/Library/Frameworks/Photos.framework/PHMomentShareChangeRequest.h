/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHMomentShare, PHRelationshipChangeRequestHelper, NSString, NSDate, NSData, PHObjectPlaceholder, NSManagedObjectID;

@interface PHMomentShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHMomentShare* _originalMomentShare;
	PHRelationshipChangeRequestHelper* _participantsHelper;

}

@property (nonatomic,retain) NSString * originatingScopeIdentifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSData * previewData; 
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * participantsHelper;              //@synthesize participantsHelper=_participantsHelper - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedMomentShare; 
@property (assign,nonatomic) BOOL shouldIgnoreBudgets; 
@property (assign,nonatomic) BOOL shouldNotifyOnUploadCompletion; 
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
+(id)validateMomentShareCreationDate:(id)arg1 error:(id*)arg2 ;
+(id)changeRequestForMomentShare:(id)arg1 ;
+(id)creationRequestForMomentShareWithTitle:(id)arg1 mode:(short)arg2 creationDate:(id)arg3 createMomentShareAssetsFromAssets:(id)arg4 creationOptionsPerAsset:(id)arg5 preview:(id)arg6 originatingMomentShare:(id)arg7 ;
+(void)trashMomentShares:(id)arg1 ;
+(void)expungeMomentShares:(id)arg1 ;
-(void)setMode:(short)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(short)mode;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSData *)previewData;
-(id)thumbnailImageData;
-(void)setThumbnailImageData:(id)arg1 ;
-(BOOL)shouldNotifyOnUploadCompletion;
-(BOOL)shouldIgnoreBudgets;
-(void)setPreviewData:(NSData *)arg1 ;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(NSString *)originatingScopeIdentifier;
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
-(PHObjectPlaceholder *)placeholderForCreatedMomentShare;
-(void)setShouldIgnoreBudgets:(BOOL)arg1 ;
-(void)setShouldNotifyOnUploadCompletion:(BOOL)arg1 ;
-(void)_setOriginalMomentShare:(id)arg1 ;
-(void)_prepareParticipantsWithFetchResult:(id)arg1 ;
-(void)_prepareParticipantsHelperIfNeeded;
-(id)_mutableParticipantsObjectIDsAndUUIDs;
-(void)addParticipants:(id)arg1 ;
-(void)createMomentShareAssetsFromAssets:(id)arg1 withCreationOptionsPerAsset:(id)arg2 withPreview:(id)arg3 ;
-(PHRelationshipChangeRequestHelper *)participantsHelper;
@end

