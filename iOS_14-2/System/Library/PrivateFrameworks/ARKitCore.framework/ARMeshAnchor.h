/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARAnchor.h>

@class ARMeshGeometry;

@interface ARMeshAnchor : ARAnchor {

	ARMeshGeometry* _geometry;
	double _timestamp;
	double _maxExtentError;
	 _corner;
	 _extent;
	SCD_Struct_AR1 _visionTransform;

}

@property (nonatomic,readonly)  corner;                                     //@synthesize corner=_corner - In the implementation block
@property (nonatomic,readonly)  extent;                                     //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double maxExtentError;                         //@synthesize maxExtentError=_maxExtentError - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 visionTransform;              //@synthesize visionTransform=_visionTransform - In the implementation block
@property (nonatomic,readonly) ARMeshGeometry * geometry;                   //@synthesize geometry=_geometry - In the implementation block
+(BOOL)supportsSecureCoding;
-(ARMeshGeometry *)geometry;
-(double)timestamp;
-(id)initWithAnchor:(id)arg1 ;
-()extent;
-(void)encodeWithCoder:(id)arg1 ;
-()corner;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 transform:(SCD_Struct_AR1)arg4 voxelSize:(double)arg5 ;
-(id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 visionTransform:(SCD_Struct_AR1)arg4 referenceOriginTransform:(SCD_Struct_AR1)arg5 ;
-(double)maxExtentError;
-(id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 referenceOriginTransform:(SCD_Struct_AR1)arg4 ;
-(void)setMaxExtentError:(double)arg1 ;
@end

