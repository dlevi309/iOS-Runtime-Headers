/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_queue, PFCloudKitExporterDelegate;
@class NSMutableDictionary, PFCloudKitExporterOptions, NSObject, NSCloudKitMirroringRequest, PFCloudKitExportContext, PFCloudKitStoreMonitor, NSDictionary;

@interface PFCloudKitExporter : NSObject {

	NSMutableDictionary* _operationIDToResult;
	/*^block*/id _exportCompletionBlock;
	PFCloudKitExporterOptions* _options;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSCloudKitMirroringRequest* _request;
	NSObject*<PFCloudKitExporterDelegate> _delegate;
	PFCloudKitExportContext* _exportContext;
	PFCloudKitStoreMonitor* _monitor;

}

@property (nonatomic,copy,readonly) PFCloudKitExporterOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringRequest * request;                             //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PFCloudKitExporterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PFCloudKitExportContext * exportContext;                          //@synthesize exportContext=_exportContext - In the implementation block
@property (nonatomic,readonly) PFCloudKitStoreMonitor * monitor;                                 //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSDictionary * operationIDToResult;                               //@synthesize operationIDToResult=_operationIDToResult - In the implementation block
-(void)dealloc;
-(PFCloudKitExporterOptions *)options;
-(NSObject*<PFCloudKitExporterDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFCloudKitExporterDelegate>)arg1 ;
-(PFCloudKitStoreMonitor *)monitor;
-(NSCloudKitMirroringRequest *)request;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)exportIfNecessary;
-(BOOL)analyzeHistoryInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)executeOperation:(id)arg1 ;
-(void)finishExportWithResult:(id)arg1 ;
-(void)exportOperationFinished:(id)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 operationError:(id)arg4 ;
-(void)updateMetadataForSavedRecords:(id)arg1 deletedRecordIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 ;
-(id)initWithOptions:(id)arg1 request:(id)arg2 monitor:(id)arg3 workQueue:(id)arg4 ;
-(void)exportIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(PFCloudKitExportContext *)exportContext;
-(NSDictionary *)operationIDToResult;
@end

