/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMDHome;

@interface HMDAccessoryCount : NSObject {

	HMDHome* _home;

}

@property (__weak) HMDHome * home;                                                         //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long numHAPAccessories; 
@property (readonly) unsigned long long numCameraAccessories; 
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled; 
@property (readonly) unsigned long long numSecurityClassAccessories; 
@property (readonly) unsigned long long numCriticalSensorAccessories; 
-(id)initWithHome:(id)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(unsigned long long)numHAPAccessoriesWithAnyServiceWithTypes:(id)arg1 ;
-(unsigned long long)numHAPAccessories;
-(unsigned long long)numCameraAccessories;
-(unsigned long long)numCameraAccessoriesRecordingEnabled;
-(unsigned long long)numSecurityClassAccessories;
-(unsigned long long)numCriticalSensorAccessories;
@end

