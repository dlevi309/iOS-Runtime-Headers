/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol _TVListViewCellDelegate;
@class UIColor, UIVisualEffectView, _UIFloatingContentView;

@interface _TVListViewCell : UICollectionViewCell {

	UIColor* _backgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIVisualEffectView* _backgroundVisualEffectView;
	BOOL _visualEffectViewBackgroundEnabled;
	BOOL _disabled;
	BOOL _shouldAppearSelected;
	_UIFloatingContentView* _floatingView;
	id<_TVListViewCellDelegate> _delegate;

}

@property (assign,nonatomic) BOOL visualEffectViewBackgroundEnabled;                   //@synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                    //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) id<_TVListViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                                //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(id<_TVListViewCellDelegate>)delegate;
-(void)setDelegate:(id<_TVListViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_descendantsShouldHighlight;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(unsigned long long)_floatingViewControlState;
-(void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1 ;
-(void)_updateSelectedBackgroundColor;
-(void)setVisualEffectViewBackgroundEnabled:(BOOL)arg1 ;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)visualEffectViewBackgroundEnabled;
-(BOOL)shouldAppearSelected;
@end

