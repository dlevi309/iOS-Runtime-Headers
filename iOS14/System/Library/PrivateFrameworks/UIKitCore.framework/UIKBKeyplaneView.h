/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBSplitImageView.h>
#import <UIKit/UIKBCacheableView.h>

@protocol UIKBKeyplaneViewDelegate;
@class UIKBTree, UIKBCacheToken, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, UIKBKeyView, NSMutableDictionary, UIKBRenderConfig, UIKBRenderingContext, UIKBRenderFactory, UIKBSplitImageView, UIView, UIKBScreenTraits, NSString;

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {

	UIKBTree* _keyplane;
	UIKBTree* _defaultKeyplane;
	UIKBCacheToken* _cacheToken;
	UIKBCacheToken* _defaultKeyplaneCacheToken;
	UIKBKeyViewAnimator* _keyViewAnimator;
	UIKeyboardEmojiKeyDisplayController* _emojiKeyManager;
	UIKBKeyView* _candidateGapView;
	NSMutableDictionary* _subviewIndex;
	NSMutableDictionary* _activeViewIndex;
	NSMutableDictionary* _renderedKeyViews;
	NSMutableDictionary* _delayedDeactivationKeys;
	BOOL _shouldDrawRect;
	UIKBRenderConfig* _renderConfig;
	UIKBRenderingContext* _renderingContext;
	UIKBRenderFactory* _factory;
	UIKBSplitImageView* _keyBorders;
	UIKBSplitImageView* _keyBackgrounds;
	UIKBSplitImageView* _keyCaps;
	UIView* _keyplaneMaskView;
	BOOL _suppressDrawing;
	UIKBScreenTraits* _overrideScreenTraits;
	id<UIKBKeyplaneViewDelegate> _delegate;

}

@property (assign,nonatomic) id<UIKBKeyplaneViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                                                //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * defaultKeyplane;                                         //@synthesize defaultKeyplane=_defaultKeyplane - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * cacheToken;                                        //@synthesize cacheToken=_cacheToken - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * defaultKeyplaneCacheToken;                         //@synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                    //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) UIKBRenderingContext * renderingContext;                            //@synthesize renderingContext=_renderingContext - In the implementation block
@property (nonatomic,retain) UIKBRenderFactory * factory;                                        //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) UIKBKeyViewAnimator * keyViewAnimator;                              //@synthesize keyViewAnimator=_keyViewAnimator - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiKeyDisplayController * emojiKeyManager;              //@synthesize emojiKeyManager=_emojiKeyManager - In the implementation block
@property (nonatomic,retain) UIKBScreenTraits * overrideScreenTraits;                            //@synthesize overrideScreenTraits=_overrideScreenTraits - In the implementation block
@property (assign,nonatomic) BOOL suppressDrawing;                                               //@synthesize suppressDrawing=_suppressDrawing - In the implementation block
@property (nonatomic,readonly) UIView * keyplaneMaskView;                                        //@synthesize keyplaneMaskView=_keyplaneMaskView - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long assetIdiom; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)cacheDeferable;
-(void)dimKeys:(id)arg1 ;
-(BOOL)keepNonPersistent;
-(NSString *)cacheKey;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(void)_generateRenderingContextIfNeeded;
-(void)prepareForDisplay;
-(double)cachedWidth;
-(void)setOverrideScreenTraits:(UIKBScreenTraits *)arg1 ;
-(long long)assetIdiom;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(long long)cacheDeferPriority;
-(UIKBScreenTraits *)overrideScreenTraits;
-(id)viewForKey:(id)arg1 ;
-(UIView *)keyplaneMaskView;
-(void)removeFromSuperview;
-(BOOL)shouldAnimateInKeyView:(id)arg1 ;
-(id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2 ;
-(UIKBTree *)defaultKeyplane;
-(id<UIKBKeyplaneViewDelegate>)delegate;
-(BOOL)_canDrawContent;
-(id)activeKeyViews;
-(void)setRenderingContext:(UIKBRenderingContext *)arg1 ;
-(void)_updateKeyplaneMaskView;
-(id)cacheIdentifierForKey:(id)arg1 ;
-(BOOL)shouldAnimateOutKeyView:(id)arg1 ;
-(void)activateKeys;
-(void)updateFrameForKey:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)deactivateKeys;
-(UIKBTree *)keyplane;
-(BOOL)isPasscodeStyle;
-(BOOL)suppressDrawing;
-(id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(BOOL*)arg3 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(UIKBRenderConfig *)renderConfig;
-(UIKBRenderFactory *)factory;
-(void)setDelegate:(id<UIKBKeyplaneViewDelegate>)arg1 ;
-(void)purgeLayerContents;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)layoutSubviews;
-(void)setCacheToken:(UIKBCacheToken *)arg1 ;
-(void)purgeFactory;
-(UIKBRenderingContext *)renderingContext;
-(void)purgeSubviews;
-(void)deactivateAdaptiveKey:(id)arg1 ;
-(void)cancelDelayedDeactivation;
-(void)purgeActiveKeyViews;
-(void)removeKeyFromDelayedDeactivationSet:(id)arg1 ;
-(void)_generateFactoryIfNeeded;
-(BOOL)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1 ;
-(void)purgeKeyViews;
-(UIKBKeyViewAnimator *)keyViewAnimator;
-(void)addKeyToDelayedDeactivationSet:(id)arg1 ;
-(id)viewForKey:(id)arg1 state:(int)arg2 ;
-(void)setDefaultKeyplaneCacheToken:(UIKBCacheToken *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)_existingVariantsKeyViewForKey:(id)arg1 ;
-(void)deactivateKey:(id)arg1 previousState:(int)arg2 ;
-(void)displayLayer:(id)arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(CGRect)_safeFrameForKeyViewFrame:(CGRect)arg1 inContainer:(id)arg2 forKey:(id)arg3 ;
-(void)hideKeyCaps:(BOOL)arg1 ;
-(BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2 ;
-(void)setFactory:(UIKBRenderFactory *)arg1 ;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(unsigned long long)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setSuppressDrawing:(BOOL)arg1 ;
-(UIKBCacheToken *)defaultKeyplaneCacheToken;
-(void)setDefaultKeyplane:(UIKBTree *)arg1 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)_shouldAllowKey:(id)arg1 ;
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController *)arg1 ;
-(int)stateForKey:(id)arg1 ;
-(void)setKeyViewAnimator:(UIKBKeyViewAnimator *)arg1 ;
-(void)dealloc;
-(UIKBCacheToken *)cacheToken;
@end

