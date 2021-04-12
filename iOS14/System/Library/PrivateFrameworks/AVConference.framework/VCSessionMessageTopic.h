/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class NSArray, NSString, NSObject, NSMutableDictionary;

@interface VCSessionMessageTopic : NSObject {

	NSArray* associatedStrings;
	NSString* topicKey;
	BOOL allowConcurrent;
	NSObject*<OS_dispatch_queue> outMessageQueue;
	id controlChannelWeak;
	NSObject*<OS_dispatch_queue> inMessageQueue;
	/*^block*/id receiveBlock;
	long long latestOutgoingMessageIndex;
	BOOL isSendingEnabled;
	BOOL shouldEncodeTopicKeyInMessage;
	NSString* topicPrefix;
	NSMutableDictionary* transactionCache;

}

@property (assign,setter=setIsSendingEnabled:,nonatomic) BOOL isSendingEnabled; 
@property (readonly) NSString * topicKey; 
-(void)sendMessage:(id)arg1 ;
-(void)dealloc;
-(void)setIsSendingEnabled:(BOOL)arg1 ;
-(id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(BOOL)arg3 controlChannel:(id)arg4 receiveHandler:(/*^block*/id)arg5 ;
-(NSString *)topicKey;
-(id)messageForCommand:(id)arg1 ;
-(void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(BOOL)isStringAssociated:(id)arg1 ;
-(void)passMessage:(id)arg1 sequence:(int)arg2 fromParticipant:(id)arg3 ;
-(void)clearTransactionCacheForParticipant:(id)arg1 ;
-(void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 withSequence:(long long)arg3 numRetries:(long long)arg4 ;
-(BOOL)isDuplicateMessageID:(id)arg1 messageHistory:(id)arg2 participantID:(id)arg3 ;
-(void)purgeExpiredEntries:(double)arg1 messageHistory:(id)arg2 participantID:(id)arg3 ;
-(BOOL)isSendingEnabled;
@end

