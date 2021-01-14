/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@class NSXPCConnection;

@interface BCSNotificationServiceConnection : NSObject {

	/*^block*/id _interruptionHandler;
	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                             //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(void)setInterruptionHandler:(id)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(id)interruptionHandler;
-(void)dealloc;
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)startNFCReaderWithDelegate:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)stopNFCReaderWithErrorHandler:(/*^block*/id)arg1 ;
-(void)cancelNotificationsForCodeType:(long long)arg1 ;
-(void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
@end

