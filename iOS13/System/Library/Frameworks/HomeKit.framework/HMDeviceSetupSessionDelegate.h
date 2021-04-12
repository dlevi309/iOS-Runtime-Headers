/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@protocol HMDeviceSetupSessionDelegate <NSObject>
@optional
-(void)setupSessionDidOpen:(id)arg1;

@required
-(void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
-(void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

