/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

@class NSDictionary;


@protocol SYSyncEngineResponder <NSObject>
@property (nonatomic,readonly) NSDictionary * extraTransportOptions; 
@required
-(BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;
-(void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(/*^block*/id)arg3;
-(void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(/*^block*/id)arg3;
-(void)handleOutOfBandData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3;
-(void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
-(void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;
-(void)sentMessageWithID:(id)arg1 context:(id)arg2;
-(void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
-(void)serializeForIncomingSession:(/*^block*/id)arg1;
-(void)currentDeviceProximityChanged:(BOOL)arg1;
-(void)currentDeviceConnectionChanged:(BOOL)arg1;
-(NSDictionary *)extraTransportOptions;

@end

