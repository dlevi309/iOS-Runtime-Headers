/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLShare.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSDate, NSData, NSString, NSSet;

@interface PLMomentShare : PLShare <PLCloudDeletable>

@property (assign,nonatomic) int assetCount; 
@property (assign,nonatomic) int photosCount; 
@property (assign,nonatomic) int videosCount; 
@property (assign,nonatomic) int uploadedPhotosCount; 
@property (assign,nonatomic) int uploadedVideosCount; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSData * thumbnailImageData; 
@property (nonatomic,copy) NSData * previewData; 
@property (assign,nonatomic) BOOL shouldIgnoreBudgets; 
@property (assign,nonatomic) BOOL shouldNotifyOnUploadCompletion; 
@property (assign,nonatomic) BOOL forceSyncAttempted; 
@property (nonatomic,copy) NSString * originatingScopeIdentifier; 
@property (nonatomic,retain) NSSet * momentShareAssets; 
@property (nonatomic,retain) NSSet * momentShareMasters; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)createOwnedMomentShareWithUUID:(id)arg1 creationDate:(id)arg2 title:(id)arg3 inPhotoLibrary:(id)arg4 ;
+(void)forceSyncMomentShares:(id)arg1 photoLibrary:(id)arg2 ;
+(id)listOfSyncedProperties;
+(long long)_cloudDeletionTypeForStatus:(short)arg1 ;
+(id)momentSharesReferencedInUploadBatchContainer:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)scopeIdentifierPrefix;
+(BOOL)supportsCPLScopeType:(long long)arg1 ;
+(void)createOrUpdateShareWithScopeChange:(id)arg1 photoLibrary:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)updateOrInsertWithCPLMomentShare:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)momentShareWithOriginatingScopeIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(long long)cloudDeletionType;
-(BOOL)supportsCloudUpload;
-(void)willSave;
-(void)prepareForDeletion;
-(void)trash;
-(BOOL)isSyncableChange;
-(id)cplScopeChange;
-(void)_updateSharingStatusFromCurrentUser:(id)arg1 ;
-(void)calculatePropertyValues;
-(BOOL)shouldAutoAccept;
-(BOOL)_isOwnerInContacts;
-(void)publishWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_contactStore;
-(void)updateWithScopeChange:(id)arg1 ;
-(unsigned long long)estimateUploadSize;
@end

