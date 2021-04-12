/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@protocol PRBeaconListenerDelegate <NSObject>
@optional
-(void)beaconListener:(id)arg1 didOutputSuperframeStats:(id)arg2;
-(void)beaconListener:(id)arg1 didOutputRangeResults:(id)arg2;

@required
-(void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)beaconListener:(id)arg1 didFailWithError:(id)arg2;

@end

