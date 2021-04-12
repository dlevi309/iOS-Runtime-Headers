/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol SCNBoundingVolume <NSObject>
@required
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2;

@end

