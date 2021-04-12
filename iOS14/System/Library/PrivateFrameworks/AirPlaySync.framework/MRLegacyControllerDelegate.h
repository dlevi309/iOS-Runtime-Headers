/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySync.framework/AirPlaySync
*/


@protocol MRLegacyControllerDelegate <NSObject>
@optional
-(void)legacyControllerConnectionDidDisconnect:(id)arg1 withError:(id)arg2;
-(void)legacyControllerConnectionDidConnect:(id)arg1;

@required
-(void)legacyController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2 forOutputDevice:(id)arg3;
-(void)legacyController:(id)arg1 volumeDidChange:(float)arg2 forOutputDevice:(id)arg3;
-(void)legacyController:(id)arg1 masterVolumeDidChange:(float)arg2;

@end

