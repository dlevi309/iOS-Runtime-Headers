/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBSplitImageView.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBTree, UIKBCacheToken, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, UIKBKeyView, NSMutableDictionary, NSTimer, UIKBRenderConfig, UIKBRenderingContext, UIKBRenderFactory, UIKBSplitImageView, UIView, NSString;

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
	NSTimer* _activatedTimer;
	BOOL _performingDeactivation;
	BOOL _shouldDrawRect;
	UIKBRenderConfig* _renderConfig;
	UIKBRenderingContext* _renderingContext;
	UIKBRenderFactory* _factory;
	UIKBSplitImageView* _keyBorders;
	UIKBSplitImageView* _keyBackgrounds;
	UIKBSplitImageView* _keyCaps;
	UIView* _keyplaneMaskView;

}

@property (nonatomic,retain) UIKBTree * keyplane;                                                //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * defaultKeyplane;                                         //@synthesize defaultKeyplane=_defaultKeyplane - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * cacheToken;                                        //@synthesize cacheToken=_cacheToken - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * defaultKeyplaneCacheToken;                         //@synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                    //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) UIKBRenderingContext * renderingContext;                            //@synthesize renderingContext=_renderingContext - In the implementation block
@property (nonatomic,retain) UIKBRenderFactory * factory;                                        //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) UIKBKeyViewAnimator * keyViewAnimator;                              //@synthesize keyViewAnimator=_keyViewAnimator - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiKeyDisplayController * emojiKeyManager;              //@synthesize emojiKeyManager=_emojiKeyManager - In the implementation block
@property (nonatomic,readonly) UIView * keyplaneMaskView;                                        //@synthesize keyplaneMaskView=_keyplaneMaskView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
-(void)dealloc;
-(NSString *)cacheKey;
-(UIKBRenderFactory *)factory;
-(void)removeFromSuperview;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)prepareForDisplay;
-(BOOL)_canDrawContent;
-(id)viewForKey:(id)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(void)dimKeys:(id)arg1 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(UIKBKeyViewAnimator *)keyViewAnimator;
-(UIKBTree *)keyplane;
-(UIKBRenderingContext *)renderingContext;
-(void)setRenderingContext:(UIKBRenderingContext *)arg1 ;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(BOOL)cacheDeferable;
-(double)cachedWidth;
-(BOOL)keepNonPersistent;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(long long)cacheDeferPriority;
-(void)setFactory:(UIKBRenderFactory *)arg1 ;
-(void)purgeKeyViews;
-(BOOL)isPasscodeStyle;
-(void)purgeFactory;
-(void)_generateFactoryIfNeeded;
-(void)_generateRenderingContextIfNeeded;
-(void)_updateKeyplaneMaskView;
-(UIKBCacheToken *)cacheToken;
-(UIKBCacheToken *)defaultKeyplaneCacheToken;
-(BOOL)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1 ;
-(UIKBTree *)defaultKeyplane;
-(unsigned long long)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(void)cancelDelayedDeactivation;
-(void)performDelayedDeactivation:(id)arg1 ;
-(void)scheduleDelayedDeactivation;
-(BOOL)_shouldAllowKey:(id)arg1 ;
-(void)removeKeyFromDelayedDeactivationSet:(id)arg1 ;
-(id)_existingVariantsKeyViewForKey:(id)arg1 ;
-(void)deactivateKey:(id)arg1 previousState:(int)arg2 ;
-(id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(BOOL*)arg3 ;
-(id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2 ;
-(BOOL)shouldAnimateInKeyView:(id)arg1 ;
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)shouldAnimateOutKeyView:(id)arg1 ;
-(void)deactivateKeys;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 ;
-(BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2 ;
-(void)addKeyToDelayedDeactivationSet:(id)arg1 ;
-(id)cacheIdentifierForKey:(id)arg1 ;
-(int)stateForKey:(id)arg1 ;
-(id)activeKeyViews;
-(void)updateFrameForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 state:(int)arg2 ;
-(void)deactivateAdaptiveKey:(id)arg1 ;
-(void)hideKeyCaps:(BOOL)arg1 ;
-(void)activateKeys;
-(void)purgeActiveKeyViews;
-(void)purgeSubviews;
-(void)purgeLayerContents;
-(UIView *)keyplaneMaskView;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(void)setDefaultKeyplane:(UIKBTree *)arg1 ;
-(void)setCacheToken:(UIKBCacheToken *)arg1 ;
-(void)setDefaultKeyplaneCacheToken:(UIKBCacheToken *)arg1 ;
-(void)setKeyViewAnimator:(UIKBKeyViewAnimator *)arg1 ;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController *)arg1 ;
@end

