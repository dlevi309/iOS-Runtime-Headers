/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray, _TVCommonSenseFooterView;

@interface _TVCommonSenseView : UIView {

	UIView* _containerView;
	UIView* _headerView;
	NSArray* _infoViews;
	_TVCommonSenseFooterView* _footerView;

}

@property (nonatomic,retain) UIView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * infoViews;                                //@synthesize infoViews=_infoViews - In the implementation block
@property (nonatomic,retain) _TVCommonSenseFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(_TVCommonSenseFooterView *)footerView;
-(void)setFooterView:(_TVCommonSenseFooterView *)arg1 ;
-(NSArray *)infoViews;
-(void)setInfoViews:(NSArray *)arg1 ;
@end

