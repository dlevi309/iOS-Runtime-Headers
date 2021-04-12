/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class IMDMessageStore, NSString, NSTimer, NSMutableSet, IMTimingCollection;

@interface IMDMessageFromStorageController : NSObject {

	unsigned long long _pendingReadReceiptFromStorageCount;
	IMDMessageStore* _messageStore;
	NSString* _serviceName;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	IMTimingCollection* _timingComingBackFromStorage;
	unsigned long long _messagesProcessedComingBackFromStorage;
	id __broadcasterForTesting;
	double _storageTimerInterval;
	double _storageTimerUpdateInterval;
	double _lastMessageStorageTimerInterval;

}

@property (nonatomic,retain) IMDMessageStore * messageStore;                                         //@synthesize messageStore=_messageStore - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSTimer * storageTimer;                                                 //@synthesize storageTimer=_storageTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * messagesReceivedDuringStorage;                           //@synthesize messagesReceivedDuringStorage=_messagesReceivedDuringStorage - In the implementation block
@property (nonatomic,retain) IMTimingCollection * timingComingBackFromStorage;                       //@synthesize timingComingBackFromStorage=_timingComingBackFromStorage - In the implementation block
@property (assign,nonatomic) unsigned long long messagesProcessedComingBackFromStorage;              //@synthesize messagesProcessedComingBackFromStorage=_messagesProcessedComingBackFromStorage - In the implementation block
@property (nonatomic,retain) id _broadcasterForTesting;                                              //@synthesize _broadcasterForTesting=__broadcasterForTesting - In the implementation block
@property (assign,nonatomic) double storageTimerInterval;                                            //@synthesize storageTimerInterval=_storageTimerInterval - In the implementation block
@property (assign,nonatomic) double storageTimerUpdateInterval;                                      //@synthesize storageTimerUpdateInterval=_storageTimerUpdateInterval - In the implementation block
@property (assign,nonatomic) double lastMessageStorageTimerInterval;                                 //@synthesize lastMessageStorageTimerInterval=_lastMessageStorageTimerInterval - In the implementation block
@property (assign,nonatomic) unsigned long long pendingReadReceiptFromStorageCount;                  //@synthesize pendingReadReceiptFromStorageCount=_pendingReadReceiptFromStorageCount - In the implementation block
+(id)SMSStorageController;
+(id)iMessageStorageController;
-(BOOL)isAwaitingStorageTimer;
-(unsigned long long)messagesProcessedComingBackFromStorage;
-(unsigned long long)pendingReadReceiptFromStorageCount;
-(void)noteLastItemProcessedWithError:(unsigned long long)arg1 ;
-(void)setStorageTimer:(NSTimer *)arg1 ;
-(void)setLastMessageStorageTimerInterval:(double)arg1 ;
-(void)incrementPendingReadReceiptFromStorageCount;
-(void)setPendingReadReceiptFromStorageCount:(unsigned long long)arg1 ;
-(void)set_broadcasterForTesting:(id)arg1 ;
-(void)_storageTimerFired;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(void)decrementPendingReadReceiptFromStorageCount;
-(void)setStorageTimerUpdateInterval:(double)arg1 ;
-(IMTimingCollection *)timingComingBackFromStorage;
-(id)_broadcasterForTesting;
-(IMDMessageStore *)messageStore;
-(double)storageTimerUpdateInterval;
-(id)broadcaster;
-(void)noteSuppressedMessageUpdate:(id)arg1 ;
-(double)storageTimerInterval;
-(NSTimer *)storageTimer;
-(id)initWithMessageStore:(id)arg1 ;
-(double)lastMessageStorageTimerInterval;
-(NSString *)serviceName;
-(void)noteLastItemProcessed;
-(void)_submitStorageMetricsWithError:(unsigned long long)arg1 ;
-(void)setMessageStore:(IMDMessageStore *)arg1 ;
-(void)setMessagesProcessedComingBackFromStorage:(unsigned long long)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)noteItemFromStorage:(id)arg1 ;
-(NSMutableSet *)messagesReceivedDuringStorage;
-(void)_postMessagesFromStorage:(id)arg1 ;
-(void)setStorageTimerInterval:(double)arg1 ;
-(void)noteLastItemFromStorage:(id)arg1 ;
-(void)setMessagesReceivedDuringStorage:(NSMutableSet *)arg1 ;
-(void)setTimingComingBackFromStorage:(IMTimingCollection *)arg1 ;
@end

