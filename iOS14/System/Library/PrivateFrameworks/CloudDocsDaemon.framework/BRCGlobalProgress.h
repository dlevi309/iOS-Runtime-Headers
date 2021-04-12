/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, br_pacer, BRCAccountSession, BRCProgress, NSMutableSet, _BRCUploadInfo, _BRCDownloadInfo, NSString;

@interface BRCGlobalProgress : NSObject <BRCReachabilityDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _lazyInitDone;
	br_pacer* _updatePacer;
	BRCAccountSession* _session;
	NSObject*<OS_dispatch_source> _operationTimer;
	unsigned _operationTimerSuspendCount;
	BOOL _showExtendedInfo;
	BOOL _networkReachable;
	BRCProgress* _globalProgress;
	NSMutableSet* _appLibrariesNotLive;
	_BRCUploadInfo* _uploads;
	_BRCDownloadInfo* _downloads;

}

@property (nonatomic,__weak,readonly) BRCAccountSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_keyPathsToObserve;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithSession:(id)arg1 ;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(BRCAccountSession *)session;
-(void)dumpToContext:(id)arg1 ;
-(void)dealloc;
-(void)addProgress:(id)arg1 forDocument:(id)arg2 inGroup:(char)arg3 ;
-(void)willScheduleDocumentForDownload:(id)arg1 ;
-(void)updateDownloadThrottleForDocument:(id)arg1 toState:(int)arg2 ;
-(void)didUpdateDocument:(id)arg1 ;
-(void)didDeleteDocument:(id)arg1 ;
-(void)didUpdateClientZone:(id)arg1 ;
-(void)_updateGlobalProgress;
-(void)_destroyDownloadWithReason:(char)arg1 ;
-(void)_destroyUploadWithReason:(char)arg1 ;
-(void)_stopObservingProgress:(id)arg1 ;
-(void)_updateAppLibraryID:(id)arg1 ;
-(void)_cancelDownloadForDocumentID:(id)arg1 destroyIfLast:(BOOL)arg2 willRetryTransfer:(BOOL)arg3 ;
-(void)_createDownloadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2 ;
-(void)_updateDocument:(id)arg1 ;
-(void)_deleteDocument:(id)arg1 reason:(char)arg2 ;
-(void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned)arg2 willRetryTransfer:(BOOL)arg3 ;
-(void)_startObservingProgress:(id)arg1 ;
-(void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned)arg2 willRetryTransfer:(BOOL)arg3 pendingQuota:(BOOL)arg4 ;
-(void)dumpDictionary:(id)arg1 withMaxCount:(unsigned long long)arg2 toContext:(id)arg3 ;
-(void)_createNewGlobalProgressInGroup:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3 ;
-(void)_destroyProgressInGroup:(id)arg1 reason:(char)arg2 ;
-(void)_resumeProgressForAnotherOperationIfNeeded;
-(void)_createNewIndeterminateGlobalProgress;
-(void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned)arg2 ;
-(void)_createUploadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2 ;
-(void)_cancelDownloadForDocumentID:(id)arg1 ;
-(void)resumeProgressForZones:(id)arg1 ;
-(void)clearOutOfQuotaState;
-(void)stopPublishingProgress;
-(void)updateUploadThrottleForDocument:(id)arg1 toState:(int)arg2 ;
@end
