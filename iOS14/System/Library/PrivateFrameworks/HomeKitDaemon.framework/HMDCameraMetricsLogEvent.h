/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMDCameraSessionID, HMDAccessory;

@interface HMDCameraMetricsLogEvent : HMDLogEvent {

	BOOL _isLocal;
	HMDCameraSessionID* _sessionID;
	HMDAccessory* _accessory;

}

@property (nonatomic,readonly) HMDCameraSessionID * sessionID;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (readonly) BOOL isLocal;                                           //@synthesize isLocal=_isLocal - In the implementation block
-(BOOL)isLocal;
-(HMDCameraSessionID *)sessionID;
-(HMDAccessory *)accessory;
-(id)initWithMetricUUID:(id)arg1 sessionID:(id)arg2 cameraAccessory:(id)arg3 isLocal:(BOOL)arg4 ;
@end

