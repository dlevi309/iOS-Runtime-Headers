/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UISegmentedControl, SKUIColorScheme, UIView, _UIBackdropView, UIControl;

@interface SKUIProductPageHeaderFloatingView : UIView {

	UISegmentedControl* _sectionControl;
	SKUIColorScheme* _colorScheme;
	UIView* _separatorView;
	UIView* _backdropAlphaView;
	_UIBackdropView* _backdropView;
	BOOL _isPad;

}

@property (assign,nonatomic) double backdropAlpha; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIControl * sectionControl;                //@synthesize sectionControl=_sectionControl - In the implementation block
@property (assign,nonatomic) long long selectedSectionIndex; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(long long)selectedSectionIndex;
-(void)setSelectedSectionIndex:(long long)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(UIControl *)sectionControl;
-(id)initWithSectionTitles:(id)arg1 isPad:(BOOL)arg2 ;
-(void)setBackdropAlpha:(double)arg1 ;
-(void)_reloadBackdropView;
-(double)backdropAlpha;
@end

