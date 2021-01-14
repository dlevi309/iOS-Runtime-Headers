/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol WiFiAwareDataSessionDelegate <NSObject>
@optional
-(void)dataSession:(id)arg1 receivedControlDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 onInterfaceIndex:(unsigned)arg4;

@required
-(void)dataSessionRequestStarted:(id)arg1;
-(void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
-(void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;

@end

