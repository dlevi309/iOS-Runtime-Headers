/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


#import <CameraEditKit/CameraEditKit-Structs.h>
@interface CEKLightingCube : NSObject {

	[8 _world];
	[6 _normals];
	CGPoint _screen[8];
	long long _points[8];
	long long _planes[6];

}
-(void)points:(CGPoint*)arg1 forOutlineWithSize:(CGSize)arg2 ;
-(void)points:(CGPoint*)arg1 forPlane:(long long)arg2 size:(CGSize)arg3 ;
-(id)initWithRotationAngle:(double)arg1 ;
-(const CGPathRef)pathForOutlineWithSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(const CGPathRef)centerShadowPathWithSize:(CGSize)arg1 width:(double)arg2 ;
-(const CGPathRef)centerPathWithSize:(CGSize)arg1 ;
-(const CGPathRef)pathForPlane:(long long)arg1 size:(CGSize)arg2 ;
-(double)intensityForPlane:(long long)arg1 ;
@end

