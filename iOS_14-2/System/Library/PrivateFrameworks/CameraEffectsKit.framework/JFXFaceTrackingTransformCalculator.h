/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXARMetadata;

@interface JFXFaceTrackingTransformCalculator : NSObject {

	float _pixelsPerUnit;
	JFXARMetadata* _arMetadata;
	long long _interfaceOrientation;
	CGSize _outputSize;

}

@property (nonatomic,retain) JFXARMetadata * arMetadata;                        //@synthesize arMetadata=_arMetadata - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                               //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                  //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) float pixelsPerUnit;                               //@synthesize pixelsPerUnit=_pixelsPerUnit - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF14 cameraProjection; 
@property (nonatomic,readonly) SCD_Struct_JF14 cameraTransform; 
@property (nonatomic,readonly) SCD_Struct_JF14 onFaceTransform; 
@property (nonatomic,readonly) SCD_Struct_JF14 billboardTransform; 
-(long long)interfaceOrientation;
-(CGSize)outputSize;
-(SCD_Struct_JF14)cameraTransform;
-(JFXARMetadata *)arMetadata;
-(id)initWithARMetaData:(id)arg1 outputSize:(CGSize)arg2 interfaceOrientation:(long long)arg3 ;
-(id)calculateFaceTrackingTransform;
-(SCD_Struct_JF14)billboardTransform;
-(SCD_Struct_JF14)onFaceTransform;
-(SCD_Struct_JF14)cameraProjection;
-(SCD_Struct_JF14)nonScaledOrientedCameraTransform;
-(float)pixelsPerUnit;
-(void)setArMetadata:(JFXARMetadata *)arg1 ;
-(void)setPixelsPerUnit:(float)arg1 ;
@end

