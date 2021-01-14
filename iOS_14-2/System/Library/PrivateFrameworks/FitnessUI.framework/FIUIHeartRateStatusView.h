/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSBundle, UIImageView, FIUIAnimatingSpriteImageView;

@interface FIUIHeartRateStatusView : UIView {

	NSString* _heartSpriteImageName;
	long long _heartSpriteImageFrameCount;
	long long _heartSpriteImageColumnCount;
	NSBundle* _resourceBundle;
	unsigned long long _state;
	double _beatsPerMinute;
	BOOL _delayedStartMeasuringAnimation;
	BOOL _isBeatingHeart;
	BOOL _animationsSuspended;
	UIImageView* _fullHeartImageView;
	FIUIAnimatingSpriteImageView* _animatingImageView;
	UIImageView* _reloadOutlineView;
	UIImageView* _reloadArrowView;

}

@property (nonatomic,retain) UIImageView * fullHeartImageView;                               //@synthesize fullHeartImageView=_fullHeartImageView - In the implementation block
@property (nonatomic,retain) FIUIAnimatingSpriteImageView * animatingImageView;              //@synthesize animatingImageView=_animatingImageView - In the implementation block
@property (nonatomic,retain) UIImageView * reloadOutlineView;                                //@synthesize reloadOutlineView=_reloadOutlineView - In the implementation block
@property (nonatomic,retain) UIImageView * reloadArrowView;                                  //@synthesize reloadArrowView=_reloadArrowView - In the implementation block
@property (assign,nonatomic) BOOL animationsSuspended;                                       //@synthesize animationsSuspended=_animationsSuspended - In the implementation block
-(void)_resumeAnimations;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setBeatsPerMinute:(double)arg1 ;
-(void)setFullHeartImageView:(UIImageView *)arg1 ;
-(UIImageView *)fullHeartImageView;
-(void)setAnimatingImageView:(FIUIAnimatingSpriteImageView *)arg1 ;
-(FIUIAnimatingSpriteImageView *)animatingImageView;
-(void)_suspendAnimations;
-(void)_startMeasuringAnimationAnimated:(BOOL)arg1 ;
-(void)_startBeatingHeart;
-(UIImageView *)reloadOutlineView;
-(UIImageView *)reloadArrowView;
-(void)setReloadOutlineView:(UIImageView *)arg1 ;
-(void)setReloadArrowView:(UIImageView *)arg1 ;
-(void)_beatFullHeartOnce;
-(void)_finishedHeartbeat;
-(id)_loadHeartMeasuringImage;
-(id)initWithFrame:(CGRect)arg1 heartFilledImageName:(id)arg2 heartSpriteImageName:(id)arg3 spriteFrameCount:(long long)arg4 spriteColumnCount:(long long)arg5 resourceBundle:(id)arg6 ;
-(void)setAnimationsSuspended:(BOOL)arg1 ;
-(void)setReloadHeartOutlineImage:(id)arg1 ;
-(void)setReloadArrowImage:(id)arg1 ;
-(void)unloadAnimationAssets;
-(BOOL)animationsSuspended;
@end

