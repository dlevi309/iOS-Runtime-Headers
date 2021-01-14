/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class NSDictionary, ARCV3DSurfaceDetectionResult, NSString;

@interface ARPlaneData : NSObject <ARResultData> {

	NSDictionary* _planeIdentifiers;
	SCD_Struct_AR1 _renderingToVision;
	BOOL _sceneUnderstandingEnabled;
	double _timestamp;
	unsigned long long _detectionTypeMask;
	ARCV3DSurfaceDetectionResult* _detectionResult;
	SCD_Struct_AR1 _visionToRendering;

}

@property (nonatomic,readonly) ARCV3DSurfaceDetectionResult * detectionResult;              //@synthesize detectionResult=_detectionResult - In the implementation block
@property (nonatomic,readonly) BOOL sceneUnderstandingEnabled;                              //@synthesize sceneUnderstandingEnabled=_sceneUnderstandingEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 visionToRendering;                            //@synthesize visionToRendering=_visionToRendering - In the implementation block
@property (assign,nonatomic) double timestamp;                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long detectionTypeMask;                        //@synthesize detectionTypeMask=_detectionTypeMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)_surfaceOrientedPivotForPlane:(CV3DSurfaceDetectionPlane*)arg1 ;
+(SCD_Struct_AR1)_planeToWorldTransformForPlane:(CV3DSurfaceDetectionPlane*)arg1 pivot:(float)arg2 ;
+(void)setSemanticsFromCV3D:(CV3DSurfaceDetectionSemantics*)arg1 sceneUnderstandingEnabled:(BOOL)arg2 onPlane:(id)arg3 ;
+(id)anchorForDetectionResult:(CV3DSurfaceDetectionResult*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(ARCV3DSurfaceDetectionResult *)detectionResult;
-(id)initWithDetectionResult:(CV3DSurfaceDetectionResult*)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(BOOL)arg3 ;
-(unsigned long long)detectionTypeMask;
-(BOOL)sceneUnderstandingEnabled;
-(SCD_Struct_AR1)visionToRendering;
-(id)_updatedAnchor:(id)arg1 forPlane:(CV3DSurfaceDetectionPlane*)arg2 referenceOriginTransform:(SCD_Struct_AR1)arg3 ;
-(id)_anchorForPlane:(CV3DSurfaceDetectionPlane*)arg1 identifier:(id)arg2 referenceOriginTransform:(SCD_Struct_AR1)arg3 ;
-(long long)_worldAlignmentRotationForReferenceTransform:(SCD_Struct_AR1)arg1 planeAlignment:(long long)arg2 ;
-(void)_updateExtentsForPlaneAnchor:(id)arg1 plane:(CV3DSurfaceDetectionPlane*)arg2 pivot:(float)arg3 ;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)_boundsForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 ;
-(id)_geometryForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 planeBounds:(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)arg4 ;
-(id)_gridExtentForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 ;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)_orientedBoundsForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 ;
-(id)initWithARPlaneData:(id)arg1 ;
-(id)initWithDetectionResult:(CV3DSurfaceDetectionResult*)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(BOOL)arg3 visionToRendering:(SCD_Struct_AR1)arg4 ;
@end

