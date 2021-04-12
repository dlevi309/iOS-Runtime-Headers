/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
*/

#import <VisualLocalization/VisualLocalization-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface VLLocalizationDebugInfo : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSData* _imageData;
	double _monotonicTimestamp;
	double _timestamp;
	double _duration;
	SCD_Struct_VL5 _location;
	SCD_Struct_VL6 _heading;
	 _gravity;
	SCD_Struct_VL2 _transform;
	SCD_Struct_VL7 _cameraIntrinsics;
	 _radialDistortion;
	unsigned long long _resultStatus;
	BOOL _hasStatistics;
	SCD_Struct_VL9* _statistics;
	unsigned long long _inliersCount;
	int* _inlierIndices;
	float* _points2D;
	double* _points3D;
	BOOL _hasResultPose;
	SCD_Struct_VL2 _resultTransform;
	SCD_Struct_VL1 _resultLocation;
	float _resultConfidence;
	SCD_Struct_VL3 _resultCovariance;

}

@property (getter=_timestamp,nonatomic,readonly) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=_location,nonatomic,readonly) SCD_Struct_VL5 location;                              //@synthesize location=_location - In the implementation block
@property (getter=_heading,nonatomic,readonly) SCD_Struct_VL6 heading;                                //@synthesize heading=_heading - In the implementation block
@property (getter=_gravity,nonatomic,readonly)  gravity;                                              //@synthesize gravity=_gravity - In the implementation block
@property (getter=_transform,nonatomic,readonly) SCD_Struct_VL2 transform;                            //@synthesize transform=_transform - In the implementation block
@property (getter=_cameraIntrinsics,nonatomic,readonly) SCD_Struct_VL7 cameraIntrinsics;              //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (getter=_radialDistortion,nonatomic,readonly)  radialDistortion;                            //@synthesize radialDistortion=_radialDistortion - In the implementation block
@property (getter=_resultStatus,nonatomic,readonly) unsigned long long resultStatus;                  //@synthesize resultStatus=_resultStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long inliersCount;                                       //@synthesize inliersCount=_inliersCount - In the implementation block
@property (nonatomic,readonly) float* points2D;                                                       //@synthesize points2D=_points2D - In the implementation block
@property (nonatomic,readonly) double* points3D;                                                      //@synthesize points3D=_points3D - In the implementation block
@property (nonatomic,readonly) NSData * pngData;                                                      //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_VL2)_transform;
-(double)_timestamp;
-(id)results;
-(SCD_Struct_VL5)_location;
-(void)encodeWithCoder:(id)arg1 ;
-(1)_gravity;
-(SCD_Struct_VL6)_heading;
-(NSData *)pngData;
-(SCD_Struct_VL7)_cameraIntrinsics;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)inputParameters;
-(unsigned long long)_resultStatus;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_fixupStatsPointers;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 monotonicTimestamp:(double)arg2 timestamp:(double)arg3 duration:(double)arg4 location:(SCD_Struct_VL5)arg5 heading:(SCD_Struct_VL6)arg6 gravity:(SCD_Struct_VL2)arg7 transform:(SCD_Struct_VL7)arg8 cameraIntrinsics:(const SCD_Struct_VL11*)arg9 radialDistortion:(unsigned long long)arg10 statistics:(const SCD_Struct_VL4*)arg11 resultStatus:(BOOL)arg12 ;
-(id)analyticsInformationWithSessionStartMonotonicTime:(double)arg1 ;
-(unsigned long long)inliersCount;
-(float*)points2D;
-(double*)points3D;
-(1)_radialDistortion;
@end

