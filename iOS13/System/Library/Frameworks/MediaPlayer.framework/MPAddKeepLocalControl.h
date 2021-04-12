/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)controlTitleFontForControlStatusType:(long long)arg1 ;
+(id)_newControlTitleLabel;
+(id)_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(CGSize)_expectedSizeForControlStatusType:(long long)arg1 controlTitle:(id)arg2 hasControlImage:(BOOL)arg3 displayScale:(double)arg4 preferredHeight:(double)arg5 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(long long)displayStyle;
-(void)setDisplayStyle:(long long)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(CGSize)maximumSizeWithPreferredHeight:(double)arg1 ;
-(void)setAllowsAddImage:(BOOL)arg1 ;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 ;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 animated:(BOOL)arg2 ;
-(void)setFilledTintColor:(UIColor *)arg1 ;
-(void)setTitle:(id)arg1 forControlStatusType:(long long)arg2 ;
-(id)titleForControlStatusType:(long long)arg1 ;
-(void)_beginTransientContentViewTransaction;
-(void)_endTransientContentViewTransaction;
-(id)_currentContentSuperview;
-(void)_updateControlTitleLabelVisualProperties;
-(void)_updateBackgroundViewCornerRadius;
-(void)_updateControlStatusProperties;
-(void)_updateControlImageViewAnimation;
-(BOOL)allowsAddImage;
-(MPAddKeepLocalControlStatus)controlStatus;
-(BOOL)scaleImageForAccessibility;
-(void)setScaleImageForAccessibility:(BOOL)arg1 ;
-(UIColor *)filledTintColor;
@end

