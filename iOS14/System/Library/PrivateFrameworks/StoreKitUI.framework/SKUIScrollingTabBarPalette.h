/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIScrollingTabBarPaletteDelegate;
@class UIView, SKUIScrollingTabBarBackgroundView;

@interface SKUIScrollingTabBarPalette : UIView {

	BOOL _attached;
	BOOL _tabBarBackgroundExtendsBehindPalette;
	UIView* _contentView;
	double _paletteHeight;
	id<SKUIScrollingTabBarPaletteDelegate> _delegate;
	SKUIScrollingTabBarBackgroundView* _backgroundView;

}

@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<SKUIScrollingTabBarPaletteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setAttached:,getter=isAttached,nonatomic) BOOL attached;                                                      //@synthesize attached=_attached - In the implementation block
@property (getter=_backgroundView,nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double paletteHeight;                                                                                    //@synthesize paletteHeight=_paletteHeight - In the implementation block
@property (assign,nonatomic) BOOL tabBarBackgroundExtendsBehindPalette;                                                                 //@synthesize tabBarBackgroundExtendsBehindPalette=_tabBarBackgroundExtendsBehindPalette - In the implementation block
-(BOOL)isAttached;
-(id)_delegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_backgroundView;
-(void)layoutSubviews;
-(void)_setDelegate:(id)arg1 ;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)paletteHeight;
-(void)setTabBarBackgroundExtendsBehindPalette:(BOOL)arg1 ;
-(void)_setAttached:(BOOL)arg1 ;
-(BOOL)tabBarBackgroundExtendsBehindPalette;
@end

