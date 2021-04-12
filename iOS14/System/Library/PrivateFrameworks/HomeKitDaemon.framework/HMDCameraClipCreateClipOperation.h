/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraClipAddSignificantEventOperation.h>

@class NSDate, HMCameraClipEncryptionManager;

@interface HMDCameraClipCreateClipOperation : HMDCameraClipAddSignificantEventOperation {

	double _targetFragmentDuration;
	NSDate* _clipStartDate;
	HMCameraClipEncryptionManager* _encryptionManager;

}

@property (readonly) double targetFragmentDuration;                                  //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (copy,readonly) NSDate * clipStartDate;                                    //@synthesize clipStartDate=_clipStartDate - In the implementation block
@property (readonly) HMCameraClipEncryptionManager * encryptionManager;              //@synthesize encryptionManager=_encryptionManager - In the implementation block
+(id)logCategory;
-(id)attributeDescriptions;
-(double)targetFragmentDuration;
-(NSDate *)clipStartDate;
-(id)modelsToUpdate;
-(HMCameraClipEncryptionManager *)encryptionManager;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7 ;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7 dataSource:(id)arg8 ;
@end

