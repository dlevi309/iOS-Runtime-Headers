/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldPause;
-(void)prepareForReuse;
-(void)setIsPulsating:(BOOL)arg1 ;
-(void)startPulsatingCircle;
-(void)setFadingOut:(BOOL)arg1 ;
-(void)_animateInNewCircle;
-(CGRect)superviewBounds;
-(double)randomOpacity;
-(void)_resumeAnimations;
-(void)_pauseAnimations;
-(void)setShouldPause:(BOOL)arg1 ;
-(BOOL)isPulsating;
-(void)_timerFired;
-(void)setSuperviewBounds:(CGRect)arg1 ;
-(BOOL)isFadingOut;
-(double)desiredOpacity;
-(CGPoint)desiredPositionDeltaForX:(double)arg1 y:(double)arg2 lockScreen:(BOOL)arg3 ;
-(void)setCircleColor:(long long)arg1 ;
-(void)setAnimationsEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 fillColor:(long long)arg2 ;
@end

