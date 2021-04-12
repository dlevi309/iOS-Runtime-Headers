/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@interface PAMicrostackshotData : NSObject {

	unsigned _cpuNumber;
	unsigned long long _timeInUsUnix;
	unsigned char _microSnapshotFlags;
	unsigned short _systemStatsFlags;

}

@property (readonly) unsigned cpuNumber;                                  //@synthesize cpuNumber=_cpuNumber - In the implementation block
@property (readonly) unsigned long long timestampInUsUnix;                //@synthesize timeInUsUnix=_timeInUsUnix - In the implementation block
@property (readonly) unsigned char microSnapshotFlags;                    //@synthesize microSnapshotFlags=_microSnapshotFlags - In the implementation block
@property (readonly) BOOL didInterruptUserMode; 
@property (readonly) BOOL isInterruptRecord; 
@property (readonly) BOOL isTimerArmingRecord; 
@property (readonly) unsigned short systemStatsFlags;                     //@synthesize systemStatsFlags=_systemStatsFlags - In the implementation block
@property (readonly) BOOL isUserIdle; 
@property (readonly) BOOL isOnBattery; 
@property (readonly) BOOL hasValidOnBatteryAndUserIdleFlags; 
@property (readonly) BOOL didInterruptKernelMode; 
-(BOOL)isInterruptRecord;
-(BOOL)isTimerArmingRecord;
-(BOOL)isOnBattery;
-(unsigned)powerstatsFlags;
-(unsigned long long)bytesUsedInBuffer;
-(BOOL)isUserIdle;
-(BOOL)didInterruptKernelMode;
-(BOOL)hasValidOnBatteryAndUserIdleFlags;
-(BOOL)didInterruptUserMode;
-(id)initWithMicrosnapshot:(const micro_snapshot*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned)cpuNumber;
-(unsigned long long)timestampInUsUnix;
-(unsigned char)microSnapshotFlags;
-(unsigned short)systemStatsFlags;
@end

