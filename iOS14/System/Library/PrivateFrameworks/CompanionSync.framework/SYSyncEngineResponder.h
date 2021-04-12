/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

@class NSDictionary;


@protocol SYSyncEngineResponder <NSObject>
@property (nonatomic,readonly) NSDictionary * extraTransportOptions; 
@required
-(void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(/*^block*/id)arg3;
-(void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;
-(void)currentDeviceConnectionChanged:(BOOL)arg1;
-(BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;
-(void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3;
-(NSDictionary *)extraTransportOptions;
-(void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
-(void)currentDeviceProximityChanged:(BOOL)arg1;
-(void)handleOutOfBandData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(/*^block*/id)arg3;
-(void)serializeForIncomingSession:(/*^block*/id)arg1;
-(void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
-(void)sentMessageWithID:(id)arg1 context:(id)arg2;

@end

