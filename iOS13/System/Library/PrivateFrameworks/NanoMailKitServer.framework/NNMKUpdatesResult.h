/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NNMKProtoMessageStatusUpdates, NSArray;

@interface NNMKUpdatesResult : NSObject {

	NNMKProtoMessageStatusUpdates* _protoMessageUpdatesWithNotificationPriority;
	NNMKProtoMessageStatusUpdates* _protoMessageUpdatesWithDefaultPriority;
	NNMKProtoMessageStatusUpdates* _protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
	NSArray* _messageIdsWithNotificationPriority;
	NSArray* _messageIdsWithDefaultPriority;
	NSArray* _messageIdsWithDefaultPriorityAndProtectedChannel;
	NSArray* _messagesToAdd;
	NSArray* _messageIdsToDelete;

}

@property (nonatomic,retain) NNMKProtoMessageStatusUpdates * protoMessageUpdatesWithNotificationPriority;                            //@synthesize protoMessageUpdatesWithNotificationPriority=_protoMessageUpdatesWithNotificationPriority - In the implementation block
@property (nonatomic,retain) NNMKProtoMessageStatusUpdates * protoMessageUpdatesWithDefaultPriority;                                 //@synthesize protoMessageUpdatesWithDefaultPriority=_protoMessageUpdatesWithDefaultPriority - In the implementation block
@property (nonatomic,retain) NNMKProtoMessageStatusUpdates * protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;              //@synthesize protoMessageUpdatesWithDefaultPriorityAndProtectedChannel=_protoMessageUpdatesWithDefaultPriorityAndProtectedChannel - In the implementation block
@property (nonatomic,retain) NSArray * messageIdsWithNotificationPriority;                                                           //@synthesize messageIdsWithNotificationPriority=_messageIdsWithNotificationPriority - In the implementation block
@property (nonatomic,retain) NSArray * messageIdsWithDefaultPriority;                                                                //@synthesize messageIdsWithDefaultPriority=_messageIdsWithDefaultPriority - In the implementation block
@property (nonatomic,retain) NSArray * messageIdsWithDefaultPriorityAndProtectedChannel;                                             //@synthesize messageIdsWithDefaultPriorityAndProtectedChannel=_messageIdsWithDefaultPriorityAndProtectedChannel - In the implementation block
@property (nonatomic,retain) NSArray * messagesToAdd;                                                                                //@synthesize messagesToAdd=_messagesToAdd - In the implementation block
@property (nonatomic,retain) NSArray * messageIdsToDelete;                                                                           //@synthesize messageIdsToDelete=_messageIdsToDelete - In the implementation block
-(void)setMessageIdsWithNotificationPriority:(NSArray *)arg1 ;
-(void)setMessageIdsWithDefaultPriority:(NSArray *)arg1 ;
-(void)setProtoMessageUpdatesWithNotificationPriority:(NNMKProtoMessageStatusUpdates *)arg1 ;
-(void)setProtoMessageUpdatesWithDefaultPriority:(NNMKProtoMessageStatusUpdates *)arg1 ;
-(void)setProtoMessageUpdatesWithDefaultPriorityAndProtectedChannel:(NNMKProtoMessageStatusUpdates *)arg1 ;
-(void)setMessageIdsWithDefaultPriorityAndProtectedChannel:(NSArray *)arg1 ;
-(void)setMessagesToAdd:(NSArray *)arg1 ;
-(void)setMessageIdsToDelete:(NSArray *)arg1 ;
-(NSArray *)messageIdsWithNotificationPriority;
-(NSArray *)messageIdsWithDefaultPriority;
-(NNMKProtoMessageStatusUpdates *)protoMessageUpdatesWithNotificationPriority;
-(NNMKProtoMessageStatusUpdates *)protoMessageUpdatesWithDefaultPriority;
-(NNMKProtoMessageStatusUpdates *)protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
-(NSArray *)messageIdsWithDefaultPriorityAndProtectedChannel;
-(NSArray *)messagesToAdd;
-(NSArray *)messageIdsToDelete;
@end

