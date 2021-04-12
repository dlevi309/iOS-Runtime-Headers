/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface JTFaceAnchor : NSObject <NSSecureCoding> {

	double _focalLength;
	CGRect _faceRect;
	SCD_Struct_JT12 _transform;
	SCD_Struct_JT12 _cameraTransform;

}

@property (assign,nonatomic) SCD_Struct_JT12 cameraTransform;              //@synthesize cameraTransform=_cameraTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT12 transform;                    //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGRect faceRect;                              //@synthesize faceRect=_faceRect - In the implementation block
@property (assign,nonatomic) double focalLength;                           //@synthesize focalLength=_focalLength - In the implementation block
@property (nonatomic,readonly)  screenRelativePosition; 
@property (nonatomic,readonly) double rollAngle; 
+(BOOL)supportsSecureCoding;
+(id)faceAnchorWithARFrame:(id)arg1 forInterfaceOrientation:(long long)arg2 withFaceRectScaleFactor:(CGSize)arg3 ;
+(SCD_Struct_JT12)CFX_transformFaceAnchor:(SCD_Struct_JT12)arg1 withDegreeOfRotation:(double)arg2 ;
+(SCD_Struct_JT12)CFX_mirrorPoseTransformLeftRight:(SCD_Struct_JT12)arg1 ;
+(8)CFX_zyxEulerAnglesFromMatrix:(SCD_Struct_JT12)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_JT12)transform;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(double)rollAngle;
-(double)focalLength;
-(void)setFocalLength:(double)arg1 ;
-(void)setTransform:(SCD_Struct_JT12)arg1 ;
-(SCD_Struct_JT12)cameraTransform;
-(void)setCameraTransform:(SCD_Struct_JT12)arg1 ;
-(id)initWithTransform:(SCD_Struct_JT12)arg1 forFaceRect:(CGRect)arg2 needsMirroring:(BOOL)arg3 withFaceRectScaleFactor:(CGSize)arg4 ;
-()screenRelativePosition;
-(double)focalLengthForViewport:(CGSize)arg1 ;
@end

