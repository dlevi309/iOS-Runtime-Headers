/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


#import <TimeSync/TimeSync-Structs.h>
@class IOKConnection, NSMutableArray;

@interface TSClockManager : NSObject {

	IOKConnection* _connection;
	NSMutableArray* _clockPersonalities;
	mach_timebase_info _timebaseInfo;
	unsigned long long _machAbsoluteNanosecondClockIdentifier;

}

@property (nonatomic,readonly) unsigned long long machAbsoluteNanosecondClockIdentifier;              //@synthesize machAbsoluteNanosecondClockIdentifier=_machAbsoluteNanosecondClockIdentifier - In the implementation block
+(void)notifyWhenClockManagerIsAvailable:(/*^block*/id)arg1 ;
+(id)sharedClockManagerSyncWithTimeout:(unsigned long long)arg1 ;
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)sharedClockManager;
+(id)diagnosticDescriptionForClockService:(id)arg1 withIndent:(id)arg2 ;
+(id)defaultClockPersonalities;
+(id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1 ;
+(id)clockManager;
-(id)init;
-(BOOL)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned*)arg2 error:(id*)arg3 ;
-(unsigned long long)machAbsoluteNanosecondClockIdentifier;
-(id)clockWithClockIdentifier:(unsigned long long)arg1 ;
-(BOOL)removeTSNCaptureServicesWithError:(id*)arg1 ;
-(void)addClockPersonality:(id)arg1 ;
-(BOOL)nextAvailableDynamicClockID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1 ;
-(BOOL)addgPTPServicesWithError:(id*)arg1 ;
-(unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(BOOL)arg4 error:(id*)arg5 ;
-(id)availableClockIdentifiers;
-(BOOL)releaseDynamicClockID:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)getMachAbsoluteClockID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)removegPTPServicesWithError:(id*)arg1 ;
-(void)removeClockPersonality:(id)arg1 ;
-(BOOL)addTSNCaptureServicesWithError:(id*)arg1 ;
@end

