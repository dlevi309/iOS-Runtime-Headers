/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SKUITrendingSearchPageViewDelegate>)delegate;
-(void)setDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(SKUITrendingSearchPage *)page;
-(void)setPage:(SKUITrendingSearchPage *)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end

