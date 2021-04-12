/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKBCacheableView.h>

@class NSString, UIKBTree, UIKBRenderConfig, UIKBRenderFactory, NSMutableDictionary, UIKeyboardMenuView;

@interface UIKBKeyView : UIView <UIKBCacheableView> {

	UIKBTree* m_keyplane;
	UIKBTree* m_key;
	CGRect m_drawFrame;
	CFBooleanRef m_allowsCaching;
	UIKBRenderConfig* m_renderConfig;
	UIKBRenderFactory* m_factory;
	NSMutableDictionary* _keyLayers;
	int _renderedKeyState;
	NSString* _cachedTraitsHashString;
	CGColorRef _activeBackgroundColor;
	id _activeCompositingFilter;
	BOOL _singleRerender;
	double _cachedBackgroundOpacity;
	BOOL _cachedControlKeyRenderingPreference;
	BOOL _renderAsMask;
	unsigned long long _cachedAnchorCorner;
	unsigned long long _cachedShiftState;
	long long _cachedSelector;
	UIKeyboardMenuView* _popupMenu;
	double _endingTransitionDuration;

}

@property (assign,nonatomic) BOOL renderAsMask;                                     //@synthesize renderAsMask=_renderAsMask - In the implementation block
@property (readonly) long long cachedRenderFlags; 
@property (nonatomic,readonly) UIEdgeInsets displayInsets; 
@property (nonatomic,retain) NSString * cachedTraitsHashString;                     //@synthesize cachedTraitsHashString=_cachedTraitsHashString - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAnchorCorner;                 //@synthesize cachedAnchorCorner=_cachedAnchorCorner - In the implementation block
@property (assign,nonatomic) unsigned long long cachedShiftState;                   //@synthesize cachedShiftState=_cachedShiftState - In the implementation block
@property (assign,nonatomic) long long cachedSelector;                              //@synthesize cachedSelector=_cachedSelector - In the implementation block
@property (assign,nonatomic) BOOL cachedControlKeyRenderingPreference;              //@synthesize cachedControlKeyRenderingPreference=_cachedControlKeyRenderingPreference - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyplane; 
@property (nonatomic,readonly) UIKBTree * key; 
@property (assign,nonatomic) CGRect drawFrame; 
@property (nonatomic,retain) UIKBRenderConfig * renderConfig; 
@property (nonatomic,retain) UIKBRenderFactory * factory; 
@property (assign,nonatomic) UIKeyboardMenuView * popupMenu;                        //@synthesize popupMenu=_popupMenu - In the implementation block
@property (nonatomic,readonly) CGRect variantFrame; 
@property (nonatomic,readonly) UIKBKeyView * contentsKeyView; 
@property (nonatomic,readonly) BOOL hasRendered; 
@property (assign,nonatomic) double endingTransitionDuration;                       //@synthesize endingTransitionDuration=_endingTransitionDuration - In the implementation block
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
-(UIKBTree *)key;
-(NSString *)cacheKey;
-(UIKBRenderFactory *)factory;
-(void)removeFromSuperview;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)displayLayer:(id)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)prepareForDisplay;
-(UIKBKeyView *)contentsKeyView;
-(void)setDrawFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(BOOL)_canDrawContent;
-(UIKBRenderConfig *)renderConfig;
-(int)textEffectsVisibilityLevel;
-(void)dimKeys:(id)arg1 ;
-(UIKBTree *)keyplane;
-(void)configureBackdropView:(id)arg1 forRenderConfig:(id)arg2 ;
-(BOOL)hasRendered;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(unsigned long long)focusableVariantCount;
-(id)layerForRenderFlags:(long long)arg1 ;
-(BOOL)_viewShouldBeOpaque;
-(CGRect)drawFrame;
-(long long)cachedRenderFlags;
-(BOOL)renderAsMask;
-(UIEdgeInsets)displayInsets;
-(long long)cachedSelector;
-(unsigned long long)cachedAnchorCorner;
-(unsigned long long)cachedShiftState;
-(BOOL)cachedControlKeyRenderingPreference;
-(BOOL)allowBackgroundCachingForRenderFlags:(long long)arg1 ;
-(NSString *)cachedTraitsHashString;
-(id)renderFlagsForTraits:(id)arg1 ;
-(BOOL)requiresSublayers;
-(BOOL)_shouldUpdateLayers;
-(void)setCachedTraitsHashString:(NSString *)arg1 ;
-(void)setCachedAnchorCorner:(unsigned long long)arg1 ;
-(void)setCachedShiftState:(unsigned long long)arg1 ;
-(void)setCachedSelector:(long long)arg1 ;
-(void)setCachedControlKeyRenderingPreference:(BOOL)arg1 ;
-(void)_populateLayer:(id)arg1 withContents:(id)arg2 ;
-(UIKeyboardMenuView *)popupMenu;
-(void)setRenderAsMask:(BOOL)arg1 ;
-(id)_generateBackdropMaskImage;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(BOOL)cacheDeferable;
-(double)cachedWidth;
-(BOOL)keepNonPersistent;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(CGRect)variantFrame;
-(void)_applyAppearanceInvocations;
-(id)subTreeHitTest:(CGPoint)arg1 ;
-(long long)didInputSubTree:(id)arg1 ;
-(void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideKeyCap:(BOOL)arg1 ;
-(long long)imageOrientationForLayer:(id)arg1 ;
-(void)changeBackgroundToEnabled;
-(void)changeBackgroundToActiveIfNecessary;
-(void)setFactory:(UIKBRenderFactory *)arg1 ;
-(void)setPopupMenu:(UIKeyboardMenuView *)arg1 ;
-(double)endingTransitionDuration;
-(void)setEndingTransitionDuration:(double)arg1 ;
@end

