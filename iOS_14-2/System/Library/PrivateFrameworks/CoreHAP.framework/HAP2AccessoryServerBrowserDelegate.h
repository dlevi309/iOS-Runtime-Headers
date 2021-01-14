/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerBrowserDelegate <NSObject>
@optional
-(void)accessoryServerBrowser:(id)arg1 didLoseUnpairedAccessoryServer:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didLosePairedAccessoryServer:(id)arg2 error:(id)arg3;

@required
-(void)accessoryServerBrowser:(id)arg1 didDiscoverPairedAccessoryServer:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didDiscoverUnpairedAccessoryServer:(id)arg2;

@end

