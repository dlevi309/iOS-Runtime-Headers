/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ARReferenceImage;

@interface ARImageDetectionResult : NSObject <NSCopying> {

	double _estimatedScaleFactor;
	ARReferenceImage* _referenceImage;
	void* _imageContext;
	unsigned long long _odtObjectIdentifer;
	SCD_Struct_AR1 _visionTransform;
	SCD_Struct_AR1 _worldTrackingCameraTransformAtDetection;

}

@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;                                      //@synthesize visionTransform=_visionTransform - In the implementation block
@property (assign,nonatomic) double estimatedScaleFactor;                                         //@synthesize estimatedScaleFactor=_estimatedScaleFactor - In the implementation block
@property (nonatomic,retain) ARReferenceImage * referenceImage;                                   //@synthesize referenceImage=_referenceImage - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 worldTrackingCameraTransformAtDetection;              //@synthesize worldTrackingCameraTransformAtDetection=_worldTrackingCameraTransformAtDetection - In the implementation block
@property (assign,nonatomic) void* imageContext;                                                  //@synthesize imageContext=_imageContext - In the implementation block
@property (assign,nonatomic) unsigned long long odtObjectIdentifer;                               //@synthesize odtObjectIdentifer=_odtObjectIdentifer - In the implementation block
-(ARReferenceImage *)referenceImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)estimatedScaleFactor;
-(void)setEstimatedScaleFactor:(double)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
-(void*)imageContext;
-(void)setWorldTrackingCameraTransformAtDetection:(SCD_Struct_AR1)arg1 ;
-(void)setImageContext:(void*)arg1 ;
-(void)setReferenceImage:(ARReferenceImage *)arg1 ;
-(void)setOdtObjectIdentifer:(unsigned long long)arg1 ;
-(SCD_Struct_AR1)worldTrackingCameraTransformAtDetection;
-(unsigned long long)odtObjectIdentifer;
@end

