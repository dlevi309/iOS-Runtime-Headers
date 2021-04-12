/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableDictionary;

@interface IMDMessageSuppressionController : NSObject {

	NSMutableDictionary* _chatSuppressionFlagMap;
	NSMutableDictionary* _chatSuppressionTimerMap;
	NSMutableDictionary* _suppressedMessages;
	double _timeToSuppressMessages;

}

@property (assign,nonatomic) double timeToSuppressMessages;              //@synthesize timeToSuppressMessages=_timeToSuppressMessages - In the implementation block
+(id)sharedInstance;
-(void)setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2 ;
-(void)setupTimerForChatGUID:(id)arg1 messageGUID:(id)arg2 ;
-(id)storageController;
-(void)endMessageSuppression;
-(void)handlePlayedReceiptForChatGUID:(id)arg1 messageGUID:(id)arg2 ;
-(void)_handleReceiptForChatGUID:(id)arg1 messageGUID:(id)arg2 unsuppressEarlierMessages:(BOOL)arg3 IDSService:(id)arg4 ;
-(double)timeToSuppressMessages;
-(BOOL)hasSuppressedMessageID:(id)arg1 chatGUID:(id)arg2 ;
-(id)messageStore;
-(id)broadcaster;
-(void)handleIncomingMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 ;
-(void)_suppressionTimerFired:(id)arg1 ;
-(void)setSuppressedMessageGUID:(id)arg1 inChatWithGUID:(id)arg2 ;
-(void)setTimeToSuppressMessages:(double)arg1 ;
-(BOOL)setupTimerForChatGUID:(id)arg1 ;
-(BOOL)shouldSuppressMessageForChat:(id)arg1 message:(id)arg2 ;
-(BOOL)shouldSuppressMessageForChat:(id)arg1 messageGUID:(id)arg2 ;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1 ;
-(void)endMessageSuppressionForChatGUID:(id)arg1 ;
-(void)setupTimerForChatGUID:(id)arg1 message:(id)arg2 ;
-(void)handleReadReceiptForChatGUID:(id)arg1 messageGUID:(id)arg2 IDSService:(id)arg3 ;
@end

