/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class NSArray, NSString, NSMutableArray, UIView, UILabel, NSTimer, MTVisualStylingProvider, MediaControlsExpandableButtonOption;

@interface MediaControlsExpandableButton : UIControl <MTVisualStylingProviderObservingPrivate, _UICursorInteractionDelegate> {

	BOOL _expanded;
	BOOL _animating;
	BOOL _toggleEnabled;
	BOOL _displayMessage;
	BOOL _resetTracking;
	NSArray* _options;
	long long _selectedOptionIndex;
	NSString* _title;
	long long _axis;
	NSMutableArray* _buttons;
	UIView* _backgroundView;
	UIView* _overlaySelectionView;
	UIView* _selectionView;
	UIView* _clippingView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _messageLabel;
	NSTimer* _messageTimer;
	MTVisualStylingProvider* _visualStylingProvider;
	CGSize _maximumExpandedSize;

}

@property (nonatomic,retain) NSMutableArray * buttons;                                            //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * overlaySelectionView;                                       //@synthesize overlaySelectionView=_overlaySelectionView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                              //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                                               //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSTimer * messageTimer;                                              //@synthesize messageTimer=_messageTimer - In the implementation block
@property (assign,nonatomic) BOOL toggleEnabled;                                                  //@synthesize toggleEnabled=_toggleEnabled - In the implementation block
@property (assign,nonatomic) BOOL displayMessage;                                                 //@synthesize displayMessage=_displayMessage - In the implementation block
@property (assign,nonatomic) BOOL resetTracking;                                                  //@synthesize resetTracking=_resetTracking - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                     //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (nonatomic,retain) NSArray * options;                                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MediaControlsExpandableButtonOption * selectedOption; 
@property (assign,nonatomic) long long selectedOptionIndex;                                       //@synthesize selectedOptionIndex=_selectedOptionIndex - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long axis;                                                      //@synthesize axis=_axis - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                     //@synthesize expanded=_expanded - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                   //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) CGSize maximumExpandedSize;                                          //@synthesize maximumExpandedSize=_maximumExpandedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_cursorInteractionEnabled;
-(UILabel *)titleLabel;
-(void)setAxis:(long long)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(long long)axis;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isExpanded;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(NSMutableArray *)buttons;
-(UIView *)backgroundView;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(NSArray *)options;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setOptions:(NSArray *)arg1 ;
-(void)setToggleEnabled:(BOOL)arg1 ;
-(UIView *)clippingView;
-(UILabel *)messageLabel;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(long long)selectedOptionIndex;
-(UIView *)selectionView;
-(void)_springAnimate:(/*^block*/id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isAnimating;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(BOOL)displayMessage;
-(void)setDisplayMessage:(BOOL)arg1 ;
-(void)didTapButton:(id)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_layoutLabels;
-(void)showMessage:(id)arg1 ;
-(MediaControlsExpandableButtonOption *)selectedOption;
-(CGSize)maximumExpandedSize;
-(void)setMaximumExpandedSize:(CGSize)arg1 ;
-(void)setSelectedOptionIndex:(long long)arg1 ;
-(NSTimer *)messageTimer;
-(id)initForControlCenter;
-(void)_layoutSelectionView;
-(void)_updateLabelVisualStyling;
-(long long)_buttonLayoutAxis;
-(void)_updateButtonsVisiblity;
-(void)_updateSelectionVisiblity;
-(void)_animateSelectedGlyphState;
-(void)_resetSelectionView;
-(UIView *)overlaySelectionView;
-(void)setOverlaySelectionView:(UIView *)arg1 ;
-(void)setMessageTimer:(NSTimer *)arg1 ;
-(BOOL)toggleEnabled;
-(BOOL)resetTracking;
-(void)setResetTracking:(BOOL)arg1 ;
@end

