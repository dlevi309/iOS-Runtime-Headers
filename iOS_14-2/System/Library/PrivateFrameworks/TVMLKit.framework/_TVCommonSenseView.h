/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_TVCommonSenseFooterView *)footerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFooterView:(_TVCommonSenseFooterView *)arg1 ;
-(UIView *)headerView;
-(void)setInfoViews:(NSArray *)arg1 ;
-(NSArray *)infoViews;
@end

