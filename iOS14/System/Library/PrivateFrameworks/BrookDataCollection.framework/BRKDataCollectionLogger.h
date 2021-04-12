/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
*/


@protocol OS_dispatch_queue;
#import <BrookDataCollection/BrookDataCollection-Structs.h>
@class NSString, DCManager, BRKDataCollectionScheduler, NSObject, NSMutableArray, NSDate;

@interface BRKDataCollectionLogger : NSObject {

	os_unfair_lock_s _lock;
	NSString* _storageDirectory;
	unsigned long long _authorization;
	BOOL _needsAuthorizationUpdate;
	DCManager* _manager;
	BRKDataCollectionScheduler* _uploadScheduler;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _idsFilesList;
	NSString* _dailyIdentifier;
	NSDate* _dailyIdentifierRefreshDate;
	unsigned long long _dailySessionUploadCount;

}

@property (nonatomic,readonly) NSString * deviceIdentifier; 
+(id)sharedInstance;
+(unsigned long long)dataCollectionAuthorization;
-(NSString *)deviceIdentifier;
-(id)_deviceIdentifier;
-(void)_logEvent:(id)arg1 ;
-(id)_init;
-(void)dealloc;
-(void)_forceUpload;
-(unsigned long long)_dataCollectionAuthorization;
-(id)_idsFileListPath;
-(BOOL)_dataCollectionIsAllowedToRunInCurrentProcess;
-(id)_dcsManager;
-(void)_makeNeedsAuthorizationUpdate;
-(void)_purgeOutdatedFiles;
-(void)_scheduleUploadTimer;
-(void)_refreshDailyMetadata;
-(unsigned long long)_determineDataCollectionAuthorization;
-(unsigned long long)_lock_dataCollectionAuthorization;
-(id)_stringByRemovingPathExtension:(id)arg1 ;
-(id)_pathExtension:(id)arg1 ;
-(BOOL)_shouldAllowDataCollectionUpload;
-(void)_logUploadWithPath:(id)arg1 ;
-(BOOL)_dcsEnabled;
-(void)_triggerUpload:(BOOL)arg1 ;
-(void)_purgeFilesForOSUpdate;
-(id)markFileForUpload:(id)arg1 ;
-(void)clearCollectedData;
@end

