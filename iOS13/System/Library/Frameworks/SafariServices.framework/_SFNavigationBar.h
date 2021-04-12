/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_SFFluidProgressViewDelegate.h>
#import <libobjc.A.dylib/_SFNavigationBarURLButtonDelegate.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <libobjc.A.dylib/_UIClickInteractionDelegate.h>
#import <libobjc.A.dylib/_SFBarCommon.h>

@protocol _SFNavigationBarDelegate;
@class UIButton, UIView, _SFNavigationBarLabelsContainer, UILabel, UIVisualEffectView, UIImageView, _SFToolbar, SFToolbarContainer, SFNavigationBarMetrics, NSArray, _SFNavigationBarURLButton, _SFFluidProgressView, NSAttributedString, SFNavigationBarAccessoryButtonArrangement, SFNavigationBarToggleButton, _SFDimmingButton, _UIClickInteraction, NSTimer, SFDismissButton, _SFNavigationBarItem, _SFBarTheme, _SFNavigationBarTheme, UITextField, NSString, UIBlurEffect;

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UIClickInteractionDelegate, _SFBarCommon> {

	UIButton* _compressedBarButton;
	UIView* _controlsContainer;
	_SFNavigationBarLabelsContainer* _labelsContainer;
	UIView* _labelScalingContainer;
	UILabel* _URLLabel;
	UILabel* _expandedURLLabel;
	UILabel* _privateBrowsingLabel;
	UIVisualEffectView* _URLLabelEffectView;
	UIVisualEffectView* _lockEffectView;
	UIVisualEffectView* _squishedLockEffectView;
	UILabel* _readerAvailabilityLabel;
	UILabel* _notSecureAnnotationLabel;
	double _URLWidth;
	double _URLHeight;
	double _expandedURLWidth;
	double _expandedURLHeight;
	double _offsetOfURLInExpandedURL;
	UIView* _URLContainer;
	UIView* _URLContainerClipView;
	UIImageView* _URLFadeOut;
	UIView* _fakeTextFieldSelectionView;
	double _fakeSelectionStartOffset;
	double _fakeSelectionEndOffset;
	UIButton* _fakeClearButton;
	BOOL _usesLiftedAppearance;
	_SFToolbar* _leadingToolbar;
	_SFToolbar* _trailingToolbar;
	SFToolbarContainer* _leadingToolbarContainer;
	SFToolbarContainer* _trailingToolbarContainer;
	CGSize _cachedNotSecureAnnotationLabelFittingSize;
	UIView* _notSecureAnnotationContainer;
	BOOL _shouldAnimateURLMovement;
	SFNavigationBarMetrics* _barMetrics;
	UIImageView* _searchIndicator;
	UIImageView* _lockView;
	UIImageView* _squishedSearchIndicator;
	UIImageView* _squishedLockView;
	UIView* _squishedURLAccessoryItemsContainer;
	NSArray* _URLAccessoryItems;
	_SFNavigationBarURLButton* _URLOutline;
	_SFFluidProgressView* _progressView;
	UIVisualEffectView* _backdrop;
	UIView* _separator;
	BOOL _lockViewNeedsUpdate;
	NSAttributedString* _attributedTextWhenExpanded;
	SFNavigationBarAccessoryButtonArrangement* _accessoryButtonArrangement;
	SFNavigationBarToggleButton* _formatToggleButton;
	_SFDimmingButton* _stopButton;
	_SFDimmingButton* _reloadButton;
	_UIClickInteraction* _formatClickInteraction;
	UIButton* _mediaCaptureMuteButton;
	long long _visibleTrailingButtonType;
	BOOL _formatToggleButtonTapTogglesReader;
	UIButton* _cancelButton;
	double _cancelButtonIntrinsicWidth;
	NSTimer* _readerAvailabilityLabelHideTimer;
	/*^block*/id _readerAvailabilityAnimationBlock;
	SFDismissButton* _dismissButton;
	unsigned long long _inputMode;
	BOOL _usesNarrowLayout;
	BOOL _unifiedFieldShowsProgressView;
	BOOL _controlsHidden;
	BOOL _expanded;
	BOOL _backdropGroupDisabled;
	BOOL _suppressesBlur;
	BOOL _sendingBarMetricsChangeNotification;
	_SFNavigationBarItem* _item;
	_SFBarTheme* _theme;
	_SFNavigationBarTheme* _effectiveTheme;
	UITextField* _textField;
	NSString* _backdropGroupName;
	id<_SFNavigationBarDelegate> _delegate;
	double _contentUnderStatusBarHeight;
	double _maximumHeight;
	double _minimumBackdropHeight;
	UIView* _inputAccessoryView;
	UIBlurEffect* _backdropEffect;

}

