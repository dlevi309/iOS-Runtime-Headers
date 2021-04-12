/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol HFCameraClipFeedbackObserving;
@class NSString, NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSURLSession, NSURLSessionDataTask, NSOperationQueue, NSTimer, HMCameraClipFetchVideoAssetContextOperation, BKSProcessAssertion, HMCameraProfile, NSURL;

@interface HFCameraClipFeedbackManager : NSObject <NSURLSessionDelegate> {

	BOOL _isEligibleToAddFailedClipsToPendingQueue;
	BOOL _disableCertificatePinning;
	/*^block*/id _sessionCompletionHandler;
	id<HFCameraClipFeedbackObserving> _delegate;
	NSString* _backgroundURLSessionIdentifier;
	NSMutableOrderedSet* _pendingClipIdentifiers;
	NSMutableSet* _uploadedClipIdentifiers;
	NSMutableSet* _failedClipIdentifiers;
	NSMutableDictionary* _submittedClipIdentifiers;
	NSURLSession* _backgroundSession;
	NSURLSessionDataTask* _signedURLTask;
	NSOperationQueue* _backgroundSessionQueue;
	NSTimer* _networkingTimeout;
	HMCameraClipFetchVideoAssetContextOperation* _videoDownloadOperation;
	BKSProcessAssertion* _uploadsInProgressAssertion;
	HMCameraProfile* _currentCameraProfile;
	unsigned long long _environment;
	unsigned long long _apiVersion;
	NSString* _currentApiKey;
	NSString* _currentWrappedApiKey;
	NSURL* _currentUploadURL;

}

