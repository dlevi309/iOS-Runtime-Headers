/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARHitTestRaycasting : NSObject
+(id)hitTestFromOrigin:(id)arg1 resultType:(unsigned long long)arg2 origin:(SCD_Struct_AR1)arg3 ;
+(unsigned)fillPointCloud:(const SCD_Struct_AR1*)arg1 cloudFeatures:(id)arg2 vergenceAngleCosines:(const float*)arg3 cloudWorldPoints:(id)arg4 pointsWorld:(vector<CV3DHitTestPoint3D, std::__1::allocator<CV3DHitTestPoint3D> >*)arg5 covariancesWorld:(vector<CV3DHitTestCovariance3D, std::__1::allocator<CV3DHitTestCovariance3D> >*)arg6 cameraCalibration:(id)arg7 ;
+(id)convertHitTestResult:(const CV3DHitTestResult*)arg1 resultType:(unsigned long long)arg2 origin:(SCD_Struct_AR1)arg3 ;
@end

