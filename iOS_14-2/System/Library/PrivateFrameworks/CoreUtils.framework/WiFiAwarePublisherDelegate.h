/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol WiFiAwarePublisherDelegate <NSObject>
@optional
-(void)publisher:(id)arg1 receivedMessage:(id)arg2 fromSubscriberID:(unsigned char)arg3 subscriberAddress:(id)arg4;
-(void)publisher:(id)arg1 dataIndicatedForHandle:(id)arg2;
-(void)publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned)arg3 serviceSpecificInfo:(id)arg4;
-(void)publisher:(id)arg1 dataTerminatedForHandle:(id)arg2 reason:(long long)arg3;

@required
-(void)publisher:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)publisherStarted:(id)arg1;
-(void)publisher:(id)arg1 terminatedWithReason:(long long)arg2;

@end

