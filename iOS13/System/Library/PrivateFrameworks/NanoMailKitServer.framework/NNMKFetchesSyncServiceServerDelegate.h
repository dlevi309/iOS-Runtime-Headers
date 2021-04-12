/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKFetchesSyncServiceServerDelegate <NSObject>
@required
-(void)fetchesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetchInBatch:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesInBatch:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestHaltSync:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyAboutWebKitStatus:(id)arg2;

@end

