/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <ProceduralWallpapers/BokehParallaxScene.h>

@class NSMutableArray;

@interface BokehScene : BokehParallaxScene {

	long long _circleBlendMode;
	long long _finalBlendMode;
	BOOL _enableTwoPassBlending;
	int _numCircles;
	NSMutableArray* blurCircles;
	NSMutableArray* colors;
	NSMutableArray* colorsFrequency;
	unsigned long long totalColorsFrequency;
	BOOL _isOn;
	BOOL isBlurredVersion;
	BOOL _needsFrameCallback;
	/*^block*/id _frameCallback;

}

@property (assign,nonatomic) long long circleBlendMode; 
@property (assign) BOOL isBlurredVersion; 
@property (copy) id frameCallback;                                   //@synthesize frameCallback=_frameCallback - In the implementation block
-(id)initWithSize:(CGSize)arg1 ;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)didEvaluateActions;
-(void)_setNeedsRender;
-(void)nudge;
-(id)averageColorForRect:(CGRect)arg1 ;
-(void)presimulateWallpaperAnimation;
-(BOOL)isBlurredVersion;
-(void)setIsBlurredVersion:(BOOL)arg1 ;
-(void)setCircleBlendMode:(long long)arg1 ;
-(long long)circleBlendMode;
-(void)transitionOut;
-(void)transitionInFromBlack;
-(void)transitionIn;
-(void)addBokehCircles;
-(void)reloadColors;
-(void)addRandomBokehCircle;
-(void)relocateBokehCircle:(id)arg1 ;
-(void)addBokehCircle:(CGPoint)arg1 parallax:(double)arg2 ;
-(id)flickerAction;
-(id)fadingAction;
-(id)wobbleAction;
-(id)frameCallback;
-(void)setFrameCallback:(id)arg1 ;
@end

