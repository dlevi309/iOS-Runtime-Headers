/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerDiscoveryDelegate <NSObject>
@optional
-(void)discovery:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)discovery:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)discovery:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3;

@required
-(void)discovery:(id)arg1 didDiscoverAccessory:(id)arg2;

@end

