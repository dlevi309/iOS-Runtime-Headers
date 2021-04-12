/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSTimer;

@interface SBFBokehWallpaperCircle : CALayer {

	NSTimer* _lifetimeTimer;
	long long _fillColor;
	BOOL _shouldBlink;
	BOOL _isFading;
	long long _direction;
	double _velocity;
	CGRect _originalFrame;
	BOOL _fadingOut;
	BOOL _shouldPause;
	BOOL _isPulsating;
	CGRect _superviewBounds;

}

@property (assign,getter=isFadingOut,nonatomic) BOOL fadingOut;              //@synthesize fadingOut=_fadingOut - In the implementation block
@property (assign,nonatomic) CGRect superviewBounds;                         //@synthesize superviewBounds=_superviewBounds - In the implementation block
@property (assign,nonatomic) BOOL shouldPause;                               //@synthesize shouldPause=_shouldPause - In the implementation block
@property (assign,nonatomic) BOOL isPulsating;                               //@synthesize isPulsating=_isPulsating - In the implementation block
-(void)prepareForReuse;
-(void)setAnimationsEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 fillColor:(long long)arg2 ;
-(void)_timerFired;
-(BOOL)shouldPause;
-(void)setShouldPause:(BOOL)arg1 ;
-(void)setSuperviewBounds:(CGRect)arg1 ;
-(BOOL)isFadingOut;
-(double)desiredOpacity;
-(CGPoint)desiredPositionDeltaForX:(double)arg1 y:(double)arg2 lockScreen:(BOOL)arg3 ;
-(void)setCircleColor:(long long)arg1 ;
-(void)startPulsatingCircle;
-(void)setIsPulsating:(BOOL)arg1 ;
-(void)setFadingOut:(BOOL)arg1 ;
-(void)_animateInNewCircle;
-(CGRect)superviewBounds;
-(double)randomOpacity;
-(void)_resumeAnimations;
-(void)_pauseAnimations;
-(BOOL)isPulsating;
@end

