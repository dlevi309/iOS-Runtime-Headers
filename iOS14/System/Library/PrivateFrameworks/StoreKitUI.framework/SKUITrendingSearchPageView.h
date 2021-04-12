/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUITrendingSearchPageViewDelegate;
@class SKUITrendingSearchPage, SKUITrendingSearchView;

@interface SKUITrendingSearchPageView : UIView {

	id<SKUITrendingSearchPageViewDelegate> _delegate;
	SKUITrendingSearchPage* _page;
	SKUITrendingSearchView* _trendingSearchView;

}

@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic,__weak) id<SKUITrendingSearchPageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUITrendingSearchPage * page;                                       //@synthesize page=_page - In the implementation block
-(void)setPage:(SKUITrendingSearchPage *)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(SKUITrendingSearchPage *)page;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUITrendingSearchPageViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end

