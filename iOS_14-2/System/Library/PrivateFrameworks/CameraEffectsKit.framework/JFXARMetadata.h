/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ARFrame, JFXFaceAnchor, NSDictionary;

@interface JFXARMetadata : NSObject <NSSecureCoding, NSCopying> {

	ARFrame* _arFrame;
	JFXFaceAnchor* _faceAnchor;
	NSDictionary* _animojiPhysicsBlendShapes;
	long long _pvTransformOrientation;
	CGSize _imageResolution;
	SCD_Struct_JF13 _cameraIntrinsics;
	SCD_Struct_JF14 _anchorTransform;
	SCD_Struct_JF14 _cameraTransform;

}

@property (nonatomic,readonly) SCD_Struct_JF14 cameraTransform;                   //@synthesize cameraTransform=_cameraTransform - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF13 cameraIntrinsics;                  //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (nonatomic,readonly) long long pvTransformOrientation;                  //@synthesize pvTransformOrientation=_pvTransformOrientation - In the implementation block
@property (nonatomic,copy) NSDictionary * animojiPhysicsBlendShapes;              //@synthesize animojiPhysicsBlendShapes=_animojiPhysicsBlendShapes - In the implementation block
@property (nonatomic,readonly) ARFrame * arFrame;                                 //@synthesize arFrame=_arFrame - In the implementation block
@property (nonatomic,readonly) JFXFaceAnchor * faceAnchor;                        //@synthesize faceAnchor=_faceAnchor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF14 anchorTransform;                   //@synthesize anchorTransform=_anchorTransform - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackedFace; 
@property (nonatomic,readonly) CGSize imageResolution;                            //@synthesize imageResolution=_imageResolution - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_JF13)cameraIntrinsics;
-(id)initWithCoder:(id)arg1 ;
-(ARFrame *)arFrame;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageResolution;
-(SCD_Struct_JF14)cameraTransform;
-(JFXFaceAnchor *)faceAnchor;
-(BOOL)hasTrackedFace;
-(id)initWithAnchorTransform:(SCD_Struct_JF14)arg1 cameraTransform:(SCD_Struct_JF14)arg2 cameraIntrinsics:(SCD_Struct_JF13)arg3 cameraImageResolution:(CGSize)arg4 ;
-(NSDictionary *)animojiPhysicsBlendShapes;
-(long long)pvTransformOrientation;
-(id)initWithARFrame:(id)arg1 faceAnchor:(id)arg2 ;
-(id)initWithFaceAnchor:(id)arg1 cameraIntrinsics:(SCD_Struct_JF13)arg2 ;
-(SCD_Struct_JF14)cameraProjectionForOutputSize:(CGSize)arg1 interfaceOrientation:(long long)arg2 zNear:(double)arg3 zFar:(double)arg4 ;
-(SCD_Struct_JF14)cameraTransformForInterfaceOrientation:(long long)arg1 ;
-(SCD_Struct_JF14)anchorTransform;
-(void)setAnimojiPhysicsBlendShapes:(NSDictionary *)arg1 ;
@end

