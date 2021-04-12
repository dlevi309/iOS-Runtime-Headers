/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceClientDelegate;
@interface NNMKFetchesSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKFetchesSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKFetchesSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKFetchesSyncServiceClientDelegate>)delegate;
-(void)setDelegate:(id<NNMKFetchesSyncServiceClientDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)requestFetch:(id)arg1 ;
-(id)requestMoreMessagesInBatch:(id)arg1 ;
-(void)requestMoreMessagesForConversation:(id)arg1 ;
-(id)requestContent:(id)arg1 highPriority:(BOOL)arg2 ;
-(id)requestFullSync:(id)arg1 ;
-(id)requestHaltSync:(id)arg1 ;
-(id)notifyInitialSyncFinished:(id)arg1 ;
-(id)notifyCompanionAboutWebKitStatus:(id)arg1 ;
@end

