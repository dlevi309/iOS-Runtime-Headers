/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class ARPointCloud;

@interface ARKeyFrame : NSObject {

	ARPointCloud* _featurePoints;
	SCD_Struct_AR24 _cameraIntrinsics;
	SCD_Struct_AR1 _transform;

}

@property (nonatomic,readonly) SCD_Struct_AR1 transform;                    //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) ARPointCloud * featurePoints;                //@synthesize featurePoints=_featurePoints - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR24 cameraIntrinsics;              //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
-(id)description;
-(SCD_Struct_AR1)transform;
-(SCD_Struct_AR24)cameraIntrinsics;
-(void)setCameraIntrinsics:(SCD_Struct_AR24)arg1 ;
-(ARPointCloud *)featurePoints;
-(id)initWithKeyframeData:(SCD_Struct_AR56*)arg1 featurePoints:(id)arg2 referenceOriginTransform:(SCD_Struct_AR1)arg3 ;
@end

