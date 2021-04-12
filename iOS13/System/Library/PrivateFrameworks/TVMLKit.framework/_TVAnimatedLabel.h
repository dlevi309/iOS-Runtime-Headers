/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isPaused;
-(void)setText:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)setAttributedText:(id)arg1 ;
-(void)setNeedsDisplay;
-(BOOL)_isRTL;
-(void)setAnimating:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)setMarqueeDelay:(double)arg1 ;
-(double)marqueeDelay;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
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

