/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImage, UIImageView, UIView, CAShapeLayer;

@interface ADCountdownButton : UIControl {

	BOOL _dimmed;
	UIImage* _iconImage;
	UIImage* _dimmedIconImage;
	UIImageView* _backgroundView;
	UIImageView* _iconView;
	UIView* _outlineView;
	CAShapeLayer* _outlineProgressLayer;

}

@property (nonatomic,retain) UIImage * iconImage;                              //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * dimmedIconImage;                        //@synthesize dimmedIconImage=_dimmedIconImage - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundView;                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIView * outlineView;                             //@synthesize outlineView=_outlineView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outlineProgressLayer;              //@synthesize outlineProgressLayer=_outlineProgressLayer - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                      //@synthesize dimmed=_dimmed - In the implementation block
+(id)_closeBoxImage;
+(id)_inactiveCloseBoxImage;
-(BOOL)dimmed;
-(CGSize)intrinsicContentSize;
-(id)init;
-(BOOL)isAccessibilityElement;
-(UIImage *)iconImage;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)accessibilityTraits;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDimmedIconImage:(UIImage *)arg1 ;
-(void)setOutlineView:(UIView *)arg1 ;
-(UIView *)outlineView;
-(void)setOutlineProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outlineProgressLayer;
-(void)setCountdownProgress:(double)arg1 ;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImage *)dimmedIconImage;
-(double)countdownProgress;
@end

