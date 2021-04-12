/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/


@protocol AXUIMessageSenderDelegate <NSObject>
@optional
-(void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long*)arg3;
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3;
-(void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2;

@required
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/id)arg3;

@end

