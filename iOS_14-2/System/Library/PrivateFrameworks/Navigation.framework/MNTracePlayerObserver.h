/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTracePlayerObserver <NSObject>
@required
-(void)tracePlayerDidStart:(id)arg1;
-(void)tracePlayerDidStop:(id)arg1;
-(void)tracePlayerDidPause:(id)arg1;
-(void)tracePlayerDidResume:(id)arg1;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;
-(void)tracePlayerDidStayOnRoute:(id)arg1;
-(void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
-(void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg1;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg1;
-(void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
-(void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
-(void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
-(void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;

@end

