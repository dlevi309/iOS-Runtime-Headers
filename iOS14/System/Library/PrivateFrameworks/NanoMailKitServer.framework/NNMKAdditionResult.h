/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NNMKProtoMessageAdditions, NSMutableArray;

@interface NNMKAdditionResult : NSObject {

	BOOL _receivedOldMessages;
	NNMKProtoMessageAdditions* _protoMessagesWithNotificationPriority;
	NNMKProtoMessageAdditions* _protoMessagesWithDefaultPriority;
	NSMutableArray* _messageIdsWithNotificationPriority;
	NSMutableArray* _messageIdsWithDefaultPriority;
	unsigned long long _resendInterval;

}

@property (nonatomic,retain) NNMKProtoMessageAdditions * protoMessagesWithNotificationPriority;              //@synthesize protoMessagesWithNotificationPriority=_protoMessagesWithNotificationPriority - In the implementation block
@property (nonatomic,retain) NNMKProtoMessageAdditions * protoMessagesWithDefaultPriority;                   //@synthesize protoMessagesWithDefaultPriority=_protoMessagesWithDefaultPriority - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageIdsWithNotificationPriority;                            //@synthesize messageIdsWithNotificationPriority=_messageIdsWithNotificationPriority - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageIdsWithDefaultPriority;                                 //@synthesize messageIdsWithDefaultPriority=_messageIdsWithDefaultPriority - In the implementation block
@property (assign,nonatomic) BOOL receivedOldMessages;                                                       //@synthesize receivedOldMessages=_receivedOldMessages - In the implementation block
@property (assign,nonatomic) unsigned long long resendInterval;                                              //@synthesize resendInterval=_resendInterval - In the implementation block
-(unsigned long long)resendInterval;
-(void)setResendInterval:(unsigned long long)arg1 ;
-(void)setReceivedOldMessages:(BOOL)arg1 ;
-(void)setMessageIdsWithNotificationPriority:(NSMutableArray *)arg1 ;
-(void)setMessageIdsWithDefaultPriority:(NSMutableArray *)arg1 ;
-(void)setProtoMessagesWithNotificationPriority:(NNMKProtoMessageAdditions *)arg1 ;
-(void)setProtoMessagesWithDefaultPriority:(NNMKProtoMessageAdditions *)arg1 ;
-(NNMKProtoMessageAdditions *)protoMessagesWithNotificationPriority;
-(NNMKProtoMessageAdditions *)protoMessagesWithDefaultPriority;
-(NSMutableArray *)messageIdsWithNotificationPriority;
-(NSMutableArray *)messageIdsWithDefaultPriority;
-(BOOL)receivedOldMessages;
@end

