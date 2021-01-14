/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, STSSearchBrowserHeaderView, UIView;

@interface STSSearchBrowserRootView : UIView {

	NSMutableArray* _constraints;
	STSSearchBrowserHeaderView* _headerView;
	double _headerTopInset;
	UIView* _contentView;

}

@property (nonatomic,retain) STSSearchBrowserHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) double headerTopInset;                                //@synthesize headerTopInset=_headerTopInset - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
-(void)setHeaderView:(STSSearchBrowserHeaderView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setHeaderTopInset:(double)arg1 ;
-(double)headerTopInset;
-(void)setContentView:(UIView *)arg1 ;
-(STSSearchBrowserHeaderView *)headerView;
-(void)didAddSubview:(id)arg1 ;
-(UIView *)contentView;
@end

