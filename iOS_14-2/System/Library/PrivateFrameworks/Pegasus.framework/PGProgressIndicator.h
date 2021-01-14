/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGMaterialView.h>

@class PGVibrantFillView, UIViewPropertyAnimator, UIColor;

@interface PGProgressIndicator : PGMaterialView {

	PGVibrantFillView* _elapsedTrack;
	PGVibrantFillView* _completeTrack;
	UIViewPropertyAnimator* _pulseAnimator;
	long long _pulseState;
	BOOL _includesWaitingToPlayIndicator;
	double _progress;
	UIColor* _customElapsedTrackTintColor;

}

@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * customElapsedTrackTintColor;              //@synthesize customElapsedTrackTintColor=_customElapsedTrackTintColor - In the implementation block
@property (assign,nonatomic) BOOL includesWaitingToPlayIndicator;                //@synthesize includesWaitingToPlayIndicator=_includesWaitingToPlayIndicator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_updateElapsedTrackTintColor;
-(void)_performLayout;
-(void)_updatePulseAnimatorIfNeeded;
-(UIColor *)customElapsedTrackTintColor;
-(BOOL)includesWaitingToPlayIndicator;
-(void)_transitionToPulseStateIfNeeded:(long long)arg1 ;
-(void)_applyPulseState;
-(void)setCustomElapsedTrackTintColor:(UIColor *)arg1 ;
-(void)setIncludesWaitingToPlayIndicator:(BOOL)arg1 ;
@end

