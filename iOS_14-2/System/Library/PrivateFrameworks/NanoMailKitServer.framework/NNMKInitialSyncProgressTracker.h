/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKInitialSyncProgressTrackerDelegate, NNMKSyncStateManager, OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface NNMKInitialSyncProgressTracker : NSObject {

	BOOL _trackingInitialSync;
	BOOL _isWaitingForAccounts;
	BOOL _isWaitingForMessageHeaders;
	BOOL _isWaitingForMessageContent;
	BOOL _timeoutCanceledForAccounts;
	BOOL _timeoutCanceledForMessageHeaders;
	BOOL _timeoutCanceledForMessageContent;
	id<NNMKInitialSyncProgressTrackerDelegate> _delegate;
	id<NNMKSyncStateManager> _syncStateManager;
	NSObject*<OS_dispatch_queue> _executionQueue;
	double _initialSyncProgress;
	unsigned long long _initialSyncMessagesCount;
	NSMutableSet* _initialSyncMessageIdsToSyncContent;
	NSMutableSet* _initialSyncMessageIdsOfContentToAck;

}

@property (assign,nonatomic) BOOL trackingInitialSync;                                                //@synthesize trackingInitialSync=_trackingInitialSync - In the implementation block
@property (assign,nonatomic) double initialSyncProgress;                                              //@synthesize initialSyncProgress=_initialSyncProgress - In the implementation block
@property (assign,nonatomic) unsigned long long initialSyncMessagesCount;                             //@synthesize initialSyncMessagesCount=_initialSyncMessagesCount - In the implementation block
@property (nonatomic,retain) NSMutableSet * initialSyncMessageIdsToSyncContent;                       //@synthesize initialSyncMessageIdsToSyncContent=_initialSyncMessageIdsToSyncContent - In the implementation block
@property (nonatomic,retain) NSMutableSet * initialSyncMessageIdsOfContentToAck;                      //@synthesize initialSyncMessageIdsOfContentToAck=_initialSyncMessageIdsOfContentToAck - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForAccounts;                                               //@synthesize isWaitingForAccounts=_isWaitingForAccounts - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForMessageHeaders;                                         //@synthesize isWaitingForMessageHeaders=_isWaitingForMessageHeaders - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForMessageContent;                                         //@synthesize isWaitingForMessageContent=_isWaitingForMessageContent - In the implementation block
@property (assign,nonatomic) BOOL timeoutCanceledForAccounts;                                         //@synthesize timeoutCanceledForAccounts=_timeoutCanceledForAccounts - In the implementation block
@property (assign,nonatomic) BOOL timeoutCanceledForMessageHeaders;                                   //@synthesize timeoutCanceledForMessageHeaders=_timeoutCanceledForMessageHeaders - In the implementation block
@property (assign,nonatomic) BOOL timeoutCanceledForMessageContent;                                   //@synthesize timeoutCanceledForMessageContent=_timeoutCanceledForMessageContent - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKInitialSyncProgressTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NNMKSyncStateManager> syncStateManager;                               //@synthesize syncStateManager=_syncStateManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;                             //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,readonly) BOOL isTrackingInitialSync; 
+(double)syncTimeout;
-(void)setTrackingInitialSync:(BOOL)arg1 ;
-(BOOL)isWaitingForMessageHeaders;
-(void)syncFailedWithError:(id)arg1 ;
-(double)initialSyncProgress;
-(void)startSyncTimeoutForMessageContent;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isWaitingForMessageContent;
-(void)setInitialSyncMessageIdsOfContentToAck:(NSMutableSet *)arg1 ;
-(id<NNMKInitialSyncProgressTrackerDelegate>)delegate;
-(NSMutableSet *)initialSyncMessageIdsToSyncContent;
-(void)setTimeoutCanceledForMessageHeaders:(BOOL)arg1 ;
-(BOOL)timeoutCanceledForAccounts;
-(void)updateProgressWithMessageContentArrivedInPairedDevice:(id)arg1 ;
-(unsigned long long)initialSyncMessagesCount;
-(BOOL)isWaitingForAccounts;
-(void)updateProgressWithContentCompletelySyncedForMessageId:(id)arg1 ;
-(void)setTimeoutCanceledForAccounts:(BOOL)arg1 ;
-(BOOL)timeoutCanceledForMessageContent;
-(void)setIsWaitingForMessageHeaders:(BOOL)arg1 ;
-(void)setTimeoutCanceledForMessageContent:(BOOL)arg1 ;
-(BOOL)isTrackingInitialSync;
-(BOOL)trackingInitialSync;
-(void)_handleInitialSyncCompleted;
-(void)setInitialSyncMessagesCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<NNMKInitialSyncProgressTrackerDelegate>)arg1 ;
-(void)startSyncTimeoutForAccounts;
-(void)setIsWaitingForMessageContent:(BOOL)arg1 ;
-(void)setIsWaitingForAccounts:(BOOL)arg1 ;
-(void)setInitialSyncProgress:(double)arg1 ;
-(BOOL)timeoutCanceledForMessageHeaders;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(void)setSyncStateManager:(id<NNMKSyncStateManager>)arg1 ;
-(void)updateProgressWithAccountsSent;
-(void)finishedSendingInitialSyncContentToPairedDevice;
-(void)resetFlags;
-(void)syncCompleted;
-(void)initialSyncTimedOut;
-(void)incrementProgressBy:(double)arg1 ;
-(NSMutableSet *)initialSyncMessageIdsOfContentToAck;
-(void)updateProgressWithMessageHeadersSent:(id)arg1 ;
-(void)cancelTimeout;
-(id<NNMKSyncStateManager>)syncStateManager;
-(void)startTrackingInitialSync;
-(void)updateProgressWithMessageHeadersArrivedInPairedDevice;
-(void)updateProgressWithAccountsArrivedInPairedDevice;
-(void)setInitialSyncMessageIdsToSyncContent:(NSMutableSet *)arg1 ;
-(void)updateProgressWithMessageContentDownloadFailed:(id)arg1 ;
-(void)startSyncTimeoutForMessageHeaders;
@end

