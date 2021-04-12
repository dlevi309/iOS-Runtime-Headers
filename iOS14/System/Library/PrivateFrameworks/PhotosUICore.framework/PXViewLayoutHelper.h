/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol UICoordinateSpace;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXViewLayoutHelper : NSObject {

	CGRect _containerBounds;
	id<UICoordinateSpace> _coordinateSpace;
	CGAffineTransform _transform;
	CGAffineTransform _reverseTransform;

}
+(void)initialize;
+(void)performLayoutWithinView:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
+(long long)userInterfaceLayoutDirection;
-(id)init;
-(double)bottomOfView:(id)arg1 ;
-(double)horizontalCenterOfView:(id)arg1 ;
-(CGRect)_orientedFrameOfView:(id)arg1 ;
-(void)_setUpWithView:(id)arg1 ;
-(double)trailingOfView:(id)arg1 ;
-(void)_getFirstBaseline:(double*)arg1 lastBaseline:(double*)arg2 forView:(id)arg3 withSize:(CGSize)arg4 ;
-(void)_tearDown;
-(double)leadingOfView:(id)arg1 ;
-(double)lastBaselineOfView:(id)arg1 ;
-(id)_init;
-(void)layoutView:(id)arg1 withAttributes:(const SCD_Struct_PX96*)arg2 ;
-(double)topOfView:(id)arg1 ;
-(void)_setOrientedFrame:(CGRect)arg1 forView:(id)arg2 ;
-(double)verticalCenterOfView:(id)arg1 ;
-(double)firstBaselineOfView:(id)arg1 ;
@end

