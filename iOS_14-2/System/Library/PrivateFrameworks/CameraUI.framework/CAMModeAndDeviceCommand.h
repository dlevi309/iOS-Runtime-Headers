/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration, NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand {

	int __requestID;
	CAMCaptureGraphConfiguration* __desiredGraphConfiguration;
	CAMCaptureGraphConfiguration* __resolvedGraphConfiguration;
	double __minimumExecutionTime;
	NSError* __configurationError;

}

@property (nonatomic,readonly) CAMCaptureGraphConfiguration * _desiredGraphConfiguration;                                                    //@synthesize _desiredGraphConfiguration=__desiredGraphConfiguration - In the implementation block
@property (setter=_setResolvedGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _resolvedGraphConfiguration;              //@synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration - In the implementation block
@property (nonatomic,readonly) double _minimumExecutionTime;                                                                                 //@synthesize _minimumExecutionTime=__minimumExecutionTime - In the implementation block
@property (nonatomic,readonly) int _requestID;                                                                                               //@synthesize _requestID=__requestID - In the implementation block
@property (setter=_setConfigurationError:,nonatomic,retain) NSError * _configurationError;                                                   //@synthesize _configurationError=__configurationError - In the implementation block
-(int)_requestID;
-(BOOL)_wantsLivePhotoMetadataInVideosForMode:(long long)arg1 device:(long long)arg2 ;
-(void)executeWithContext:(id)arg1 ;
-(id)userInfo;
-(NSError *)_configurationError;
-(BOOL)_wantsQuadraHighResolutionForMode:(long long)arg1 device:(long long)arg2 ;
-(id)_existingOutputsWithContext:(id)arg1 without:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)requiresSessionModification;
-(id)initWithGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 requestID:(int)arg3 ;
-(BOOL)_shouldEnableDeferredProcessingForMode:(long long)arg1 ;
-(id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)arg1 ;
-(id)_existingInputsWithContext:(id)arg1 without:(id)arg2 ;
-(BOOL)_shouldEnableLivePhotoCaptureForMode:(long long)arg1 device:(long long)arg2 ;
-(void)_setResolvedGraphConfiguration:(id)arg1 ;
-(id)_desiredOutputsWithContext:(id)arg1 shouldUseThumbnailOutputForFilters:(BOOL)arg2 ;
-(CAMCaptureGraphConfiguration *)_desiredGraphConfiguration;
-(void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)arg1 withContext:(id)arg2 ;
-(id)_specificFramerateCommandForGraphConfiguration:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_wantsLowLightBoostForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)_isStillImageMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sessionModificationLogReason;
-(double)_minimumExecutionTime;
-(id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)arg1 ;
-(void)_setConfigurationError:(id)arg1 ;
-(id)_desiredInputsWithContext:(id)arg1 ;
-(void)_performPostConfigurationSetupForGraphConfiguration:(id)arg1 withContext:(id)arg2 ;
-(void)_sanitizeDeviceUsingContext:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_resolvedGraphConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sessionModificationMinimumExecutionTime;
@end

