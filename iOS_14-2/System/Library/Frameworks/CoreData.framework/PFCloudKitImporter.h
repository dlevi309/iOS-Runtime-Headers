/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFCloudKitImporterOptions, NSCloudKitMirroringImportRequest, NSArray, NSMutableArray, CKServerChangeToken;

@interface PFCloudKitImporter : NSObject {

	PFCloudKitImporterOptions* _options;
	NSCloudKitMirroringImportRequest* _request;
	NSArray* _workItems;
	NSMutableArray* _workItemResults;
	CKServerChangeToken* _updatedDatabaseChangeToken;
	unsigned long long _totalImportedBytes;

}

@property (nonatomic,copy,readonly) PFCloudKitImporterOptions * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSArray * workItems;                                           //@synthesize workItems=_workItems - In the implementation block
@property (nonatomic,readonly) NSArray * workItemResults;                                     //@synthesize workItemResults=_workItemResults - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * updatedDatabaseChangeToken;              //@synthesize updatedDatabaseChangeToken=_updatedDatabaseChangeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long totalImportedBytes;                         //@synthesize totalImportedBytes=_totalImportedBytes - In the implementation block
-(NSArray *)workItems;
-(void)processWorkItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)databaseFetchFinishWithContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processDatabaseImportContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dequeueWorkItem;
-(void)workItemFinished:(id)arg1 withResult:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)workItemResults;
-(void)importIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(CKServerChangeToken *)updatedDatabaseChangeToken;
-(unsigned long long)totalImportedBytes;
-(PFCloudKitImporterOptions *)options;
-(NSCloudKitMirroringImportRequest *)request;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)dealloc;
@end

