/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/


@protocol SOSServerProtocol <NSObject>
@required
-(void)willStartSendingLocationUpdate;
-(void)startSendingLocationUpdateWithCompletion:(/*^block*/id)arg1;
-(void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(/*^block*/id)arg2;
-(void)stopSendingLocationUpdate;
-(void)isSendingLocationUpdate:(/*^block*/id)arg1;
-(void)mostRecentLocationSentWithCompletion:(/*^block*/id)arg1;

@end

