/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceServerDelegate;
@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKFetchesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKFetchesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKFetchesSyncServiceServerDelegate>)delegate;
-(void)setDelegate:(id<NNMKFetchesSyncServiceServerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(void)requestPrepareForFullSync:(id)arg1 ;
-(void)warnErrorDownloadingContentForMessage:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(void)notifyOldMessagesAvailable:(id)arg1 ;
-(void)notifyFetchRequestCompleted:(id)arg1 ;
-(id)reportComposedMessageSendingProgress:(id)arg1 ;
@end

