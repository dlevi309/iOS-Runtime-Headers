/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVLabel.h>

@class CALayer, NSArray, __TVAnimatedImageView;

@interface _TVAnimatedLabel : _TVLabel {

	BOOL _crossfading;
	BOOL _marqueeNeeded;
	BOOL _marqueeing;
	BOOL _starting;
	BOOL _stopping;
	CALayer* _maskLayer;
	BOOL _animating;
	BOOL _paused;
	float _scrollRate;
	double _marqueeDelay;
	double _replicationPadding;
	double _maskCapWidth;
	double _crossfadeDuration;
	NSArray* _attributedStrings;
	unsigned long long _currentAttributedStringIndex;
	double _underPosterOutset;
	__TVAnimatedImageView* _currentMarqueeView;
	__TVAnimatedImageView* _nextMarqueeView;

}

@property (nonatomic,__weak,readonly) __TVAnimatedImageView * currentMarqueeView;              //@synthesize currentMarqueeView=_currentMarqueeView - In the implementation block
@property (nonatomic,__weak,readonly) __TVAnimatedImageView * nextMarqueeView;                 //@synthesize nextMarqueeView=_nextMarqueeView - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                      //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double marqueeDelay;                                              //@synthesize marqueeDelay=_marqueeDelay - In the implementation block
@property (assign,nonatomic) double replicationPadding;                                        //@synthesize replicationPadding=_replicationPadding - In the implementation block
@property (assign,nonatomic) double maskCapWidth;                                              //@synthesize maskCapWidth=_maskCapWidth - In the implementation block
@property (assign,nonatomic) float scrollRate;                                                 //@synthesize scrollRate=_scrollRate - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                                         //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (nonatomic,copy) NSArray * attributedStrings;                                        //@synthesize attributedStrings=_attributedStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long currentAttributedStringIndex;                //@synthesize currentAttributedStringIndex=_currentAttributedStringIndex - In the implementation block
@property (assign,nonatomic) double underPosterOutset;                                         //@synthesize underPosterOutset=_underPosterOutset - In the implementation block
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(double)marqueeDelay;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)_isRTL;
-(void)setNeedsDisplay;
-(void)setText:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setCrossfadeDuration:(double)arg1 ;
-(double)crossfadeDuration;
-(void)stopAnimating;
-(void)setMarqueeDelay:(double)arg1 ;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(BOOL)isAnimating;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_clearAnimations;
-(void)setAttributedStrings:(NSArray *)arg1 ;
-(__TVAnimatedImageView *)currentMarqueeView;
-(__TVAnimatedImageView *)nextMarqueeView;
-(id)_rasterizedTextWithMarquee:(BOOL)arg1 ;
-(void)_startMarqueeIfNeeded;
-(double)replicationPadding;
-(unsigned long long)currentAttributedStringIndex;
-(NSArray *)attributedStrings;
-(BOOL)_shouldCycle;
-(float)scrollRate;
-(void)_prepareNextMarqueeWithDelay:(double)arg1 ;
-(void)_clearAttributedStrings;
-(void)stopAnimatingWithoutResetWithDuration:(double)arg1 ;
-(void)stopAndResetScrollWithDuration:(double)arg1 ;
-(void)setReplicationPadding:(double)arg1 ;
-(double)maskCapWidth;
-(void)setMaskCapWidth:(double)arg1 ;
-(void)setScrollRate:(float)arg1 ;
-(double)underPosterOutset;
-(void)setUnderPosterOutset:(double)arg1 ;
@end

