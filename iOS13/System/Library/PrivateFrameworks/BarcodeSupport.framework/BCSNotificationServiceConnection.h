/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@class NSXPCConnection;

@interface BCSNotificationServiceConnection : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)cancelNotificationsForCodeType:(long long)arg1 ;
-(void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
@end

