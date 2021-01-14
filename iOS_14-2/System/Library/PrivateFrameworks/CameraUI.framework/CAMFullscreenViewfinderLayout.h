/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMFullscreenViewfinderLayout : NSObject {

	double _screenScale;
	CGSize _shutterIntrinsicSize;
	CGRect _referenceBounds;
	UIEdgeInsets __safeAreaInsets;

}

@property (nonatomic,readonly) UIEdgeInsets _safeAreaInsets;              //@synthesize _safeAreaInsets=__safeAreaInsets - In the implementation block
@property (assign,nonatomic) double screenScale;                          //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) CGRect referenceBounds;                      //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (assign,nonatomic) CGSize shutterIntrinsicSize;                 //@synthesize shutterIntrinsicSize=_shutterIntrinsicSize - In the implementation block
-(CGRect)referenceBounds;
-(void)_updateSafeAreaInsets;
-(void)setReferenceBounds:(CGRect)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(UIEdgeInsets)_safeAreaInsets;
-(double)screenScale;
-(id)initWithReferenceBounds:(CGRect)arg1 shutterIntrinsicSize:(CGSize)arg2 ;
-(void)setShutterIntrinsicSize:(CGSize)arg1 ;
-(CGRect)frameForControlStatusBar;
-(CGRect)frameForBottomLeftControl:(id)arg1 ;
-(CGRect)frameForShutterControl:(id)arg1 ;
-(SCD_Struct_CA44)geometryForElapsedTimeView:(id)arg1 viewportFrame:(CGRect)arg2 orientation:(long long)arg3 ;
-(CGRect)viewportFrameForAspectRatio:(long long)arg1 usingAppDrawer:(BOOL)arg2 accessoryAreaExpanded:(BOOL)arg3 ;
-(CGRect)alignmentRectForShutterControl;
-(CGRect)frameForBottomRightControl:(id)arg1 ;
-(CGSize)viewportSizeForAspectRatio:(long long)arg1 ;
-(CGSize)shutterIntrinsicSize;
-(CGRect)viewportFrameForAspectRatio:(long long)arg1 accessoryAreaExpanded:(BOOL)arg2 ;
-(CGRect)frameForBottomControl:(id)arg1 betweenShutterAndLeftControl:(id)arg2 ;
-(CGRect)frameForBottomControl:(id)arg1 betweenShutterAndRightControl:(id)arg2 ;
@end

