/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLGenericAlbum.h>
#import <libobjc.A.dylib/PLFileSystemAlbumMetadataPersistence.h>

@class NSOrderedSet, NSString;

@interface PLImportSession : PLGenericAlbum <PLFileSystemAlbumMetadataPersistence> {

	BOOL _needsPersistenceUpdate;
	BOOL _albumShouldBeAutomaticallyDeleted;

}

@property (assign,nonatomic) BOOL needsPersistenceUpdate;                         //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (assign,nonatomic) BOOL albumShouldBeAutomaticallyDeleted;              //@synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted - In the implementation block
@property (nonatomic,retain) NSOrderedSet * assets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)validKindsForPersistence;
+(id)insertNewImportSessionAlbumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)albumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)prepareForDeletion;
-(void)willSave;
-(void)didSave;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)mutableAssets;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(void)_updateStartDate:(id)arg1 ;
-(void)_updateEndDate:(id)arg1 ;
-(void)revalidateImportDates;
-(void)updateImportDatesFromAddedAsset:(id)arg1 ;
-(BOOL)_isAssetIncludedInImportDates:(id)arg1 ;
-(BOOL)_isDateBeforeStartDate:(id)arg1 ;
-(BOOL)_isDateAfterEndDate:(id)arg1 ;
-(id)batchedAssets;
-(BOOL)validateImportSessionID:(id*)arg1 error:(id*)arg2 ;
-(BOOL)needsPersistenceUpdate;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)albumShouldBeAutomaticallyDeleted;
-(void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1 ;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
@end

