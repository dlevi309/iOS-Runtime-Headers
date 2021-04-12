/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLGenericAlbum.h>
#import <libobjc.A.dylib/PLFileSystemAlbumMetadataPersistence.h>

@class NSSet, NSString;

@interface PLImportSession : PLGenericAlbum <PLFileSystemAlbumMetadataPersistence> {

	BOOL _needsPersistenceUpdate;
	BOOL _albumShouldBeAutomaticallyDeleted;

}

@property (assign,nonatomic) BOOL needsPersistenceUpdate;                         //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (assign,nonatomic) BOOL albumShouldBeAutomaticallyDeleted;              //@synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted - In the implementation block
@property (nonatomic,retain) NSSet * assets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)insertNewImportSessionAlbumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)albumsWithImportSessionIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)albumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)validKindsForPersistence;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)albumShouldBeAutomaticallyDeleted;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(void)didSave;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(id)mutableAssets;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(void)willSave;
-(void)prepareForDeletion;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)_updateStartDate:(id)arg1 ;
-(void)_updateEndDate:(id)arg1 ;
-(void)revalidateImportDates;
-(void)updateImportDatesFromAddedAsset:(id)arg1 ;
-(BOOL)_isAssetIncludedInImportDates:(id)arg1 ;
-(BOOL)_isDateBeforeStartDate:(id)arg1 ;
-(BOOL)_isDateAfterEndDate:(id)arg1 ;
-(id)_orderedBatchedAssets;
-(BOOL)validateImportSessionID:(id*)arg1 error:(id*)arg2 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
@end

