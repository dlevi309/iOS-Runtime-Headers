/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, TUIEmojiSearchTextField, UICollectionView;

@interface TUIEmojiSearchView : UIView {

	UIView* _searchTextFieldPortal;
	UIView* _bottomHalfContainerView;
	UIView* _predictionViewWrapperView;
	UIView* _resultsCollectionContainerView;
	UILabel* _noResultsLabelView;
	BOOL _predictionViewVisible;
	BOOL _collapsed;
	BOOL _noResultsLabelVisible;
	TUIEmojiSearchTextField* _searchTextField;
	UICollectionView* _resultsCollectionView;
	UIView* _predictionView;

}

@property (nonatomic,readonly) TUIEmojiSearchTextField * searchTextField;              //@synthesize searchTextField=_searchTextField - In the implementation block
@property (nonatomic,retain) UICollectionView * resultsCollectionView;                 //@synthesize resultsCollectionView=_resultsCollectionView - In the implementation block
@property (nonatomic,retain) UIView * predictionView;                                  //@synthesize predictionView=_predictionView - In the implementation block
@property (assign,nonatomic) BOOL predictionViewVisible;                               //@synthesize predictionViewVisible=_predictionViewVisible - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                        //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,nonatomic) BOOL noResultsLabelVisible;                               //@synthesize noResultsLabelVisible=_noResultsLabelVisible - In the implementation block
-(BOOL)isCollapsed;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)predictionView;
-(void)setResultsCollectionView:(UICollectionView *)arg1 ;
-(void)setPredictionView:(UIView *)arg1 ;
-(void)setPredictionViewVisible:(BOOL)arg1 ;
-(void)setNoResultsLabelVisible:(BOOL)arg1 ;
-(void)setNoResultsLabelVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_handBiasedEdgeInsets;
-(void)_didChangeHandBiasNotification:(id)arg1 ;
-(UICollectionView *)resultsCollectionView;
-(BOOL)noResultsLabelVisible;
-(void)layoutSubviews;
-(void)setPredictionViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)predictionViewVisible;
-(void)setCollapsed:(BOOL)arg1 ;
-(TUIEmojiSearchTextField *)searchTextField;
-(void)dealloc;
@end

