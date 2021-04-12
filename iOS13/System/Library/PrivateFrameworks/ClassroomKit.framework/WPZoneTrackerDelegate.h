/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol WPZoneTrackerDelegate <NSObject>
@optional
-(void)zoneTracker:(id)arg1 enteredZoneInfo:(id)arg2;

@required
-(void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
-(void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
-(void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;
-(void)zoneTrackerDidUpdateState:(id)arg1;

@end

