/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailFoundation/EFPriorityDesignator.h>
#import <libobjc.A.dylib/EFCancelable.h>

@class NSThread, NSString, MFInvocationQueue, MFError, MFMailboxUid, NSMutableSet;

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable> {

	NSThread* _runningThread;
	NSString* _displayName;
	NSString* _statusMessage;
	NSString* _descriptionString;
	MFInvocationQueue* _ourQueue;
	double _percentDone;
	unsigned _key : 13;
	unsigned _canCancel : 1;
	unsigned _shouldCancel : 1;
	unsigned _isActive : 1;
	unsigned _changeCount : 8;
	id _delegate;
	id _target;
	MFError* _error;
	unsigned long long _expectedLength;
	unsigned long long _maxCount;
	unsigned long long _currentCount;
	double _currentItemPercentDone;
	unsigned _supportsPerItemProgress : 1;
	MFMailboxUid* _mailbox;
	double _lastTime;
	double _startTime;
	unsigned long long _gotNewMessagesState;
	unsigned long long _bytesRead;
	unsigned long long _bytesWritten;
	NSMutableSet* _reasons;
	NSMutableSet* _associatedCancelables;
	BOOL _isRemoteSearch;
	/*^block*/id _startedFetch;
	long long _transportType;

}

@property (retain) MFMailboxUid * mailbox;                                        //@synthesize mailbox=_mailbox - In the implementation block
@property (copy) id startedFetch;                                                 //@synthesize startedFetch=_startedFetch - In the implementation block
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) unsigned long long gotNewMessagesState; 
@property (nonatomic,retain) id activityTarget; 
@property (nonatomic,retain) id primaryTarget; 
@property (nonatomic,readonly) int changeCount; 
@property (nonatomic,readonly) double startTime; 
@property (assign,nonatomic) double percentDone; 
@property (assign,nonatomic) unsigned long long expectedLength; 
@property (nonatomic,copy) NSString * statusMessage; 
@property (assign,nonatomic) BOOL canBeCancelled; 
@property (assign,nonatomic) BOOL shouldCancel; 
@property (assign,nonatomic) BOOL isRemoteSearch;                                 //@synthesize isRemoteSearch=_isRemoteSearch - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesRead; 
@property (nonatomic,readonly) unsigned long long bytesWritten; 
@property (nonatomic,readonly) long long transportType;                           //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) MFError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentMonitor;
+(id)pushNewMonitor;
+(void)destroyMonitor;
-(id)init;
-(NSString *)description;
-(void)setDelegate:(id)arg1 ;
-(MFError *)error;
-(BOOL)isActive;
-(void)cancel;
-(void)setError:(MFError *)arg1 ;
-(int)changeCount;
-(void)reset;
-(NSString *)displayName;
-(long long)transportType;
-(id)reasons;
-(void)addReason:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(double)startTime;
-(void)_didChange;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(NSString *)statusMessage;
-(void)addCancelable:(id)arg1 ;
-(void)setStatusMessage:(NSString *)arg1 ;
-(unsigned long long)bytesRead;
-(BOOL)shouldCancel;
-(void)setCanBeCancelled:(BOOL)arg1 ;
-(void)resetConnectionStats;
-(void)postActivityStarting;
-(void)postActivityFinished:(id)arg1 ;
-(id)userInfoForNotification;
-(void)postDidChangeWithUserInfo:(id)arg1 ;
-(id)_ntsThrottledUserInfoDict;
-(void)setSupportsPerItemProgress:(BOOL)arg1 ;
-(double)percentDone;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 ;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3 ;
-(void)setPercentDone:(double)arg1 withKey:(int)arg2 ;
-(void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(void)addActivityTarget:(id)arg1 ;
-(BOOL)_lockedAddActivityTarget:(id)arg1 ;
-(void)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
-(void)_cancelAssociatedCancelables;
-(void)cancelMessage;
-(void)setShouldCancel:(BOOL)arg1 ;
-(void)setStatusMessage:(id)arg1 withKey:(int)arg2 ;
-(void)startActivity;
-(void)finishedActivity:(id)arg1 ;
-(void)notifyConnectionEstablished;
-(void)setCurrentCount:(unsigned long long)arg1 ;
-(void)setPercentDoneOfCurrentItem:(double)arg1 ;
-(void)setGotNewMessagesState:(unsigned long long)arg1 ;
-(unsigned long long)gotNewMessagesState;
-(BOOL)hasReason:(id)arg1 ;
-(void)setPercentDone:(double)arg1 ;
-(void)setExpectedLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedLength;
-(void)setActivityTarget:(id)arg1 ;
-(id)activityTarget;
-(void)addActivityTargets:(id)arg1 ;
-(id)activityTargets;
-(BOOL)canBeCancelled;
-(void)removeCancelable:(id)arg1 ;
-(void)setInvocationQueue:(id)arg1 ;
-(int)acquireExclusiveAccessKey;
-(void)relinquishExclusiveAccessKey:(int)arg1 ;
-(void)recordBytesRead:(unsigned long long)arg1 ;
-(void)recordBytesWritten:(unsigned long long)arg1 ;
-(unsigned long long)bytesWritten;
-(void)recordTransportType:(long long)arg1 ;
-(MFMailboxUid *)mailbox;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(id)startedFetch;
-(void)setStartedFetch:(id)arg1 ;
-(BOOL)isRemoteSearch;
-(void)setIsRemoteSearch:(BOOL)arg1 ;
@end

