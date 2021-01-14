/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/

#import <libobjc.A.dylib/NDAnalyticsEnvelopeStoreObserver.h>
#import <libobjc.A.dylib/NDAnalyticsUploadSchedulerDelegate.h>
#import <libobjc.A.dylib/NDAnalyticsService.h>

@class NDAnalyticsEnvelopeStore, NDAnalyticsPayloadAssembler, NDAnalyticsPayloadUploader, NDAnalyticsUploadScheduler, FCKeyValueStore, NFMutexLock, NSString;

@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService> {

	NDAnalyticsEnvelopeStore* _envelopeStore;
	NDAnalyticsPayloadAssembler* _payloadAssembler;
	NDAnalyticsPayloadUploader* _payloadUploader;
	NDAnalyticsUploadScheduler* _uploadScheduler;
	FCKeyValueStore* _lastUploadDatesByContentType;
	NFMutexLock* _keyValueStoreLock;

}

@property (nonatomic,retain) NDAnalyticsEnvelopeStore * envelopeStore;                    //@synthesize envelopeStore=_envelopeStore - In the implementation block
@property (nonatomic,retain) NDAnalyticsPayloadAssembler * payloadAssembler;              //@synthesize payloadAssembler=_payloadAssembler - In the implementation block
@property (nonatomic,retain) NDAnalyticsPayloadUploader * payloadUploader;                //@synthesize payloadUploader=_payloadUploader - In the implementation block
@property (nonatomic,retain) NDAnalyticsUploadScheduler * uploadScheduler;                //@synthesize uploadScheduler=_uploadScheduler - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * lastUploadDatesByContentType;              //@synthesize lastUploadDatesByContentType=_lastUploadDatesByContentType - In the implementation block
@property (nonatomic,retain) NFMutexLock * keyValueStoreLock;                             //@synthesize keyValueStoreLock=_keyValueStoreLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitEnvelopes:(id)arg1 withSubmissionCompletion:(/*^block*/id)arg2 foregroundUploadCompletion:(/*^block*/id)arg3 ;
-(id)init;
-(void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)arg1 ;
-(NDAnalyticsPayloadUploader *)payloadUploader;
-(id)_lastUploadDatesByContentType;
-(void)setKeyValueStoreLock:(NFMutexLock *)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 storeDirectoryFileURL:(id)arg2 URLSessionQueue:(id)arg3 ;
-(void)submitEnvelopes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NDAnalyticsEnvelopeStore *)envelopeStore;
-(FCKeyValueStore *)lastUploadDatesByContentType;
-(NDAnalyticsUploadScheduler *)uploadScheduler;
-(void)uploadScheduler:(id)arg1 performUploadWithCompletion:(/*^block*/id)arg2 ;
-(void)envelopeStore:(id)arg1 didFlushEnvelopesForEntries:(id)arg2 ;
-(void)setEnvelopeStore:(NDAnalyticsEnvelopeStore *)arg1 ;
-(void)setPayloadUploader:(NDAnalyticsPayloadUploader *)arg1 ;
-(void)setPayloadAssembler:(NDAnalyticsPayloadAssembler *)arg1 ;
-(void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUploadScheduler:(NDAnalyticsUploadScheduler *)arg1 ;
-(NDAnalyticsPayloadAssembler *)payloadAssembler;
-(void)setLastUploadDatesByContentType:(FCKeyValueStore *)arg1 ;
-(void)_scheduleUploadIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NFMutexLock *)keyValueStoreLock;
-(id)_handleDroppedEnvelopesForLocalReasons:(id)arg1 ;
-(id)_handleOutcomeOfUploadAttemptWithPayload:(id)arg1 success:(BOOL)arg2 error:(id)arg3 willRetry:(BOOL)arg4 hitEndpoint:(BOOL)arg5 ;
@end

