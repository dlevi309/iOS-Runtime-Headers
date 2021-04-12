/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIView, UIImageView, NSMutableDictionary, MPDownloadProgressView, UIColor;

@interface MPAddKeepLocalControl : UIControl {

	UILabel* _controlTitleLabel;
	UIView* _backgroundView;
	UIImageView* _controlImageView;
	NSMutableDictionary* _controlStatusTypeToTitle;
	long long _controlStatusRevision;
	MPDownloadProgressView* _downloadProgressView;
	BOOL _hadFirstTouchHighlight;
	UIEdgeInsets _controlImageEdgeInsets;
	UIView* _transientContentView;
	long long _transientContentViewTransactionCount;
	BOOL _traitCollectionDidChangeWasCalled;
	BOOL _allowsAddImage;
	BOOL _scaleImageForAccessibility;
	long long _displayStyle;
	UIColor* _filledTintColor;
	MPAddKeepLocalControlStatus _controlStatus;

}

@property (assign,nonatomic) BOOL allowsAddImage;                                    //@synthesize allowsAddImage=_allowsAddImage - In the implementation block
@property (assign,nonatomic) MPAddKeepLocalControlStatus controlStatus;              //@synthesize controlStatus=_controlStatus - In the implementation block
@property (assign,nonatomic) long long displayStyle;                                 //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,nonatomic) BOOL scaleImageForAccessibility;                        //@synthesize scaleImageForAccessibility=_scaleImageForAccessibility - In the implementation block
@property (nonatomic,retain) UIColor * filledTintColor;                              //@synthesize filledTintColor=_filledTintColor - In the implementation block
+(id)_newControlTitleLabel;
+(id)controlTitleFontForControlStatusType:(long long)arg1 ;
+(id)_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(CGSize)_expectedSizeForControlStatusType:(long long)arg1 controlTitle:(id)arg2 hasControlImage:(BOOL)arg3 displayScale:(double)arg4 preferredHeight:(double)arg5 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(MPAddKeepLocalControlStatus)controlStatus;
-(CGSize)maximumSizeWithPreferredHeight:(double)arg1 ;
-(void)setAllowsAddImage:(BOOL)arg1 ;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 ;
-(BOOL)allowsAddImage;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 animated:(BOOL)arg2 ;
-(void)setFilledTintColor:(UIColor *)arg1 ;
-(void)setTitle:(id)arg1 forControlStatusType:(long long)arg2 ;
-(UIColor *)filledTintColor;
-(id)titleForControlStatusType:(long long)arg1 ;
-(void)_beginTransientContentViewTransaction;
-(id)_currentContentSuperview;
-(void)_endTransientContentViewTransaction;
-(void)_updateControlTitleLabelVisualProperties;
-(void)_updateBackgroundViewCornerRadius;
-(void)_updateControlStatusProperties;
-(void)_updateControlImageViewAnimation;
-(BOOL)scaleImageForAccessibility;
-(void)setScaleImageForAccessibility:(BOOL)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDisplayStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(long long)displayStyle;
-(void)setHighlighted:(BOOL)arg1 ;
@end

