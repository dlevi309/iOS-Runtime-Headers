/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV6 _intervalRequested;
	SCD_Struct_AV6 _lastIntervalUsed;
	SCD_Struct_AV6 _lastPeriodicFireTime;
	SCD_Struct_AV6 _lastNonperiodicFireTime;
	SCD_Struct_AV6 _lastStopTime;
	unsigned _sequenceNum;
	/*^block*/id _block;

}
-(void)_handleTimeDiscontinuity;
-(void)_effectiveRateChanged;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 interval:(SCD_Struct_AV6)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_fireBlockForTime:(SCD_Struct_AV6)arg1 ;
-(void)_resetNextFireTime;
-(void)dealloc;
@end

