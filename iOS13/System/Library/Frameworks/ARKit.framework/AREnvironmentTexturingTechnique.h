/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARTechnique.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class ARPlaneWorld, NSObject, ARImageData, AREnvironmentProbeManager;

@interface AREnvironmentTexturingTechnique : ARTechnique {

	ARPlaneWorld* _planeWorld;
	NSObject*<OS_dispatch_queue> _planeUpdateQueue;
	NSObject*<OS_dispatch_queue> _networkPrewarmQueue;
	ARImageData* _ultraWide;
	NSObject*<OS_dispatch_semaphore> _ultraWideSemaphore;
	BOOL _wantsHDREnvironmentTextures;
	BOOL _networkIntialized;
	AREnvironmentProbeManager* _probeManager;

}

@property (retain) AREnvironmentProbeManager * probeManager;              //@synthesize probeManager=_probeManager - In the implementation block
@property (assign) BOOL networkIntialized;                                //@synthesize networkIntialized=_networkIntialized - In the implementation block
@property (readonly) BOOL wantsHDREnvironmentTextures;                    //@synthesize wantsHDREnvironmentTextures=_wantsHDREnvironmentTextures - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)prepare:(BOOL)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)requiredSensorDataTypes;
-(AREnvironmentProbeManager *)probeManager;
-(void)setProbeManager:(AREnvironmentProbeManager *)arg1 ;
-(BOOL)networkIntialized;
-(void)setNetworkIntialized:(BOOL)arg1 ;
-(BOOL)wantsHDREnvironmentTextures;
-(id)initWithOptions:(long long)arg1 wantsHDREnvironmentTextures:(BOOL)arg2 ;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
@end

