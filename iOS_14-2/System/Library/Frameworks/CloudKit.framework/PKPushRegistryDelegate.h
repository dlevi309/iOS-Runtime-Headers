/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol PKPushRegistryDelegate <NSObject>
@optional
-(void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
-(void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;

@required
-(void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;

@end

