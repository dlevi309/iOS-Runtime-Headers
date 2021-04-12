/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIButton;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;
	BOOL _externallySetNumberOfLines;
	BOOL _fontIsDefaultForIdiom;

}

@property (nonatomic,readonly) BOOL _fontIsDefaultForIdiom;              //@synthesize fontIsDefaultForIdiom=_fontIsDefaultForIdiom - In the implementation block
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setReverseShadow:(BOOL)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)_contentDidChange:(long long)arg1 fromContent:(id)arg2 ;
-(void)setFont:(id)arg1 ;
-(void)_setFont:(id)arg1 isDefaultForIdiom:(BOOL)arg2 ;
-(CGSize)shadowOffset;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(BOOL)_textColorFollowsTintColor;
-(void)_setWantsAutolayout;
-(void)_internallySetNumberOfLines:(long long)arg1 ;
-(double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2 ;
-(BOOL)_fontIsDefaultForIdiom;
@end

