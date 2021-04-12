/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIStackedBarDelegate;
@class _UIBackdropView, NSArray, UIView;

@interface SKUIStackedBar : UIView {

	id<SKUIStackedBarDelegate> _delegate;
	_UIBackdropView* _backdropView;
	NSArray* _items;
	NSArray* _cells;
	BOOL _lastItemExpanded;
	BOOL _hidesStatusBar;
	BOOL _splitViewStyle;
	BOOL _alwaysShowsBackButton;
	BOOL _zeroHeightWhenFirstChildExpanded;
	double _offset;
	UIView* _wrapperView;
	UIView* _maskView;
	double _newOffset;

}

@property (__weak) id<SKUIStackedBarDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                    //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsBackButton;                         //@synthesize alwaysShowsBackButton=_alwaysShowsBackButton - In the implementation block
@property (assign,nonatomic) BOOL hidesStatusBar;                                //@synthesize hidesStatusBar=_hidesStatusBar - In the implementation block
@property (assign,nonatomic) BOOL lastItemExpanded;                              //@synthesize lastItemExpanded=_lastItemExpanded - In the implementation block
@property (assign,nonatomic) BOOL splitViewStyle;                                //@synthesize splitViewStyle=_splitViewStyle - In the implementation block
@property (assign,nonatomic) BOOL zeroHeightWhenFirstChildExpanded;              //@synthesize zeroHeightWhenFirstChildExpanded=_zeroHeightWhenFirstChildExpanded - In the implementation block
@property (assign,nonatomic) double offset;                                      //@synthesize offset=_offset - In the implementation block
-(id<SKUIStackedBarDelegate>)delegate;
-(void)setDelegate:(id<SKUIStackedBarDelegate>)arg1 ;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)_reload;
-(void)_buttonAction:(id)arg1 ;
-(BOOL)splitViewStyle;
-(void)setSplitViewStyle:(BOOL)arg1 ;
-(void)setHidesStatusBar:(BOOL)arg1 ;
-(void)setAlwaysShowsBackButton:(BOOL)arg1 ;
-(void)setLastItemExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLastItemExpanded:(BOOL)arg1 ;
-(void)setZeroHeightWhenFirstChildExpanded:(BOOL)arg1 ;
-(void)animateToFullSizeIfNecessary;
-(void)_selectItemAtIndex:(long long)arg1 ;
-(void)_backAction:(id)arg1 ;
-(void)_resetNewOffset;
-(BOOL)alwaysShowsBackButton;
-(BOOL)lastItemExpanded;
-(BOOL)hidesStatusBar;
-(BOOL)zeroHeightWhenFirstChildExpanded;
@end

