/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol OS_dispatch_semaphore;
#import <ARKit/ARKit-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSUUID, NSObject, AREnvironmentProbeUpdate, ARImageData, ARCubemapGenerator;

@interface AREnvironmentProbeManager : NSObject {

	double _minimumProbeUpdateInterval;
	double _lastProbeUpdateTime;
	NSMutableArray* _initialProbeIdentifiers;
	NSMutableArray* _anchorsToRemove;
	NSMutableDictionary* _probesByIdentifier;
	NSMutableDictionary* _probeIdentifiersByPlaneIdentifier;
	NSMutableArray* _requestedProbeIdentifiers;
	NSMutableArray* _updatedProbeIdentifiers;
	NSMutableArray* _directTexturingIdentifiers;
	NSUUID* _universeProbeIdentifier;
	NSObject*<OS_dispatch_semaphore> _textureDataSemaphore;
	NSMutableArray* _probeUpdateQueue;
	AREnvironmentProbeUpdate* _currentProbeUpdate;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	ARImageData* _lastImageData;
	SCD_Struct_AR1 _lastCameraTransform;
	vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >* _lastPlanes;
	ARCubemapGenerator* _cubemapGenerator;
	BOOL _isReady;
	long long _mode;

}

@property (nonatomic,readonly) long long mode;              //@synthesize mode=_mode - In the implementation block
-(long long)mode;
-(BOOL)isBusy;
-(id)initWithMode:(long long)arg1 ;
-(id)_fullDescription;
-(id)updateProbesForTimestamp:(double)arg1 planes:(vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >*)arg2 imageData:(id)arg3 pose:(id)arg4 enableDirectTexturingForProbesWithIdentifier:(id)arg5 ;
-(BOOL)_textureDataIsBusy;
-(void)insertIntoQueue:(id)arg1 ;
-(void)requestTextureForProbe:(id)arg1 ;
-(BOOL)addProbeWithAnchor:(id)arg1 timestamp:(double)arg2 textureImmediately:(BOOL)arg3 ;
-(void)updateProbesFromExistingAnchors:(id)arg1 ;
@end

