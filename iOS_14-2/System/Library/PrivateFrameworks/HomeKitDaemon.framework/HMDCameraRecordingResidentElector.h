/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorDelegate.h>

@class HMFUnfairLock, HMISystemResourceUsageMonitor, HMDHomeManager, NSMutableDictionary, NSString;

@interface HMDCameraRecordingResidentElector : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {

	HMFUnfairLock* _lock;
	unsigned long long _totalNumberOfStreams;
	HMISystemResourceUsageMonitor* _systemResourceUsageMonitor;
	HMDHomeManager* _homeManager;
	NSMutableDictionary* _readyToRecordByCameraUUIDString;

}

@property (assign) unsigned long long totalNumberOfStreams;                                   //@synthesize totalNumberOfStreams=_totalNumberOfStreams - In the implementation block
@property (readonly) HMISystemResourceUsageMonitor * systemResourceUsageMonitor;              //@synthesize systemResourceUsageMonitor=_systemResourceUsageMonitor - In the implementation block
@property (readonly) HMDHomeManager * homeManager;                                            //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) NSMutableDictionary * readyToRecordByCameraUUIDString;                   //@synthesize readyToRecordByCameraUUIDString=_readyToRecordByCameraUUIDString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)start;
-(HMDHomeManager *)homeManager;
-(void)removeDataForCameraWithUUID:(id)arg1 ;
-(void)setReadyToRecord:(BOOL)arg1 forCameraWithUUID:(id)arg2 ;
-(id)preferredResidentDevicesForCamera:(id)arg1 deviceFilter:(/*^block*/id)arg2 ;
-(void)recordingDidStartForCameraWithUUID:(id)arg1 ;
-(BOOL)isReadyToRecordForCameraWithUUID:(id)arg1 ;
-(void)recordingDidEndForCameraWithUUID:(id)arg1 ;
-(id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2 ;
-(void)handleResidentMeshInitialized:(id)arg1 ;
-(HMISystemResourceUsageMonitor *)systemResourceUsageMonitor;
-(unsigned long long)totalNumberOfStreams;
-(void)setTotalNumberOfStreams:(unsigned long long)arg1 ;
-(NSMutableDictionary *)readyToRecordByCameraUUIDString;
-(void)_updateReadyToRecordMetric;
-(void)systemResourceUsageDidChangeTo:(long long)arg1 ;
@end

