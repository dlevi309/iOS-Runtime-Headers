/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

