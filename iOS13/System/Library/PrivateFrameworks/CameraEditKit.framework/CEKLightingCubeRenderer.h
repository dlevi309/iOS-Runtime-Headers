/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


#import <CameraEditKit/CameraEditKit-Structs.h>
@class CEKLightingCube, CEKLightingCubeAppearance;

@interface CEKLightingCubeRenderer : NSObject {

	CEKLightingCube* _cube;
	CEKLightingCubeAppearance* _appearance;
	long long _components;

}
-(id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3 ;
-(void)renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5 ;
@end

