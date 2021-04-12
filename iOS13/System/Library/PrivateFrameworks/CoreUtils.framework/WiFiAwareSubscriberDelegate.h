/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol WiFiAwareSubscriberDelegate <NSObject>
@optional
-(void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;

@required
-(void)subscriberStarted:(id)arg1;
-(void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
-(void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
-(void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;

@end

