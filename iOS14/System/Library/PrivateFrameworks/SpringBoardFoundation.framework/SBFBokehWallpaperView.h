/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UIImage* _cachedSnapshotImage;
	IOSurfaceRef _snapshotBuffer;
	UIImage* _cachedFolderBlurImage;
	BOOL _isOnLockScreen;
	BOOL _contentIsVisible;
	BOOL _hasSingleVariant;
	BOOL _blursNeedInvalidation;

}

@property (nonatomic,readonly) CAGradientLayer * layer; 
+(id)orangeGradient;
+(BOOL)_allowsParallax;
+(id)yellowGradient;
+(id)redGradient;
+(id)defaultGradient;
+(id)defaultGradientSilver;
+(id)silverGradient;
+(id)blueGradient;
+(id)purpleGradient;
+(Class)layerClass;
+(id)greenGradient;
-(void)_addBokehCircles:(long long)arg1 ;
-(void)_initDisplayLink;
-(CAGradientLayer *)layer;
-(long long)userInterfaceStyle;
-(void)_screenDidUpdate;
-(BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg1 ;
-(id)_folderBlurImage;
-(IOSurfaceRef)_createSnapshotBuffer;
-(void)_screenDimmed:(id)arg1 ;
-(void)_handleVariantChange;
-(BOOL)_lowPowerModeIsEnabled;
-(id)_computeAverageColor;
-(void)_screenUndimmed:(id)arg1 ;
-(BOOL)_thermalStateIsCritical;
-(void)_styleModeChanged:(id)arg1 ;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)_updateOrientationIfNeeded;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)cacheGroup;
-(long long)wallpaperType;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(id)_imageFromColor:(id)arg1 ;
-(id)_imageForBackdropParameters:(SCD_Struct_SB17)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3 ;
-(void)_thermalStateDidChange:(id)arg1 ;
-(id)snapshotImage;
-(void)_destroyDisplayLink;
-(void)_updateCircleFillColor;
-(void)_updateVariantStatus;
-(void)invalidate;
-(CGRect)newRectForCircle:(id)arg1 potentialX:(double)arg2 potentialY:(double)arg3 ;
-(void)_wallpaperDidChange:(id)arg1 ;
-(BOOL)_layerIsOutOfBounds:(id)arg1 ;
-(void)_correctGyroValues:(inout double*)arg1 y:(inout double*)arg2 ;
-(void)_toggleCircleAnimations:(BOOL)arg1 ;
-(void)_updateGradientAndFillColor;
-(void)dealloc;
@end

