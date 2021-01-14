/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2CoAPClientDelegate <NSObject>
@optional
-(void)clientDidGetRegistered:(id)arg1;
-(void)clientDidGetUnregistered:(id)arg1;

@required
-(void)clientDidDisconnect:(id)arg1 error:(id)arg2;
-(void)client:(id)arg1 didReceiveEvent:(id)arg2;

@end

