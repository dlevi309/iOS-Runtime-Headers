/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@interface UBConfig : NSObject {

	BOOL _allocateOnSetup;
	BOOL _useIOSurfaceForMTLBuffer;
	int _regMethod;
	BOOL _enableFlickerDetection;
	BOOL _enableGrayGhostDetection;
	BOOL _forceEnableMotionDetection;
	int _defaultDoRedFaceFix;
	int _isAsynchronous;
	int _ctxCreateSynchronization;
	int _gpuPriority;
	BOOL _isPanoramaMode;
	BOOL _isDepthEnabled;
	BOOL _enableDeepFusion;
	BOOL _enableProgressiveFusion;
	int _patchBasedFusionMode;
	BOOL _enableChromaticAberrationCorrection;
	BOOL _enableGreenTintCorrection;
	BOOL _workaroundMissingMetadata;

}
-(void)dealloc;
-(id)initWithDefaults:(id)arg1 ;
@end

