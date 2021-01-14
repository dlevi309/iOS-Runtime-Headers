/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;

@end

