/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIView, NSArray, UIStackView;

@interface SKUITrendingSearchView : UIScrollView {

	UIView* _trendingTitleView;
	NSArray* _trendingSearchViews;
	UIStackView* _trendingSearchesStackView;
	UIStackView* _titleStackView;
	NSArray* _verticalMarginRelatedConstraints;

}

@property (assign,nonatomic,__weak) UIStackView * trendingSearchesStackView;              //@synthesize trendingSearchesStackView=_trendingSearchesStackView - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * titleStackView;                         //@synthesize titleStackView=_titleStackView - In the implementation block
@property (nonatomic,retain) NSArray * verticalMarginRelatedConstraints;                  //@synthesize verticalMarginRelatedConstraints=_verticalMarginRelatedConstraints - In the implementation block
@property (nonatomic,copy) UIView * trendingTitleView;                                    //@synthesize trendingTitleView=_trendingTitleView - In the implementation block
@property (nonatomic,copy) NSArray * trendingSearchViews;                                 //@synthesize trendingSearchViews=_trendingSearchViews - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)layoutMarginsDidChange;
-(void)setTitleStackView:(UIStackView *)arg1 ;
-(UIStackView *)titleStackView;
-(void)commonInitWithFrame:(CGRect)arg1 ;
-(UIStackView *)trendingSearchesStackView;
-(NSArray *)verticalMarginRelatedConstraints;
-(void)setTrendingTitleView:(UIView *)arg1 ;
-(void)setTrendingSearchViews:(NSArray *)arg1 ;
-(UIView *)trendingTitleView;
-(NSArray *)trendingSearchViews;
-(void)setTrendingSearchesStackView:(UIStackView *)arg1 ;
-(void)setVerticalMarginRelatedConstraints:(NSArray *)arg1 ;
@end

