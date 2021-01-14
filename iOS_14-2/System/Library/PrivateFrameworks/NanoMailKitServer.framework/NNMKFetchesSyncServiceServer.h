/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceServerDelegate;
@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKFetchesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKFetchesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)notifyFetchRequestCompleted:(id)arg1 ;
-(id<NNMKFetchesSyncServiceServerDelegate>)delegate;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)notifyOldMessagesAvailable:(id)arg1 ;
-(void)setDelegate:(id<NNMKFetchesSyncServiceServerDelegate>)arg1 ;
-(void)warnErrorDownloadingContentForMessage:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)reportComposedMessageSendingProgress:(id)arg1 ;
-(void)requestPrepareForFullSync:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
@end

