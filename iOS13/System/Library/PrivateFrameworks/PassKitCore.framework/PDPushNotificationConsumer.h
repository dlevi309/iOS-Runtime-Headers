/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PDPushNotificationConsumer <NSObject>
@required
-(id)pushNotificationTopics;
-(void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
-(void)applyPushNotificationToken:(id)arg1;

@end

