/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UILegibilityView, _UILegibilityImageSet, NSString, UIStatusBarItem, UIStatusBarLayoutManager, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarItemView : UIView {

	double _currentOverlap;
	CGContextRef _imageContext;
	double _imageContextScale;
	_UILegibilityView* _legibilityView;
	_UILegibilityImageSet* _lastGeneratedTextImage;
	double _lastGeneratedTextImageLetterSpacing;
	NSString* _lastGeneratedTextImageText;
	BOOL _visible;
	BOOL _allowsUpdates;
	BOOL _shouldTintContentImage;
	UIStatusBarItem* _item;
	UIStatusBarLayoutManager* _layoutManager;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;

}

@property (nonatomic,readonly) UIStatusBarItem * item;                                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) UIStatusBarLayoutManager * layoutManager;                       //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;              //@synthesize foregroundStyle=_foregroundStyle - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL allowsUpdates;                                                    //@synthesize allowsUpdates=_allowsUpdates - In the implementation block
@property (nonatomic,readonly) BOOL shouldTintContentImage;                                         //@synthesize shouldTintContentImage=_shouldTintContentImage - In the implementation block
+(id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(void)setLayoutManager:(UIStatusBarLayoutManager *)arg1 ;
-(UIStatusBarItem *)item;
-(id)textFont;
-(id)foregroundView;
-(void)setVisible:(BOOL)arg1 ;
-(UIStatusBarLayoutManager *)layoutManager;
-(long long)textAlignment;
-(id)description;
-(long long)textStyle;
-(BOOL)isVisible;
-(double)legibilityStrength;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)allowsUserInteraction;
-(BOOL)_shouldReverseLayoutDirection;
-(double)standardPadding;
-(double)shadowPadding;
-(long long)legibilityStyle;
-(UIStatusBarForegroundStyleAttributes *)foregroundStyle;
-(void)endDisablingRasterization;
-(void)beginDisablingRasterization;
-(double)adjustFrameToNewSize:(double)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(double)neededSizeForImageSet:(id)arg1 ;
-(id)imageWithShadowNamed:(id)arg1 ;
-(id)contentsImage;
-(void)setContentMode:(long long)arg1 ;
-(void)beginImageContextWithMinimumWidth:(double)arg1 ;
-(id)imageFromImageContextClippedToWidth:(double)arg1 ;
-(void)endImageContext;
-(double)extraRightPadding;
-(id)imageWithText:(id)arg1 ;
-(BOOL)animatesDataChange;
-(double)extraLeftPadding;
-(void)performPendedActions;
-(id)accessibilityHUDRepresentation;
-(void)updateForNewStyle:(id)arg1 ;
-(double)maximumOverlap;
-(void)setVisible:(BOOL)arg1 settingAlpha:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4 ;
-(void)setAllowsUpdates:(BOOL)arg1 ;
-(BOOL)allowsUpdates;
-(void)_tintContentLayerIfNeeded;
-(BOOL)shouldTintContentImage;
-(void)setLayerContentsImage:(id)arg1 ;
-(id)contentsIOSurface;
-(id)imageWithText:(id)arg1 shouldCache:(BOOL)arg2 ;
-(void)setCurrentOverlap:(double)arg1 ;
-(double)currentLeftOverlap;
-(double)currentOverlap;
-(double)currentRightOverlap;
-(double)setStatusBarData:(id)arg1 actions:(int)arg2 ;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(void)clearCachedTextImage;
-(id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3 ;
@end

