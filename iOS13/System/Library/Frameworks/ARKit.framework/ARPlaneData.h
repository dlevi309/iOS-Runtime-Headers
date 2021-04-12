/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSDictionary, NSString;

@interface ARPlaneData : NSObject <ARResultData> {

	NSDictionary* _planeIdentifiers;
	BOOL _sceneUnderstandingEnabled;
	unsigned long long _detectionTypeMask;
	CV3DSurfaceDetectionResult* _detectionResult;

}

@property (nonatomic,readonly) CV3DSurfaceDetectionResult* detectionResult;              //@synthesize detectionResult=_detectionResult - In the implementation block
@property (nonatomic,readonly) BOOL sceneUnderstandingEnabled;                           //@synthesize sceneUnderstandingEnabled=_sceneUnderstandingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long detectionTypeMask;                     //@synthesize detectionTypeMask=_detectionTypeMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setSemanticsFromCV3D:(CV3DSurfaceDetectionSemantics*)arg1 sceneUnderstandingEnabled:(BOOL)arg2 onPlane:(id)arg3 ;
-(void)dealloc;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(CV3DSurfaceDetectionResult*)detectionResult;
-(id)initWithDetectionResult:(CV3DSurfaceDetectionResult*)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(BOOL)arg3 ;
-(id)_updatedAnchor:(id)arg1 forPlane:(CV3DSurfaceDetectionPlane*)arg2 referenceOriginTransform:(SCD_Struct_AR1)arg3 ;
-(id)_anchorForPlane:(CV3DSurfaceDetectionPlane*)arg1 identifier:(id)arg2 referenceOriginTransform:(SCD_Struct_AR1)arg3 ;
-(float)_surfaceOrientedPivotForPlane:(CV3DSurfaceDetectionPlane*)arg1 ;
-(SCD_Struct_AR1)_planeToWorldTransformForPlane:(CV3DSurfaceDetectionPlane*)arg1 pivot:(float)arg2 ;
-(long long)_worldAlignmentRotationForReferenceTransform:(SCD_Struct_AR1)arg1 planeAlignment:(long long)arg2 ;
-(void)_updateExtentsForPlaneAnchor:(id)arg1 plane:(CV3DSurfaceDetectionPlane*)arg2 pivot:(float)arg3 ;
-(BOOL)sceneUnderstandingEnabled;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)_boundsForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 ;
-(id)_geometryForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 planeBounds:(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)arg4 ;
-(unsigned long long)detectionTypeMask;
-(id)_gridExtentForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 ;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)_orientedBoundsForPlane:(CV3DSurfaceDetectionPlane*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 ;
-(id)hitTestFromOrigin:(SCD_Struct_AR1)arg1 withDirection:(long long)arg2 ;
@end

