/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class ARReferenceObject;

@interface ARObjectDetectionResult : NSObject {

	ARReferenceObject* _referenceObject;
	SCD_Struct_AR1 _visionTransform;

}

@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;                   //@synthesize visionTransform=_visionTransform - In the implementation block
@property (nonatomic,retain) ARReferenceObject * referenceObject;              //@synthesize referenceObject=_referenceObject - In the implementation block
-(ARReferenceObject *)referenceObject;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
-(void)setReferenceObject:(ARReferenceObject *)arg1 ;
@end

