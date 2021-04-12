/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@protocol PRBeaconDelegate <NSObject>
@optional
-(void)beacon:(id)arg1 didOutputRangeResults:(id)arg2;
-(void)beacon:(id)arg1 didOutputSuperframeStats:(id)arg2;

@required
-(void)beacon:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)beacon:(id)arg1 didFailWithError:(id)arg2;

@end