@property (nonatomic,retain) NSString * backgroundURLSessionIdentifier;                                         //@synthesize backgroundURLSessionIdentifier=_backgroundURLSessionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pendingClipIdentifiers;                                      //@synthesize pendingClipIdentifiers=_pendingClipIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * uploadedClipIdentifiers;                                            //@synthesize uploadedClipIdentifiers=_uploadedClipIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedClipIdentifiers;                                              //@synthesize failedClipIdentifiers=_failedClipIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * submittedClipIdentifiers;                                    //@synthesize submittedClipIdentifiers=_submittedClipIdentifiers - In the implementation block
@property (nonatomic,retain) NSURLSession * backgroundSession;                                                  //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * signedURLTask;                                              //@synthesize signedURLTask=_signedURLTask - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundSessionQueue;                                         //@synthesize backgroundSessionQueue=_backgroundSessionQueue - In the implementation block
@property (assign,nonatomic) BOOL isEligibleToAddFailedClipsToPendingQueue;                                     //@synthesize isEligibleToAddFailedClipsToPendingQueue=_isEligibleToAddFailedClipsToPendingQueue - In the implementation block
@property (nonatomic,retain) NSTimer * networkingTimeout;                                                       //@synthesize networkingTimeout=_networkingTimeout - In the implementation block
@property (nonatomic,retain) HMCameraClipFetchVideoAssetContextOperation * videoDownloadOperation;              //@synthesize videoDownloadOperation=_videoDownloadOperation - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * uploadsInProgressAssertion;                                  //@synthesize uploadsInProgressAssertion=_uploadsInProgressAssertion - In the implementation block
@property (nonatomic,retain) HMCameraProfile * currentCameraProfile;                                            //@synthesize currentCameraProfile=_currentCameraProfile - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                                                    //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) unsigned long long apiVersion;                                                     //@synthesize apiVersion=_apiVersion - In the implementation block
@property (assign,nonatomic) BOOL disableCertificatePinning;                                                    //@synthesize disableCertificatePinning=_disableCertificatePinning - In the implementation block
@property (nonatomic,retain) NSString * currentApiKey;                                                          //@synthesize currentApiKey=_currentApiKey - In the implementation block
@property (nonatomic,retain) NSString * currentWrappedApiKey;                                                   //@synthesize currentWrappedApiKey=_currentWrappedApiKey - In the implementation block
@property (nonatomic,retain) NSURL * currentUploadURL;                                                          //@synthesize currentUploadURL=_currentUploadURL - In the implementation block
@property (nonatomic,copy) id sessionCompletionHandler;                                                         //@synthesize sessionCompletionHandler=_sessionCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<HFCameraClipFeedbackObserving> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)dateFormatter;
+(id)dateStringFromDate:(id)arg1 ;
+(id)backgroundURLSessionIdentifier;
+(id)feedbackRequestURLForClipUUIDString:(id)arg1 ;
+(id)_appendDateStringToString:(id)arg1 ;
+(id)submissionKeyForCameraClip:(id)arg1 fromCameraProfile:(id)arg2 ;
+(id)_cameraProfileFromKey:(id)arg1 ;
+(id)_prefixStringWithoutDate:(id)arg1 ;
-(id)init;
-(id<HFCameraClipFeedbackObserving>)delegate;
-(void)setDelegate:(id<HFCameraClipFeedbackObserving>)arg1 ;
-(unsigned long long)environment;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(unsigned long long)apiVersion;
-(void)setApiVersion:(unsigned long long)arg1 ;
-(void)willResignActive;
-(void)_invalidateAssertion;
-(NSURLSession *)backgroundSession;
-(NSOperationQueue *)backgroundSessionQueue;
-(void)setBackgroundSessionQueue:(NSOperationQueue *)arg1 ;
-(NSString *)backgroundURLSessionIdentifier;
-(void)resumeServiceForURLSessionIdentifier:(id)arg1 ;
-(BOOL)_needsToPurgeClipsOlderThanThirtyDays;
-(void)purgeStaleSubmittedClips;
-(void)prepareServiceForActivityWhileBackgrounded;
-(void)setIsEligibleToAddFailedClipsToPendingQueue:(BOOL)arg1 ;
-(NSMutableSet *)uploadedClipIdentifiers;
-(void)_updatePreviousClipIdentifiers:(id)arg1 forKey:(id)arg2 ;
-(NSMutableSet *)failedClipIdentifiers;
-(void)updateLastPurgeDate;
-(void)_cleanUpLocalFilesForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)submittedClipIdentifiers;
-(BOOL)isEligibleToAddFailedClipsToPendingQueue;
-(void)_reloadFailedIdentifiersToPendingQueue:(id)arg1 ;
-(NSMutableOrderedSet *)pendingClipIdentifiers;
-(id)_identifierFromString:(id)arg1 ;
-(void)setNetworkingTimeout:(NSTimer *)arg1 ;
-(NSURLSessionDataTask *)signedURLTask;
-(void)setCurrentCameraProfile:(HMCameraProfile *)arg1 ;
-(id)nextSubmissionKeyToProcess;
-(void)addFailedIdentifiersToPendingQueueIfEligible;
-(void)_cleanUpCurrentCameraProfileIfNeeded;
-(NSTimer *)networkingTimeout;
-(void)cancelSignedURLRequest;
-(id)_cameraClipKeyFromSubmissionKey:(id)arg1 ;
-(void)setSignedURLTask:(NSURLSessionDataTask *)arg1 ;
-(id)_appendDateStringToString:(id)arg1 ;
-(void)_addIdentifierToPendingClipIdentifiers:(id)arg1 ;
-(BOOL)didPreviouslySubmitCameraClip:(id)arg1 ;
-(void)_addSubmissionKeyToUploadService:(id)arg1 ;
-(void)_cacheFeedbackService;
-(void)submitNextPendingCameraClip;
-(void)uploadStrippedAudioMovieFileAtURL:(id)arg1 toLocation:(id)arg2 ;
-(void)_failAttemptToUploadCurrentIdentifier;
-(NSString *)currentApiKey;
-(id)_encryptRecording:(id)arg1 usingKey:(id)arg2 forPayload:(id)arg3 ;
-(id)_base64EncodeDataAsString:(id)arg1 ;
-(NSString *)currentWrappedApiKey;
-(id)feedbackServiceURL;
-(id)feedbackServiceHostName;
-(id)_previousFailureIdentifierForIdentifier:(id)arg1 ;
-(BOOL)disableCertificatePinning;
-(BOOL)_canBypassCertificatePinning;
-(BOOL)_canChallengeBypassCertificatePinning:(id)arg1 ;
-(void)_removePendingIdentifier:(id)arg1 ;
-(void)_removeFailureIdentifier:(id)arg1 ;
-(void)_finalizeHandlingOfIdentifier:(id)arg1 ;
-(void)_beginNextSubmissionProcessForIdentifier:(id)arg1 ;
-(id)sessionCompletionHandler;
-(HMCameraClipFetchVideoAssetContextOperation *)videoDownloadOperation;
-(void)setVideoDownloadOperation:(HMCameraClipFetchVideoAssetContextOperation *)arg1 ;
-(id)_cameraProfileKeyFromSubmissionKey:(id)arg1 ;
-(void)setCurrentApiKey:(NSString *)arg1 ;
-(void)setCurrentUploadURL:(NSURL *)arg1 ;
-(void)setCurrentWrappedApiKey:(NSString *)arg1 ;
-(void)stripAudioFromFileForCameraClipIdentifier:(id)arg1 sendToUploadLocation:(id)arg2 ;
-(HMCameraProfile *)currentCameraProfile;
-(void)invalidateVideoDownloadOperation;
-(void)_prepareQueuesForResumptionOfService;
-(BOOL)_isValidSubmissionKey:(id)arg1 ;
-(void)_removeFileAtLocation:(id)arg1 ;
-(BKSProcessAssertion *)uploadsInProgressAssertion;
-(void)setUploadsInProgressAssertion:(BKSProcessAssertion *)arg1 ;
-(BOOL)serviceNeedsToContinueInBackground;
-(void)submitCameraClip:(id)arg1 fromCameraProfile:(id)arg2 ;
-(void)submitClipsFromCameraProfile:(id)arg1 ;
-(void)restartFeedbackServiceIfNeeded;
-(void)setSessionCompletionHandler:(id)arg1 ;
-(void)setBackgroundURLSessionIdentifier:(NSString *)arg1 ;
-(void)setPendingClipIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(void)setUploadedClipIdentifiers:(NSMutableSet *)arg1 ;
-(void)setFailedClipIdentifiers:(NSMutableSet *)arg1 ;
-(void)setSubmittedClipIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setDisableCertificatePinning:(BOOL)arg1 ;
-(NSURL *)currentUploadURL;
@end

