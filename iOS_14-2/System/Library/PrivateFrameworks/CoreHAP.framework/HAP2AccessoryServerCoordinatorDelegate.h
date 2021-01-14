/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerCoordinatorDelegate <NSObject>
@optional
-(void)coordinator:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3;
-(void)coordinator:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)coordinator:(id)arg1 didStartDiscoveringWithError:(id)arg2;

@required
-(void)coordinator:(id)arg1 didCreatePairedAccessoryServer:(id)arg2;
-(void)coordinator:(id)arg1 didCreateUnpairedAccessoryServer:(id)arg2;

@end

