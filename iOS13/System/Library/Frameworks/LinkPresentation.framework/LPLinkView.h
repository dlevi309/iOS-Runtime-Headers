/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/LPTapToLoadViewDelegate.h>
#import <libobjc.A.dylib/LPThemeClient.h>

@protocol LPLinkViewDelegate;
@class NSHashTable, LPLinkMetadata, NSArray, LPTheme, NSMutableArray, UIView, LPCaptionBarPresentationProperties, LPCaptionButtonPresentationProperties, NSString, LPImage, LPImagePresentationProperties, LPVideo, UIColor, LPInlineMediaPlaybackInformation, LPLinkViewComponents, LPAnimationMaskView, UIContextMenuInteraction, NSURL;

@interface LPLinkView : UIView <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, CAAnimationDelegate, LPTapToLoadViewDelegate, LPThemeClient> {

	unsigned _loggingID;
	NSHashTable* _pendingMetadataProviders;
	LPLinkMetadata* _metadata;
	NSArray* _multipleMetadata;
	NSArray* _multipleURLs;
	LPTheme* _theme;
	NSMutableArray* _tapGestureRecognizers;
	NSMutableArray* _highlightGestureRecognizers;
	UIView* _highlightView;
	BOOL _isPreliminary;
	long long _style;
	LPCaptionBarPresentationProperties* _captionBar;
	LPCaptionBarPresentationProperties* _mediaTopCaptionBar;
	LPCaptionBarPresentationProperties* _mediaBottomCaptionBar;
	LPCaptionButtonPresentationProperties* _captionButton;
	NSString* _quotedText;
	LPImage* _image;
	LPImagePresentationProperties* _imageProperties;
	NSArray* _alternateImages;
	LPVideo* _video;
	UIColor* _backgroundColor;
	UIColor* _overrideBackgroundColor;
	LPInlineMediaPlaybackInformation* _inlinePlaybackInformation;
	double _minimumHeight;
	LPLinkViewComponents* _components;
	LPLinkViewComponents* _componentsForSizing;
	UIView* _contentView;
	UIView* _animationView;
	LPAnimationMaskView* _animationMaskView;
	UIContextMenuInteraction* _contextMenuInteraction;
	BOOL _hasEverBuilt;
	BOOL _needsRebuild;
	BOOL _usesDeferredLayout;
	BOOL _shouldAnimateDuringNextBuild;
	BOOL _hasValidPresentationProperties;
	BOOL _hasSetDisableHighlightGesture;
	BOOL _hasSetDisablePreviewGesture;
	BOOL _mayReceiveAdditionalMetadata;
	BOOL _usesComputedPresentationProperties;
	BOOL _asynchronouslyLoadingMetadataFields;
	BOOL _metadataIsComplete;
	BOOL _disableAnimations;
	BOOL _needsMessagesTranscriptPushCounterAnimation;
	BOOL _disableTapGesture;
	BOOL _disableHighlightGesture;
	BOOL _disablePreviewGesture;
	BOOL _disableAutoPlay;
	BOOL _disablePlayback;
	BOOL _disablePlaybackControls;
	BOOL _allowsTapToLoad;
	BOOL _forceFlexibleWidth;
	BOOL _applyCornerRadius;
	long long _animationOrigin;
	unsigned long long _preferredSizeClass;
	NSString* _sourceBundleIdentifier;
	id<LPLinkViewDelegate> _delegate;
	NSURL* _URL;
	UIEdgeInsets _textSafeAreaInset;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<LPLinkViewDelegate> delegate;                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                                              //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                                                                            //@synthesize URL=_URL - In the implementation block
@property (assign,setter=_setDisableAnimations:,nonatomic) BOOL _disableAnimations;                                                                  //@synthesize disableAnimations=_disableAnimations - In the implementation block
@property (assign,setter=_setAnimationOrigin:,nonatomic) long long _animationOrigin;                                                                 //@synthesize animationOrigin=_animationOrigin - In the implementation block
@property (assign,setter=_setNeedsMessagesTranscriptPushCounterAnimation:,nonatomic) BOOL _needsMessagesTranscriptPushCounterAnimation;              //@synthesize needsMessagesTranscriptPushCounterAnimation=_needsMessagesTranscriptPushCounterAnimation - In the implementation block
@property (assign,setter=_setDisableTapGesture:,nonatomic) BOOL _disableTapGesture;                                                                  //@synthesize disableTapGesture=_disableTapGesture - In the implementation block
@property (assign,setter=_setDisableHighlightGesture:,nonatomic) BOOL _disableHighlightGesture;                                                      //@synthesize disableHighlightGesture=_disableHighlightGesture - In the implementation block
@property (assign,setter=_setDisablePreviewGesture:,nonatomic) BOOL _disablePreviewGesture;                                                          //@synthesize disablePreviewGesture=_disablePreviewGesture - In the implementation block
@property (assign,setter=_setDisablePlayback:,nonatomic) BOOL _disablePlayback;                                                                      //@synthesize disablePlayback=_disablePlayback - In the implementation block
@property (assign,setter=_setDisablePlaybackControls:,nonatomic) BOOL _disablePlaybackControls;                                                      //@synthesize disablePlaybackControls=_disablePlaybackControls - In the implementation block
@property (assign,setter=_setDisableAutoPlay:,nonatomic) BOOL _disableAutoPlay;                                                                      //@synthesize disableAutoPlay=_disableAutoPlay - In the implementation block
@property (assign,setter=_setAllowsTapToLoad:,nonatomic) BOOL _allowsTapToLoad;                                                                      //@synthesize allowsTapToLoad=_allowsTapToLoad - In the implementation block
@property (assign,setter=_setUsesDeferredLayout:,nonatomic) BOOL _usesDeferredLayout;                                                                //@synthesize usesDeferredLayout=_usesDeferredLayout - In the implementation block
@property (assign,setter=_setForceFlexibleWidth:,nonatomic) BOOL _forceFlexibleWidth;                                                                //@synthesize forceFlexibleWidth=_forceFlexibleWidth - In the implementation block
@property (assign,setter=_setApplyCornerRadius:,nonatomic) BOOL _applyCornerRadius;                                                                  //@synthesize applyCornerRadius=_applyCornerRadius - In the implementation block
@property (nonatomic,readonly) long long _style; 
@property (assign,setter=_setTextSafeAreaInset:,nonatomic) UIEdgeInsets _textSafeAreaInset;                                                          //@synthesize textSafeAreaInset=_textSafeAreaInset - In the implementation block
@property (assign,setter=_setPreferredSizeClass:,nonatomic) unsigned long long _preferredSizeClass;                                                  //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
@property (nonatomic,readonly) CGRect _primaryCaptionBarFrame; 
@property (setter=_setSourceBundleIdentifier:,nonatomic,retain) NSString * _sourceBundleIdentifier;                                                  //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) LPLinkMetadata * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id<LPLinkViewDelegate>)delegate;
-(void)setDelegate:(id<LPLinkViewDelegate>)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(long long)_style;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_didScroll;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_setMaskImage:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(void)_invalidateLayout;
-(id)_initWithMultipleMetadata:(id)arg1 ;
-(void)_setMultipleMetadata:(id)arg1 ;
-(id)_initWithMetadataLoadedFromURLs:(id)arg1 ;
-(void)_setDisableTapGesture:(BOOL)arg1 ;
-(void)_setDisableAnimations:(BOOL)arg1 ;
-(void)_setPreferredSizeClass:(unsigned long long)arg1 ;
-(void)_setAction:(/*^block*/id)arg1 withText:(id)arg2 ;
-(BOOL)_applyCornerRadius;
-(void)_tapRecognized:(id)arg1 ;
-(void)_fetchMetadata;
-(void)_setPresentationProperties:(id)arg1 ;
-(void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)_createCaptionBar;
-(void)_setAllowsTapToLoad:(BOOL)arg1 ;
-(BOOL)_allowsTapToLoad;
-(BOOL)_disablePlayback;
-(BOOL)_disablePlaybackControls;
-(BOOL)_disableAutoPlay;
-(long long)_animationOrigin;
-(void)themeParametersDidChange;
-(void)_commonInitWithURL:(id)arg1 ;
-(void)_configureWithoutLoadingMetadataFromURLs:(id)arg1 ;
-(id)_fetchMetadataForURL:(id)arg1 withSubresources:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 ;
-(void)_updateMetadataIsComplete;
-(void)_invalidatePresentationProperties;
-(void)_setMetadataInternal:(id)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(void)_layoutLinkView;
-(void)_computePresentationPropertiesFromMetadataIfNeeded;
-(CGSize)_layoutLinkViewForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(void)setSuppressMask:(BOOL)arg1 ;
-(id)_createMediaView;
-(id)_createMediaTopCaptionBarView;
-(id)_createMediaBottomCaptionBarView;
-(id)_createQuotedTextView;
-(void)animateOutAndRemoveViews;
-(void)_uninstallTapGestureRecognizers;
-(void)_uninstallHighlightGestureRecognizers;
-(BOOL)_shouldApplyCornerRadius;
-(BOOL)_shouldClipAnimationView;
-(id)_createComponents;
-(void)animateInViews;
-(void)animateBackgroundColor;
-(void)_rebuildGestureRecognizersIfNeeded;
-(void)_setupView;
-(BOOL)_shouldUseAnimations;
-(void)_rebuildSubviewsWithAnimation:(BOOL)arg1 ;
-(void)animateFromOldFrame:(CGRect)arg1 oldMediaBackgroundFrame:(CGRect)arg2 oldCaptionBarView:(id)arg3 ;
-(id)_createTapToLoadView;
-(id)_videoViewConfiguration;
-(void)_addHighlightRecognizerToView:(id)arg1 ;
-(void)_addTapRecognizerToView:(id)arg1 ;
-(BOOL)_disableHighlightGesture;
-(void)_installHighlightGestureRecognizers;
-(void)_installTapGestureRecognizers;
-(BOOL)_disablePreviewGesture;
-(void)_uninstallPreviewGestureRecognizer;
-(void)_installPreviewGestureRecognizer;
-(void)_highlightRecognized:(id)arg1 ;
-(void)_cancelActiveHighlight;
-(void)tapToLoadViewWasTapped:(id)arg1 ;
-(id)initWithMetadataLoadedFromURL:(id)arg1 ;
-(id)initWithPresentationProperties:(id)arg1 ;
-(void)_setApplyCornerRadius:(BOOL)arg1 ;
-(void)set_preferredSizeClass:(unsigned long long)arg1 ;
-(void)_setSourceBundleIdentifier:(id)arg1 ;
-(void)_setTextSafeAreaInset:(UIEdgeInsets)arg1 ;
-(void)_performDeferredLayout;
-(CGRect)_primaryCaptionBarFrame;
-(void)_setDisableHighlightGesture:(BOOL)arg1 ;
-(void)_setDisablePreviewGesture:(BOOL)arg1 ;
-(BOOL)_disableAnimations;
-(BOOL)_needsMessagesTranscriptPushCounterAnimation;
-(void)_setNeedsMessagesTranscriptPushCounterAnimation:(BOOL)arg1 ;
-(BOOL)_disableTapGesture;
-(void)_setDisableAutoPlay:(BOOL)arg1 ;
-(void)_setDisablePlayback:(BOOL)arg1 ;
-(void)_setDisablePlaybackControls:(BOOL)arg1 ;
-(void)_setAnimationOrigin:(long long)arg1 ;
-(BOOL)_usesDeferredLayout;
-(void)_setUsesDeferredLayout:(BOOL)arg1 ;
-(BOOL)_forceFlexibleWidth;
-(void)_setForceFlexibleWidth:(BOOL)arg1 ;
-(UIEdgeInsets)_textSafeAreaInset;
-(unsigned long long)_preferredSizeClass;
-(NSString *)_sourceBundleIdentifier;
@end

