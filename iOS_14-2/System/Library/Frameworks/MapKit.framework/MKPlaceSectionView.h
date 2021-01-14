/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKStackView.h>

@protocol MKPlaceSectionViewDelegate;
@class MKViewWithHairline, MKPlaceSectionItemView, NSArray;

@interface MKPlaceSectionView : _MKStackView {

	unsigned long long _trackingSelectForRow;
	MKViewWithHairline* _hairLineView;
	BOOL _highlightsTouches;
	BOOL _showsBottomHairline;
	id<MKPlaceSectionViewDelegate> _delegate;
	MKPlaceSectionItemView* _headerView;
	NSArray* _rowViews;
	MKPlaceSectionItemView* _footerView;

}

@property (assign,nonatomic,__weak) id<MKPlaceSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * rowViews;                                            //@synthesize rowViews=_rowViews - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * footerView;                         //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) BOOL highlightsTouches;                                      //@synthesize highlightsTouches=_highlightsTouches - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                                    //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
-(MKPlaceSectionItemView *)footerView;
-(void)layoutMarginsDidChange;
-(void)setHeaderView:(MKPlaceSectionItemView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKPlaceSectionViewDelegate>)delegate;
-(id)rowAt:(CGPoint)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<MKPlaceSectionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setFooterView:(MKPlaceSectionItemView *)arg1 ;
-(NSArray *)rowViews;
-(void)infoCardThemeChanged;
-(BOOL)showsBottomHairline;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(MKPlaceSectionItemView *)headerView;
-(void)_updateViewsAnimated:(BOOL)arg1 ;
-(unsigned long long)indexOfRowAt:(CGPoint)arg1 ;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(void)setRowViews:(NSArray *)arg1 ;
-(void)setHighlightsTouches:(BOOL)arg1 ;
-(void)setRowViews:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRowViews:(id)arg1 animated:(BOOL)arg2 isNeedLayout:(BOOL)arg3 ;
-(void)_updateHairlineInsets;
-(BOOL)highlightsTouches;
-(void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)_tappedRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)setHeaderView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateViewsAnimated:(BOOL)arg1 isNeedLayout:(BOOL)arg2 ;
-(void)setFooterView:(id)arg1 animated:(BOOL)arg2 ;
@end