@property (nonatomic,retain) _SFNavigationBarItem * item;                                                                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                                                                                //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (assign,nonatomic) BOOL unifiedFieldShowsProgressView;                                                                   //@synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView - In the implementation block
@property (nonatomic,retain) _SFBarTheme * theme;                                                                                  //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) _SFNavigationBarTheme * effectiveTheme;                                                             //@synthesize effectiveTheme=_effectiveTheme - In the implementation block
@property (assign,nonatomic) BOOL hasToolbar; 
@property (assign,getter=areControlsHidden,nonatomic) BOOL controlsHidden;                                                         //@synthesize controlsHidden=_controlsHidden - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                      //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                                                            //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) CGRect URLOutlineFrameInNavigationBarSpace; 
@property (assign,getter=isBackdropGroupDisabled,nonatomic) BOOL backdropGroupDisabled;                                            //@synthesize backdropGroupDisabled=_backdropGroupDisabled - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                                                           //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic,__weak) id<_SFNavigationBarDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double defaultHeight; 
@property (nonatomic,readonly) double minimumHeight; 
@property (getter=_controlsAlpha,nonatomic,readonly) double controlsAlpha; 
@property (assign,nonatomic) double contentUnderStatusBarHeight;                                                                   //@synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight - In the implementation block
@property (assign,nonatomic) BOOL suppressesBlur;                                                                                  //@synthesize suppressesBlur=_suppressesBlur - In the implementation block
@property (nonatomic,readonly) double visualHeight; 
@property (assign,nonatomic) double maximumHeight;                                                                                 //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) double minimumBackdropHeight;                                                                         //@synthesize minimumBackdropHeight=_minimumBackdropHeight - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                                                          //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,readonly) CGSize dismissButtonSize; 
@property (nonatomic,readonly) double dismissButtonPadding; 
@property (getter=isSendingBarMetricsChangeNotification,nonatomic,readonly) BOOL sendingBarMetricsChangeNotification;              //@synthesize sendingBarMetricsChangeNotification=_sendingBarMetricsChangeNotification - In the implementation block
@property (nonatomic,readonly) UIBlurEffect * backdropEffect;                                                                      //@synthesize backdropEffect=_backdropEffect - In the implementation block
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> formatMenuButtonPopoverSourceInfo; 
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> reloadButtonPopoverSourceInfo; 
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo; 
@property (nonatomic,copy,readonly) NSArray * popoverPassthroughViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)separatorHeight;
+(long long)_metricsCategory;
+(double)estimatedDefaultHeightForStatusBarHeight:(double)arg1 ;
+(double)estimatedMinimumHeightForStatusBarHeight:(double)arg1 ;
-(void)dealloc;
-(id<_SFNavigationBarDelegate>)delegate;
-(void)setDelegate:(id<_SFNavigationBarDelegate>)arg1 ;
-(_SFNavigationBarItem *)item;
-(void)setItem:(_SFNavigationBarItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)tintColorDidChange;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)_updateBackdropGroupName;
-(double)defaultHeight;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(double)minimumHeight;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(BOOL)isExpanded;
-(void)_updateText;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)clickInteractionDidClickDown:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(_SFBarTheme *)theme;
-(void)setTheme:(_SFBarTheme *)arg1 ;
-(void)_updateFonts;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_updateTextColor;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)fluidProgressViewWillShowProgress:(id)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(void)setContentUnderStatusBarHeight:(double)arg1 ;
-(void)setDismissButtonStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1 ;
-(void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1 ;
-(BOOL)navigationBarURLButton:(id)arg1 shouldShowMenuForGestureWithRecognizer:(id)arg2 ;
-(BOOL)navigationBarURLButtonShouldCopy:(id)arg1 ;
-(BOOL)navigationBarURLButtonShouldPaste:(id)arg1 ;
-(BOOL)navigationBarURLButton:(id)arg1 shouldAllowLongPressAtPoint:(CGPoint)arg2 ;
-(id)textForNavigationBarURLButton:(id)arg1 ;
-(void)clearEphemeralUI;
-(void)_updatePlaceholderText;
-(void)_updateShowsLockIcon;
-(void)_updateShowsSearchIndicator;
-(void)_updateAccessoryButtonsVisibility;
-(void)_updateMediaCaptureMuteButton;
-(void)_updateNavigationBarTrailingButtonType;
-(void)_updateLockIconHasEVCertificateTint;
-(void)_updateReaderButtonSelected;
-(void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3 ;
-(void)_updateNotSecureWarningsVisibility;
-(void)_updateProgressView;
-(BOOL)_shouldUpdateBackdropStyleForTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_updateEffectiveTheme;
-(void)_updateToolbarAndCancelButtonAlpha;
-(id)_editingLabelFont;
-(double)_editingScaleFactor;
-(void)_updateProgressViewCornerRadius;
-(void)_updateProgressViewFillColor;
-(id)_viewToInsertProgressBarIn;
-(double)_customButtonHorizontalPadding;
-(void)_didUpdateEffectiveTheme;
-(void)_updateSeparatorAlpha;
-(BOOL)hasToolbar;
-(void)_updateAccessoryButtonsArrangement;
-(id)_URLLabelFont;
-(void)_updateTextMetrics;
-(void)_updateFillColorForProgressView:(id)arg1 ;
-(void)_updateURLOutlineCornerRadius;
-(void)_updateActiveURLLabelAccessory;
-(void)_updateControlTints;
-(id)_attributedStringNotSecureAnnotation;
-(void)_barMetricsDidChange;
-(void)_URLTapped:(id)arg1 ;
-(id)newTextField;
-(id)_placeholderText;
-(id)_fadeOutImageWithSize:(CGSize)arg1 opaquePoint:(CGPoint)arg2 transparentPoint:(CGPoint)arg3 leftCapWidth:(double)arg4 topCapWidth:(double)arg5 ;
-(void)_mediaCaptureMuteButtonTapped:(id)arg1 ;
-(void)_reloadButtonPressed;
-(id)_dimmingButtonWithAction:(SEL)arg1 ;
-(void)_stopButtonPressed;
-(void)_configureNavigationBarTrailingButtonTintedImages;
-(void)_compressedBarTapped;
-(void)_dismissButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 inputMode:(unsigned long long)arg2 ;
-(double)_squishTransformFactor;
-(double)_controlsAlpha;
-(void)_formatToggleButtonTapped:(id)arg1 ;
-(void)_setUpFormatToggleButtonIfNeeded;
-(id)_navigationBarTrailingButtonWithType:(long long)arg1 ;
-(void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateBackdropFrame;
-(void)_updateLockViewIfNeeded;
-(double)_backgroundAlphaFactorForSquishTransformFactor:(double)arg1 ;
-(id)_viewForAccessoryButtonType:(long long)arg1 ;
-(double)_widthForAccessoryButtonType:(long long)arg1 ;
-(void)_updateAccessoryButtonsAlpha;
-(void)_updateTextFieldFrame;
-(double)placeholderHorizontalInset;
-(id)_lockImageTintColorForSquishTransformFactor:(double)arg1 ;
-(id)_searchIndicatorColorForSquishTransformFactor:(double)arg1 ;
-(double)_minimumXForLabelOfWidth:(double)arg1 centeredInOutlineOfWidth:(double)arg2 leftAlignedToMinimumX:(double)arg3 maximumX:(double)arg4 ;
-(double)_textFieldTopMargin;
-(void)_updateFakeViews;
-(void)_hideReaderAvailabilityLabelAnimated:(BOOL)arg1 ;
-(id)_hitTestCandidateViews;
-(void)_cancelDelayedReaderAvailabilityAnimation;
-(id)_expandedURLLabelParagraphStyle;
-(void)_updateSearchIndicator;
-(id)_notSecureAnnotationColor;
-(id)_notSecureGrayColor;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(void)_hideReaderAvailabilityLabelNow;
-(void)_hideReaderAvailabilityLabelSoon;
-(void)_adjustLabelRectForLeadingButtonWithDelay:(double)arg1 ;
-(id)_mediaCaptureMuteButtonColor;
-(void)setTextFieldPlaceHolderColor:(id)arg1 ;
-(id)_notSecureWarningColor;
-(id)_toolbarForBarItem:(long long)arg1 ;
-(void)animateSafariIconLinkFromPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)animateLinkImage:(CGImageRef)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(/*^block*/id)arg5 afterDestinationLayerBouncesBlock:(/*^block*/id)arg6 ;
-(id)popoverSourceInfoForBarItem:(long long)arg1 ;
-(BOOL)containsBarItem:(long long)arg1 ;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(void)setUnifiedFieldShowsProgressView:(BOOL)arg1 ;
-(void)setDismissButtonHidden:(BOOL)arg1 ;
-(CGSize)dismissButtonSize;
-(double)dismissButtonPadding;
-(double)visualHeight;
-(id)_newNavigationButtonWithImage:(id)arg1 insets:(UIEdgeInsets)arg2 action:(SEL)arg3 ;
-(void)setHasToolbar:(BOOL)arg1 ;
-(void)setControlsHidden:(BOOL)arg1 ;
-(void)setMinimumBackdropHeight:(double)arg1 ;
-(CGRect)URLOutlineFrameInNavigationBarSpace;
-(void)_updateReaderButtonAndAvailabilityTextVisibility;
-(void)setSuppressesBlur:(BOOL)arg1 ;
-(void)setBackdropGroupDisabled:(BOOL)arg1 ;
-(id)_EVCertLockAndTextColor:(double)arg1 ;
-(id)_tintForWarningImage;
-(id<_SFPopoverSourceInfo>)formatMenuButtonPopoverSourceInfo;
-(id<_SFPopoverSourceInfo>)reloadButtonPopoverSourceInfo;
-(id<_SFPopoverSourceInfo>)URLOutlinePopoverSourceInfo;
-(NSArray *)popoverPassthroughViews;
-(BOOL)usesNarrowLayout;
-(BOOL)unifiedFieldShowsProgressView;
-(_SFNavigationBarTheme *)effectiveTheme;
-(BOOL)areControlsHidden;
-(BOOL)isBackdropGroupDisabled;
-(double)contentUnderStatusBarHeight;
-(BOOL)suppressesBlur;
-(double)maximumHeight;
-(double)minimumBackdropHeight;
-(BOOL)isSendingBarMetricsChangeNotification;
-(UIBlurEffect *)backdropEffect;
@end

