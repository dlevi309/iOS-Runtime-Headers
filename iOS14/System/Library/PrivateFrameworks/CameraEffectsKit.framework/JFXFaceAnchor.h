/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface JFXFaceAnchor : NSObject <NSSecureCoding, NSCopying> {

	double _focalLength;
	long long _preferredAnchorOrientation;
	CGSize _imageResolution;
	CGRect _faceRect;
	CGRect _normalizedFaceRect;
	SCD_Struct_JF14 _transform;
	SCD_Struct_JF14 _cameraTransform;

}

@property (assign,nonatomic) SCD_Struct_JF14 transform;                         //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGRect faceRect;                                   //@synthesize faceRect=_faceRect - In the implementation block
@property (assign,nonatomic) CGRect normalizedFaceRect;                         //@synthesize normalizedFaceRect=_normalizedFaceRect - In the implementation block
@property (assign,nonatomic) double focalLength;                                //@synthesize focalLength=_focalLength - In the implementation block
@property (nonatomic,readonly)  screenRelativePosition; 
@property (nonatomic,readonly) double rollAngle; 
@property (assign,nonatomic) SCD_Struct_JF14 cameraTransform;                   //@synthesize cameraTransform=_cameraTransform - In the implementation block
@property (assign,nonatomic) CGSize imageResolution;                            //@synthesize imageResolution=_imageResolution - In the implementation block
@property (assign,nonatomic) long long preferredAnchorOrientation;              //@synthesize preferredAnchorOrientation=_preferredAnchorOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)faceAnchorWithARFrame:(id)arg1 forInterfaceOrientation:(long long)arg2 withFaceRectScaleFactor:(CGSize)arg3 ;
+(SCD_Struct_JF14)CFX_mirrorPoseTransformLeftRight:(SCD_Struct_JF14)arg1 ;
-(CGRect)faceRect;
-(void)setFocalLength:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setTransform:(SCD_Struct_JF14)arg1 ;
-(SCD_Struct_JF14)transform;
-(void)setFaceRect:(CGRect)arg1 ;
-(void)setNormalizedFaceRect:(CGRect)arg1 ;
-(CGRect)normalizedFaceRect;
-(id)initWithCoder:(id)arg1 ;
-(double)focalLength;
-(double)rollAngle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageResolution;
-(void)setImageResolution:(CGSize)arg1 ;
-(SCD_Struct_JF14)cameraTransform;
-(void)setCameraTransform:(SCD_Struct_JF14)arg1 ;
-(long long)preferredAnchorOrientation;
-(double)focalLengthForViewport:(CGSize)arg1 ;
-()screenRelativePosition;
-(id)initWithTransform:(SCD_Struct_JF14)arg1 forFaceRect:(CGRect)arg2 needsMirroring:(BOOL)arg3 withFaceRectScaleFactor:(CGSize)arg4 frameImageResolution:(CGSize)arg5 preferredAnchorOrientation:(long long)arg6 ;
-(void)setPreferredAnchorOrientation:(long long)arg1 ;
@end

