/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
*/


@protocol AXUIMessageSenderDelegate <NSObject>
@optional
-(void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long*)arg3;
-(void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2;
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3;

@required
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/id)arg3;

@end

