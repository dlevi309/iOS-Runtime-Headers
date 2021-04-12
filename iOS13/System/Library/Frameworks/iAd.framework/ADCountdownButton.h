/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(UIImageView *)backgroundView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
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

