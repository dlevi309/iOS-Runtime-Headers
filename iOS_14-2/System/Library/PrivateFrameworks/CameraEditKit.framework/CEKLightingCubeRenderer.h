/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

