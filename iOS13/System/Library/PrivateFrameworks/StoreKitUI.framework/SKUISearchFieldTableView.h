/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UITableView.h>

@protocol SKUITrendingSearchPageViewDelegate;
@class SKUITrendingSearchPage, SKUITrendingSearchPageView, SKUITrendingSearchProvider;

@interface SKUISearchFieldTableView : UITableView {

	SKUITrendingSearchPage* _page;
	SKUITrendingSearchPageView* _pageView;
	BOOL _trendingSearchesVisible;
	SKUITrendingSearchProvider* _trendingSearchProvider;
	id<SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;

}

@property (nonatomic,retain) SKUITrendingSearchProvider * trendingSearchProvider;                               //@synthesize trendingSearchProvider=_trendingSearchProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SKUITrendingSearchPageViewDelegate> trendingSearchDelegate;              //@synthesize trendingSearchDelegate=_trendingSearchDelegate - In the implementation block
@property (assign,nonatomic) BOOL trendingSearchesVisible;                                                      //@synthesize trendingSearchesVisible=_trendingSearchesVisible - In the implementation block
-(void)layoutSubviews;
-(void)_reloadData;
-(void)_reloadView;
-(SKUITrendingSearchProvider *)trendingSearchProvider;
-(void)_setTrendingResponse:(id)arg1 error:(id)arg2 ;
-(void)setTrendingSearchProvider:(SKUITrendingSearchProvider *)arg1 ;
-(void)setTrendingSearchDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(void)setTrendingSearchesVisible:(BOOL)arg1 ;
-(id<SKUITrendingSearchPageViewDelegate>)trendingSearchDelegate;
-(BOOL)trendingSearchesVisible;
@end

