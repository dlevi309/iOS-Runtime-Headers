/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>
#import <ARKitCore/ARWorldTrackingTechniqueObserver.h>

@protocol OS_dispatch_semaphore;
@class NSObject, ARPlaneData, ARRawSceneUnderstandingData, ARWorldTrackingTechnique, NSString;

@interface ARPlaneEstimationTechnique : ARTechnique <ARWorldTrackingTechniqueObserver> {

	NSObject*<OS_dispatch_semaphore> _semaphoreResult;
	ARPlaneData* _planeResultData;
	ARRawSceneUnderstandingData* _rawSceneUnderstandingData;
	ARWorldTrackingTechnique* _worldTrackingTechnique;

}

@property (nonatomic,retain) ARWorldTrackingTechnique * worldTrackingTechnique;              //@synthesize worldTrackingTechnique=_worldTrackingTechnique - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)detectPlanes:(unsigned long long)arg1 withFrame:(id)arg2 ;
+(id)_detectPlanesWithDetector:(CV3DSurfaceDetectionContextRef)arg1 types:(unsigned long long)arg2 camera:(id)arg3 referenceFeaturePoints:(id)arg4 referenceOriginTransform:(SCD_Struct_AR1)arg5 ;
-(BOOL)isBusy;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)resultDataClasses;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg1 ;
-(id)initWithTrackingTechnique:(id)arg1 ;
-(void)technique:(id)arg1 didDetectPlane:(id)arg2 timestamp:(double)arg3 ;
-(void)technique:(id)arg1 didOutputSceneUnderstandingData:(id)arg2 timestamp:(double)arg3 ;
-(ARWorldTrackingTechnique *)worldTrackingTechnique;
-(void)setWorldTrackingTechnique:(ARWorldTrackingTechnique *)arg1 ;
@end

