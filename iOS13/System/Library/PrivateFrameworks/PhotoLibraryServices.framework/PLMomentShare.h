/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSString, NSDate, NSURL, NSData, NSSet;

@interface PLMomentShare : PLManagedObject <PLCloudDeletable>

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * scopeIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (assign,nonatomic) short status; 
@property (assign,nonatomic) short mode; 
@property (assign,nonatomic) int assetCount; 
@property (assign,nonatomic) int photosCount; 
@property (assign,nonatomic) int videosCount; 
@property (assign,nonatomic) int uploadedPhotosCount; 
@property (assign,nonatomic) int uploadedVideosCount; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDate * expiryDate; 
@property (nonatomic,copy) NSData * thumbnailImageData; 
@property (nonatomic,copy) NSData * previewData; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (assign,nonatomic) BOOL shouldIgnoreBudgets; 
@property (assign,nonatomic) BOOL shouldNotifyOnUploadCompletion; 
@property (assign,nonatomic) short trashedState; 
@property (assign,nonatomic) short localPublishState; 
@property (nonatomic,copy) NSString * originatingScopeIdentifier; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain) NSSet * masters; 
@property (nonatomic,retain) NSSet * participants; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)listOfSyncedProperties;
+(id)momentShareWithUUID:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(void)deleteAllMomentSharesInManagedObjectContext:(id)arg1 ;
+(void)fetchMomentShareFromShareURL:(id)arg1 inPhotoLibrary:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)momentShareWithShareURL:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)momentShareWithScopeIdentifier:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)momentShareWithScopedIdentifier:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)updateOrInsertWithCPLMomentShare:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(long long)_cloudDeletionTypeForStatus:(short)arg1 ;
+(id)_andPredicateWithTrashedState:(id)arg1 ;
+(id)momentShareWithOriginatingScopeIdentifier:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_momentSharesWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
+(id)predicateToExcludeTrashedMomentShares;
+(id)predicateToExcludeExpiredMomentShares;
+(void)deleteExpiredMomentSharesInManagedObjectContext:(id)arg1 ;
-(id)_owner;
-(void)forceSync;
-(id)_contactStore;
-(void)prepareForDeletion;
-(void)willSave;
-(id)ownerIdentifier;
-(id)cplMomentShare;
-(BOOL)supportsCloudUpload;
-(long long)cloudDeletionType;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)isSyncableChange;
-(void)acceptWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)publishWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_statusDescription;
-(void)trash;
-(void)updateWithScopeChange:(id)arg1 ;
-(void)_updateSharingStatusFromParticipant:(id)arg1 ;
-(void)calculatePropertyValues;
-(BOOL)shouldAutoAccept;
-(BOOL)_isOwnerInContacts;
-(unsigned long long)estimateUploadSize;
-(id)_modeDescription;
@end

