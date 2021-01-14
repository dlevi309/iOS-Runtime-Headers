/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARODTResult : NSObject {

	unsigned long long _detectedObjectID;
	void* _imageContext;
	double _estimatedScaleFactor;
	SCD_Struct_AR1 _visionTransform;

}

@property (assign,nonatomic) unsigned long long detectedObjectID;              //@synthesize detectedObjectID=_detectedObjectID - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;                   //@synthesize visionTransform=_visionTransform - In the implementation block
@property (assign,nonatomic) void* imageContext;                               //@synthesize imageContext=_imageContext - In the implementation block
@property (assign,nonatomic) double estimatedScaleFactor;                      //@synthesize estimatedScaleFactor=_estimatedScaleFactor - In the implementation block
-(double)estimatedScaleFactor;
-(void)setEstimatedScaleFactor:(double)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
-(void*)imageContext;
-(unsigned long long)detectedObjectID;
-(void)setImageContext:(void*)arg1 ;
-(void)setDetectedObjectID:(unsigned long long)arg1 ;
@end

