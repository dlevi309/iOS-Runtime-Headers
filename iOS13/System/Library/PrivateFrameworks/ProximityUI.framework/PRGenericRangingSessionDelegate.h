/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@protocol PRGenericRangingSessionDelegate <NSObject>
@optional
-(void)didReceiveNewSolutions:(id)arg1;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;

@required
-(void)didFailWithError:(id)arg1;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1;

@end

