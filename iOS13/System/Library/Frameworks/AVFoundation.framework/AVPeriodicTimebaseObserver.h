/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV7 _intervalRequested;
	SCD_Struct_AV7 _lastIntervalUsed;
	SCD_Struct_AV7 _lastPeriodicFireTime;
	SCD_Struct_AV7 _lastNonperiodicFireTime;
	SCD_Struct_AV7 _lastStopTime;
	unsigned _sequenceNum;
	/*^block*/id _block;

}
-(void)dealloc;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 interval:(SCD_Struct_AV7)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlockForTime:(SCD_Struct_AV7)arg1 ;
@end

