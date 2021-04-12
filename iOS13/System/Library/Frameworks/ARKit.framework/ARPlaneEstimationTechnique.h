/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>
#import <ARKit/ARWorldTrackingTechniqueObserver.h>

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isBusy;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)resultDataClasses;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg1 ;
-(void)technique:(id)arg1 didDetectPlane:(id)arg2 timestamp:(double)arg3 ;
-(id)initWithTrackingTechnique:(id)arg1 ;
-(void)technique:(id)arg1 didOutputSceneUnderstandingData:(id)arg2 timestamp:(double)arg3 ;
-(ARWorldTrackingTechnique *)worldTrackingTechnique;
-(void)setWorldTrackingTechnique:(ARWorldTrackingTechnique *)arg1 ;
@end

