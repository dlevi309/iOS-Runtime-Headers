/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSArray, NSString;

@interface _TVInfoTableView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	UIView* _headerView;
	NSArray* _infoViews;
	UIView* _footerView;

}

@property (nonatomic,retain) UIView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * infoViews;                   //@synthesize infoViews=_infoViews - In the implementation block
@property (nonatomic,retain) UIView * footerView;                   //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoTableViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NSArray *)infoViews;
-(void)setInfoViews:(NSArray *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(double)_normalizedInfoHeaderWidth;
@end

