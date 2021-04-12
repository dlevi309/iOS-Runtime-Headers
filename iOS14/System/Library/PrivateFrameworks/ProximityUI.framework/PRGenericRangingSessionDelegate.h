/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@protocol PRGenericRangingSessionDelegate <NSObject>
@optional
-(void)didReceiveNewSolutions:(id)arg1;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;

@required
-(void)didFailWithError:(id)arg1;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;

@end

