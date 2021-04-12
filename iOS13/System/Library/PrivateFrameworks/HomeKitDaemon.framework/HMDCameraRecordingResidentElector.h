/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setReadyToRecord:(BOOL)arg1 forCamera:(id)arg2 ;
-(id)preferredResidentDevicesForCamera:(id)arg1 ;
-(void)recordingDidStartForCamera:(id)arg1 ;
-(BOOL)isReadyToRecordForCamera:(id)arg1 ;
-(void)recordingDidEndForCamera:(id)arg1 ;
-(id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2 ;
-(void)handleResidentMeshInitialized:(id)arg1 ;
-(HMISystemResourceUsageMonitor *)systemResourceUsageMonitor;
-(unsigned long long)totalNumberOfStreams;
-(void)setTotalNumberOfStreams:(unsigned long long)arg1 ;
-(NSMutableDictionary *)readyToRecordByCameraUUIDString;
-(void)_updateReadyToRecordMetric;
-(void)systemResourceUsageDidChangeTo:(long long)arg1 ;
@end

