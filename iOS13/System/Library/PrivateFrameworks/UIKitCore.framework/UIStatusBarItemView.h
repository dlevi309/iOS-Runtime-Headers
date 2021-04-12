/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(UIStatusBarItem *)item;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(UIStatusBarLayoutManager *)layoutManager;
-(void)setLayoutManager:(UIStatusBarLayoutManager *)arg1 ;
-(long long)textStyle;
-(void)setContentMode:(long long)arg1 ;
-(id)accessibilityHUDRepresentation;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)_shouldReverseLayoutDirection;
-(void)willMoveToWindow:(id)arg1 ;
-(long long)textAlignment;
-(BOOL)allowsUserInteraction;
-(double)standardPadding;
-(long long)legibilityStyle;
-(double)shadowPadding;
-(UIStatusBarForegroundStyleAttributes *)foregroundStyle;
-(void)beginDisablingRasterization;
-(void)endDisablingRasterization;
-(double)adjustFrameToNewSize:(double)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)contentsImage;
-(double)neededSizeForImageSet:(id)arg1 ;
-(id)imageWithShadowNamed:(id)arg1 ;
-(void)beginImageContextWithMinimumWidth:(double)arg1 ;
-(id)imageFromImageContextClippedToWidth:(double)arg1 ;
-(void)endImageContext;
-(double)extraRightPadding;
-(double)legibilityStrength;
-(id)imageWithText:(id)arg1 ;
-(BOOL)animatesDataChange;
-(double)extraLeftPadding;
-(void)performPendedActions;
-(id)foregroundView;
-(void)updateForNewStyle:(id)arg1 ;
-(double)maximumOverlap;
-(id)textFont;
-(void)setVisible:(BOOL)arg1 settingAlpha:(BOOL)arg2 ;
-(id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4 ;
-(void)setAllowsUpdates:(BOOL)arg1 ;
-(BOOL)allowsUpdates;
-(void)_tintContentLayerIfNeeded;
-(BOOL)shouldTintContentImage;
-(void)setLayerContentsImage:(id)arg1 ;
-(id)contentsIOSurface;
-(id)imageWithText:(id)arg1 shouldCache:(BOOL)arg2 ;
-(void)setCurrentOverlap:(double)arg1 ;
-(double)currentOverlap;
-(double)currentLeftOverlap;
-(double)currentRightOverlap;
-(double)setStatusBarData:(id)arg1 actions:(int)arg2 ;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3 ;
-(void)clearCachedTextImage;
@end

