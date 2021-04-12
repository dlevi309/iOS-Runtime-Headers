/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@protocol HMDeviceSetupSessionDelegate <NSObject>
@optional
-(void)setupSessionDidOpen:(id)arg1;

@required
-(void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
-(void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

