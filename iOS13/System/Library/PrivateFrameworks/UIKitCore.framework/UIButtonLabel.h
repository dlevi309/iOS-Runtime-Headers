/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIButton, NSDictionary;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;
	NSDictionary* _cachedDefaultAttributes;
	BOOL _fontIsDefaultForIdiom;

}

@property (nonatomic,readonly) BOOL _fontIsDefaultForIdiom;              //@synthesize fontIsDefaultForIdiom=_fontIsDefaultForIdiom - In the implementation block
+(id)_defaultAttributes;
-(void)setLineBreakMode:(long long)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)tintColorDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_setWantsAutolayout;
-(id)_defaultAttributes;
-(void)_setFont:(id)arg1 isDefaultForIdiom:(BOOL)arg2 ;
-(void)_setMinimumFontSize:(double)arg1 ;
-(void)_invalidateCachedDefaultAttributes;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(BOOL)arg1 ;
-(BOOL)_fontIsDefaultForIdiom;
-(double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2 ;
@end

