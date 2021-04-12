/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSString, NSDate, NSData, NSSet;

@interface PLSuggestion : PLManagedObject <PLCloudDeletable>

@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short subtype; 
@property (assign,nonatomic) unsigned short state; 
@property (assign,nonatomic) unsigned short notificationState; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * activationDate; 
@property (nonatomic,retain) NSDate * relevantUntilDate; 
@property (nonatomic,retain) NSDate * expungeDate; 
@property (nonatomic,retain) NSData * actionData; 
@property (nonatomic,retain) NSData * featuresData; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSSet * keyAssets; 
@property (nonatomic,retain) NSSet * representativeAssets; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (assign,nonatomic) unsigned short featuredState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(unsigned long long)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)arg1 ;
+(id)suggestionsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)suggestionsToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)suggestionWithUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)predicateForAllAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2 ;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)_syncablePredicate;
+(id)suggestionsToPrefetchInManagedObjectContext:(id)arg1 ;
+(id)_representativeAssetIDsInSuggestion:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)_suggestionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4 ;
+(unsigned long long)deletePendingSuggestionsCreatedBefore:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)cloudUUIDKeyForDeletion;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 ;
-(long long)cloudDeletionType;
-(BOOL)supportsCloudUpload;
-(void)willSave;
-(NSString *)cloudUUIDForDeletion;
-(void)prepareForDeletion;
-(void)delete;
-(void)replaceKeyAsset:(id)arg1 ;
-(void)removeRepresentativeAsset:(id)arg1 ;
-(BOOL)isPending;
-(BOOL)isSyncableChange;
-(id)cplSuggestionChange;
-(void)updateCachedCounts:(id)arg1 ;
-(void)updateStartAndEndDate;
-(id)mutableKeyAssets;
-(id)mutableRepresentativeAssets;
-(void)updateWithCPLSuggestionChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(BOOL)isEmpty;
-(id)cplFullRecord;
@end

