/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBDockViewDelegate;
@class SBDockIconListView, SBHighlightView, UIView, UIImageView, _UILegibilitySettings, UIColor;

@interface SBDockView : UIView {

	SBDockIconListView* _iconListView;
	SBHighlightView* _highlightView;
	UIView* _backgroundView;
	UIImageView* _backgroundImageView;
	UIView* _accessibilityBackgroundView;
	BOOL _forSnapshot;
	_UILegibilitySettings* _legibilitySettings;
	unsigned long long _dockEdge;
	double _dockListOffset;
	id<SBDockViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIColor * accessibilityBackgroundColor; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) unsigned long long dockEdge;                             //@synthesize dockEdge=_dockEdge - In the implementation block
@property (nonatomic,readonly) double dockHeight; 
@property (nonatomic,readonly) double dockHeightPadding; 
@property (nonatomic,readonly) CGRect dockListViewFrame; 
@property (nonatomic,readonly) SBDockIconListView * dockListView;                     //@synthesize iconListView=_iconListView - In the implementation block
@property (assign,nonatomic) double dockListOffset;                                   //@synthesize dockListOffset=_dockListOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SBDockViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDockInset,nonatomic,readonly) BOOL dockInset; 
+(double)defaultHeight;
+(double)defaultHeightPadding;
-(void)dealloc;
-(id<SBDockViewDelegate>)delegate;
-(void)setDelegate:(id<SBDockViewDelegate>)arg1 ;
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBDockIconListView *)dockListView;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(unsigned long long)dockEdge;
-(void)setDockEdge:(unsigned long long)arg1 ;
-(double)dockHeight;
-(id)initWithDockListView:(id)arg1 forSnapshot:(BOOL)arg2 ;
-(double)_minimumHomeScreenScale;
-(void)setDockListOffset:(double)arg1 ;
-(void)updateAccessibilityTintColor;
-(double)dockHeightPadding;
-(BOOL)isDockInset;
-(void)getDockViewMetrics:(SCD_Struct_SB17*)arg1 ;
-(double)dockListOffset;
-(void)_updateCornerRadii;
-(CGRect)dockListViewFrame;
-(UIColor *)accessibilityBackgroundColor;
@end

