/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIActionSliderLabel, _UIActionSliderDelegate;
@class UIView, _UIBackdropView, _UIActionSliderKnob, UIImageView, UIPanGestureRecognizer, NSString, UIFont, _UIVibrantSettings, UIImage, UIColor, UILabel, UIBezierPath;

@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate> {

	UIView* _contentView;
	UIView* _trackDodgeView;
	UIView* _trackBackgroundView;
	_UIBackdropView* _trackBlurView;
	UIView* _trackSolidView;
	_UIActionSliderKnob* _knobView;
	UIImageView* _knobImageView;
	UIView*<_UIActionSliderLabel> _trackLabel;
	UIPanGestureRecognizer* _slideGestureRecognizer;
	CGPoint _slideGestureInitialPoint;
	double _knobPosition;
	double _trackWidthProportion;
	BOOL _showingTrackLabel;
	BOOL _animating;
	long long _style;
	long long _textStyle;
	NSString* _trackText;
	UIFont* _trackFont;
	double _trackTextBaselineFromBottom;
	id<_UIActionSliderDelegate> _delegate;
	double _knobWidth;
	double _cachedTrackMaskWidth;
	_UIVibrantSettings* _vibrantSettings;
	CGSize _knobImageOffset;
	CGSize _trackSize;
	UIEdgeInsets _knobInsets;

}

@property (assign,nonatomic) double trackWidthProportion;                                    //@synthesize trackWidthProportion=_trackWidthProportion - In the implementation block
@property (assign,getter=isShowingTrackLabel,nonatomic) BOOL showingTrackLabel;              //@synthesize showingTrackLabel=_showingTrackLabel - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                              //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double cachedTrackMaskWidth;                                    //@synthesize cachedTrackMaskWidth=_cachedTrackMaskWidth - In the implementation block
@property (getter=_knobView,nonatomic,readonly) UIView * knobView;                           //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) _UIVibrantSettings * vibrantSettings;                           //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (assign,nonatomic) long long style;                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long textStyle;                                            //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) UIImage * knobImage; 
@property (nonatomic,retain) UIColor * knobColor; 
@property (assign,nonatomic) CGSize knobImageOffset;                                         //@synthesize knobImageOffset=_knobImageOffset - In the implementation block
@property (nonatomic,copy) NSString * trackText;                                             //@synthesize trackText=_trackText - In the implementation block
@property (nonatomic,retain) UIFont * trackFont;                                             //@synthesize trackFont=_trackFont - In the implementation block
@property (assign,nonatomic) CGSize trackSize;                                               //@synthesize trackSize=_trackSize - In the implementation block
@property (assign,nonatomic) double trackTextBaselineFromBottom;                             //@synthesize trackTextBaselineFromBottom=_trackTextBaselineFromBottom - In the implementation block
@property (nonatomic,readonly) CGRect trackTextRect; 
@property (nonatomic,retain,readonly) UILabel * trackLabel; 
@property (nonatomic,readonly) UIPanGestureRecognizer * slideGestureRecognizer;              //@synthesize slideGestureRecognizer=_slideGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<_UIActionSliderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double knobPosition;                                            //@synthesize knobPosition=_knobPosition - In the implementation block
@property (assign,nonatomic) double knobWidth;                                               //@synthesize knobWidth=_knobWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets knobInsets;                                        //@synthesize knobInsets=_knobInsets - In the implementation block
@property (nonatomic,readonly) CGRect knobRect; 
@property (nonatomic,readonly) UIBezierPath * knobMaskPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(id<_UIActionSliderDelegate>)delegate;
-(void)setVibrantSettings:(_UIVibrantSettings *)arg1 ;
-(CGRect)knobRect;
-(void)didMoveToSuperview;
-(void)setTextStyle:(long long)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(double)_knobMinXInset;
-(double)_knobLeftMostX;
-(id)backgroundColor;
-(double)_knobVerticalInset;
-(double)_knobMaxXInset;
-(void)_makeTrackLabel;
-(void)_showTrackLabel;
-(void)setKnobPosition:(double)arg1 ;
-(void)_knobPanGesture:(id)arg1 ;
-(void)updateAllTrackMasks;
-(id)trackMaskImage;
-(void)_hideTrackLabel:(BOOL)arg1 ;
-(double)_knobAvailableX;
-(void)setDelegate:(id<_UIActionSliderDelegate>)arg1 ;
-(id)_knobView;
-(UIColor *)knobColor;
-(NSString *)trackText;
-(CGSize)trackSize;
-(double)knobWidth;
-(double)_knobMinX;
-(double)_knobMaxX;
-(UIFont *)trackFont;
-(UIImage *)knobImage;
-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2 ;
-(void)setCachedTrackMaskWidth:(double)arg1 ;
-(double)_knobHorizontalPosition;
-(void)_slideCompleted:(BOOL)arg1 ;
-(double)trackTextBaselineFromBottom;
-(void)setTrackWidthProportion:(double)arg1 ;
-(double)trackWidthProportion;
-(double)cachedTrackMaskWidth;
-(void)setMaskPath:(CGPathRef)arg1 onView:(id)arg2 ;
-(void)layoutSubviews;
-(void)setMaskFromImage:(id)arg1 onView:(id)arg2 ;
-(BOOL)isShowingTrackLabel;
-(void)setShowingTrackLabel:(BOOL)arg1 ;
-(UILabel *)trackLabel;
-(void)setKnobInsets:(UIEdgeInsets)arg1 ;
-(void)setKnobImageOffset:(CGSize)arg1 ;
-(BOOL)shouldHideTrackLabelForXPoint:(double)arg1 ;
-(BOOL)xPointIsWithinTrack:(double)arg1 ;
-(void)openTrackAnimated:(BOOL)arg1 ;
-(void)closeTrackAnimated:(BOOL)arg1 ;
-(void)setTrackTextBaselineFromBottom:(double)arg1 ;
-(long long)textStyle;
-(void)didMoveToWindow;
-(UIPanGestureRecognizer *)slideGestureRecognizer;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UIVibrantSettings *)vibrantSettings;
-(double)_knobWidth;
-(UIEdgeInsets)knobInsets;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)_trackFrame;
-(UIBezierPath *)knobMaskPath;
-(double)knobPosition;
-(void)setStyle:(long long)arg1 ;
-(void)setKnobColor:(UIColor *)arg1 ;
-(CGRect)trackTextRect;
-(id)trackMaskPath;
-(void)setKnobImage:(UIImage *)arg1 ;
-(void)setTrackText:(NSString *)arg1 ;
-(void)setTrackFont:(UIFont *)arg1 ;
-(void)setTrackSize:(CGSize)arg1 ;
-(void)setKnobWidth:(double)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isAnimating;
-(long long)style;
-(double)_knobRightMostX;
-(CGSize)knobImageOffset;
@end

