/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@protocol PRRangingClientProtocol <NSObject>
@optional
-(void)didReceiveNewSolutions:(id)arg1;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
-(void)didReceiveSessionStartNotification:(id)arg1;

@required
-(void)didFailWithError:(id)arg1;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1;

@end

