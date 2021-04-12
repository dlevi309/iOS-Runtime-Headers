/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessageContentSyncServiceServerDelegate;
@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessageContentSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessageContentSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKMessageContentSyncServiceServerDelegate>)delegate;
-(void)setDelegate:(id<NNMKMessageContentSyncServiceServerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)syncMessageContent:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(id)syncImageAttachment:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(id)notifyInitialContentSyncCompleted:(id)arg1 ;
@end

