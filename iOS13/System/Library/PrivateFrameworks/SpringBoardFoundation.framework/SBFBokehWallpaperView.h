/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class CADisplayLink, SBFMotionManager, NSMutableArray, NSDictionary, UIImage, CAGradientLayer;

@interface SBFBokehWallpaperView : SBFWallpaperView {

	CADisplayLink* _displayLink;
	SBFMotionManager* _motionManager;
	NSMutableArray* _circleArray;
	NSDictionary* _options;
	long long _circleFillColor;
	unsigned long long _blurFrameCount;
	UIImage* _cachedSnapshotImage;
	IOSurfaceRef _snapshotBuffer;
	UIImage* _cachedFolderBlurImage;
	BOOL _isOnLockScreen;
	BOOL _contentIsVisible;
	BOOL _hasSingleVariant;

}

@property (nonatomic,readonly) CAGradientLayer * layer; 
+(Class)layerClass;
+(id)defaultGradientSilver;
+(id)defaultGradient;
+(id)blueGradient;
+(id)greenGradient;
+(id)yellowGradient;
+(id)redGradient;
+(id)silverGradient;
+(BOOL)_allowsParallax;
+(id)purpleGradient;
+(id)orangeGradient;
-(void)dealloc;
-(void)invalidate;
-(CAGradientLayer *)layer;
-(long long)userInterfaceStyle;
-(id)cacheGroup;
-(void)_thermalStateDidChange:(id)arg1 ;
-(long long)wallpaperType;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)_computeAverageColor;
-(id)snapshotImage;
-(void)_screenDidUpdate;
-(IOSurfaceRef)_createSnapshotBuffer;
-(void)_handleVariantChange;
-(void)_screenDimmed:(id)arg1 ;
-(void)_screenUndimmed:(id)arg1 ;
-(void)_wallpaperDidChange:(id)arg1 ;
-(void)_updateGradientAndFillColor;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)_addBokehCircles:(long long)arg1 ;
-(BOOL)_lowPowerModeIsEnabled;
-(BOOL)_thermalStateIsCritical;
-(void)_toggleCircleAnimations:(BOOL)arg1 ;
-(void)_initDisplayLink;
-(void)_destroyDisplayLink;
-(void)_updateVariantStatus;
-(void)_correctGyroValues:(inout double*)arg1 y:(inout double*)arg2 ;
-(void)_updateOrientationIfNeeded;
-(BOOL)_layerIsOutOfBounds:(id)arg1 ;
-(CGRect)newRectForCircle:(id)arg1 potentialX:(double)arg2 potentialY:(double)arg3 ;
-(void)_updateSnapshotImageIfNeeded;
-(void)_updateCircleFillColor;
-(id)_imageFromColor:(id)arg1 ;
-(id)_folderBlurImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB17)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3 ;
-(void)_styleModeChanged:(id)arg1 ;
-(BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg1 ;
@end

