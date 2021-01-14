/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol SFContinuityScanManagerObserver <NSObject>
@required
-(void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;
-(void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;
-(void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;
-(void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;

@end

