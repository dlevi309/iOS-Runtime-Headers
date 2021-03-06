/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFCloudKitExporterOptions, NSMutableArray, NSArray;

@interface PFCloudKitExportContext : NSObject {

	PFCloudKitExporterOptions* _options;
	unsigned long long _totalBytes;
	unsigned long long _totalRecords;
	unsigned long long _totalRecordIDs;
	NSMutableArray* _writtenAssetURLs;

}

@property (nonatomic,readonly) NSArray * writtenAssetURLs;                     //@synthesize writtenAssetURLs=_writtenAssetURLs - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytes;                  //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalRecords;                //@synthesize totalRecords=_totalRecords - In the implementation block
@property (nonatomic,readonly) unsigned long long totalRecordIDs;              //@synthesize totalRecordIDs=_totalRecordIDs - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(BOOL)modifyRecordsOperationFinishedForStore:(id)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 operationError:(id)arg4 managedObjectContext:(id)arg5 error:(id*)arg6 ;
-(BOOL)insertRecordMetadataForObjectIDsInBatch:(id)arg1 inManagedObjectContext:(id)arg2 withPendingTransactionNumber:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)totalBytes;
-(BOOL)processAnalyzedHistoryInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)checkForObjectsNeedingExportInStore:(id)arg1 andReturnCount:(unsigned long long*)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
-(id)newOperationBySerializingDirtyObjectsInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(NSArray *)writtenAssetURLs;
-(BOOL)currentBatchExceedsThresholds:(id)arg1 ;
-(unsigned long long)totalRecords;
-(unsigned long long)totalRecordIDs;
-(void)dealloc;
@end

