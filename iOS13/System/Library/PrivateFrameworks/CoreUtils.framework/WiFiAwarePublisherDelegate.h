/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol WiFiAwarePublisherDelegate <NSObject>
@optional
-(void)publisher:(id)arg1 receivedMessage:(id)arg2 fromSubscriberID:(unsigned char)arg3 subscriberAddress:(id)arg4;
-(void)publisher:(id)arg1 dataIndicatedForHandle:(id)arg2;
-(void)publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned)arg3 serviceSpecificInfo:(id)arg4;
-(void)publisher:(id)arg1 dataTerminatedForHandle:(id)arg2 reason:(long long)arg3;

@required
-(void)publisherStarted:(id)arg1;
-(void)publisher:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)publisher:(id)arg1 terminatedWithReason:(long long)arg2;

@end

