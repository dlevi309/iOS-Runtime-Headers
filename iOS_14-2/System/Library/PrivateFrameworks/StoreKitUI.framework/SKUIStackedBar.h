/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUIStackedBarDelegate>)delegate;
-(NSArray *)items;
-(void)setDelegate:(id<SKUIStackedBarDelegate>)arg1 ;
-(double)offset;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)sizeToFit;
-(void)_reload;
-(void)_backAction:(id)arg1 ;
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
-(void)_resetNewOffset;
-(BOOL)alwaysShowsBackButton;
-(BOOL)lastItemExpanded;
-(BOOL)hidesStatusBar;
-(BOOL)zeroHeightWhenFirstChildExpanded;
@end

