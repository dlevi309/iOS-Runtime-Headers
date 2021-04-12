/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>
#import <libobjc.A.dylib/PFCloudKitSerializerDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSDictionary, NSArray, NSString;

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {

	NSMutableDictionary* _assetPathToSafeSaveURL;
	NSMutableArray* _updatedRecords;
	NSMutableArray* _updatedRecordIDs;
	unsigned long long _totalAssetBytes;
	NSMutableArray* _encounteredErrors;

}

@property (nonatomic,readonly) NSDictionary * assetPathToSafeSaveURL;              //@synthesize assetPathToSafeSaveURL=_assetPathToSafeSaveURL - In the implementation block
@property (nonatomic,readonly) NSArray * encounteredErrors;                        //@synthesize encounteredErrors=_encounteredErrors - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecords;                           //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecordIDs;                         //@synthesize updatedRecordIDs=_updatedRecordIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long totalAssetBytes;                 //@synthesize totalAssetBytes=_totalAssetBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchRecordsRequest;
-(void)fetchFinishedForRecord:(id)arg1 withID:(id)arg2 error:(id)arg3 ;
-(void)fetchOperationFinishedWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeDownloadedAssetFiles;
-(void)addUpdatedRecord:(id)arg1 ;
-(id)newMirroringResultByApplyingAccumulatedChanges:(id*)arg1 ;
-(void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3 ;
-(id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2 ;
-(NSDictionary *)assetPathToSafeSaveURL;
-(unsigned long long)totalAssetBytes;
-(NSArray *)updatedRecords;
-(NSArray *)updatedRecordIDs;
-(NSArray *)encounteredErrors;
@end

