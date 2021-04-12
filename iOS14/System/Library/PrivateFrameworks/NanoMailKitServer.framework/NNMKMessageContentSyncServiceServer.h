/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessageContentSyncServiceServerDelegate;
@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessageContentSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessageContentSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id<NNMKMessageContentSyncServiceServerDelegate>)delegate;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(id)notifyInitialContentSyncCompleted:(id)arg1 ;
-(void)setDelegate:(id<NNMKMessageContentSyncServiceServerDelegate>)arg1 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)syncMessageContent:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(id)syncImageAttachment:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
@end

