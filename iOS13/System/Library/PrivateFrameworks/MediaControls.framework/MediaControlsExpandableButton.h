/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class NSArray, NSString, NSMutableArray, UIView, UILabel, NSTimer, MTVisualStylingProvider, MediaControlsExpandableButtonOption;

@interface MediaControlsExpandableButton : UIControl <MTVisualStylingProviderObservingPrivate, _UICursorInteractionDelegate> {

	BOOL _expanded;
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
@property (assign,nonatomic) CGSize maximumExpandedSize;                                          //@synthesize maximumExpandedSize=_maximumExpandedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_cursorInteractionEnabled;
-(NSArray *)options;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(long long)axis;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UIView *)backgroundView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAxis:(long long)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)selectionView;
-(BOOL)isExpanded;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)_layoutLabels;
-(BOOL)displayMessage;
-(void)setDisplayMessage:(BOOL)arg1 ;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buttons;
-(long long)selectedOptionIndex;
-(void)_contentSizeCategoryDidChange;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(void)setToggleEnabled:(BOOL)arg1 ;
-(CGSize)maximumExpandedSize;
-(void)setMaximumExpandedSize:(CGSize)arg1 ;
-(MediaControlsExpandableButtonOption *)selectedOption;
-(void)didTapButton:(id)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(id)initForControlCenter;
-(void)_springAnimate:(/*^block*/id)arg1 ;
-(void)setSelectedOptionIndex:(long long)arg1 ;
-(void)showMessage:(id)arg1 ;
-(void)_layoutSelectionView;
-(void)_updateLabelVisualStyling;
-(long long)_buttonLayoutAxis;
-(void)_updateButtonsVisiblity;
-(void)_updateSelectionVisiblity;
-(void)_animateSelectedGlyphState;
-(void)_resetSelectionView;
-(UIView *)overlaySelectionView;
-(void)setOverlaySelectionView:(UIView *)arg1 ;
-(NSTimer *)messageTimer;
-(void)setMessageTimer:(NSTimer *)arg1 ;
-(BOOL)toggleEnabled;
-(BOOL)resetTracking;
-(void)setResetTracking:(BOOL)arg1 ;
@end

