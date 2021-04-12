/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/


@protocol SOSServerProtocol <NSObject>
@required
-(void)startSendingLocationUpdateWithCompletion:(/*^block*/id)arg1;
-(void)mostRecentLocationSentWithCompletion:(/*^block*/id)arg1;
-(void)willStartSendingLocationUpdate;
-(void)stopSendingLocationUpdate;
-(void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(/*^block*/id)arg2;
-(void)isSendingLocationUpdate:(/*^block*/id)arg1;

@end

