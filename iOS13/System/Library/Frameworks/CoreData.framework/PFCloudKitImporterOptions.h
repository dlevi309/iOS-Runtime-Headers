/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_queue;
@class CKDatabase, CKRecordZone, PFCloudKitStoreMonitor, NSCloudKitMirroringDelegateOptions, NSObject, NSURL;

@interface PFCloudKitImporterOptions : NSObject {

	CKDatabase* _database;
	CKRecordZone* _recordZone;
	PFCloudKitStoreMonitor* _monitor;
	NSCloudKitMirroringDelegateOptions* _options;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSURL* _assetStorageURL;

}

@property (nonatomic,readonly) CKDatabase * database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                 //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) PFCloudKitStoreMonitor * monitor;                          //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSURL * assetStorageURL;                                   //@synthesize assetStorageURL=_assetStorageURL - In the implementation block
-(void)dealloc;
-(id)copy;
-(NSCloudKitMirroringDelegateOptions *)options;
-(PFCloudKitStoreMonitor *)monitor;
-(CKDatabase *)database;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(CKRecordZone *)recordZone;
-(NSURL *)assetStorageURL;
-(id)initWithOptions:(id)arg1 monitor:(id)arg2 assetStorageURL:(id)arg3 workQueue:(id)arg4 zone:(id)arg5 andDatabase:(id)arg6 ;
@end

