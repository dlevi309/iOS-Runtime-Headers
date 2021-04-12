/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>
#import <libobjc.A.dylib/PFCloudKitSerializerDelegate.h>

@class NSArray, NSMutableDictionary, NSUUID, NSMutableArray, PFCloudKitFetchedAssetBytesMetric, PFCloudKitFetchedRecordBytesMetric, NSDictionary, NSString;

@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {

	NSArray* _changedRecordZoneIDs;
	NSMutableDictionary* _assetPathToSafeSaveURL;
	NSUUID* _importOperationIdentifier;
	NSMutableArray* _updatedRecords;
	unsigned long long _totalOperationBytes;
	PFCloudKitFetchedAssetBytesMetric* _fetchedAssetBytesMetric;
	PFCloudKitFetchedRecordBytesMetric* _fetchedRecordBytesMetric;
	NSMutableDictionary* _recordTypeToDeletedRecordID;
	NSMutableArray* _allRecordIDs;
	NSMutableArray* _encounteredErrors;
	NSMutableDictionary* _fetchedZoneIDToChangeToken;
	NSMutableArray* _failedRelationships;
	NSMutableArray* _incrementalResults;
	unsigned long long _currentOperationBytes;

}

@property (nonatomic,readonly) NSArray * changedRecordZoneIDs;                          //@synthesize changedRecordZoneIDs=_changedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSUUID * importOperationIdentifier;                      //@synthesize importOperationIdentifier=_importOperationIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetPathToSafeSaveURL;                   //@synthesize assetPathToSafeSaveURL=_assetPathToSafeSaveURL - In the implementation block
@property (nonatomic,readonly) NSArray * encounteredErrors;                             //@synthesize encounteredErrors=_encounteredErrors - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecords;                                //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordTypeToDeletedRecordID;              //@synthesize recordTypeToDeletedRecordID=_recordTypeToDeletedRecordID - In the implementation block
@property (nonatomic,readonly) NSArray * allRecordIDs;                                  //@synthesize allRecordIDs=_allRecordIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long currentOperationBytes;                //@synthesize currentOperationBytes=_currentOperationBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalOperationBytes;                  //@synthesize totalOperationBytes=_totalOperationBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalRecordBytes; 
@property (nonatomic,readonly) NSDictionary * fetchedZoneIDToChangeToken;               //@synthesize fetchedZoneIDToChangeToken=_fetchedZoneIDToChangeToken - In the implementation block
@property (nonatomic,readonly) NSArray * incrementalResults;                            //@synthesize incrementalResults=_incrementalResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSDictionary *)recordTypeToDeletedRecordID;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)changedRecordZoneIDs;
-(id)initWithChangedRecordZoneIDs:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(unsigned long long)totalRecordBytes;
-(void)fetchOperationFinishedWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeDownloadedAssetFiles;
-(void)addUpdatedRecord:(id)arg1 ;
-(id)newMirroringResultByApplyingAccumulatedChanges:(id*)arg1 ;
-(void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3 ;
-(id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2 ;
-(NSDictionary *)assetPathToSafeSaveURL;
-(NSArray *)updatedRecords;
-(NSArray *)encounteredErrors;
-(void)addDeletedRecordID:(id)arg1 ofType:(id)arg2 ;
-(void)serverChangeTokenUpdated:(id)arg1 forRecordZoneWithID:(id)arg2 ;
-(void)fetchFinishedForZoneWithID:(id)arg1 serverChangeToken:(id)arg2 error:(id)arg3 ;
-(BOOL)applyAccumulatedChanges:(BOOL*)arg1 error:(id*)arg2 ;
-(void)checkAndApplyChangesIfNeeded:(id)arg1 ;
-(NSUUID *)importOperationIdentifier;
-(unsigned long long)currentOperationBytes;
-(unsigned long long)totalOperationBytes;
-(NSArray *)allRecordIDs;
-(NSDictionary *)fetchedZoneIDToChangeToken;
-(NSArray *)incrementalResults;
@end

