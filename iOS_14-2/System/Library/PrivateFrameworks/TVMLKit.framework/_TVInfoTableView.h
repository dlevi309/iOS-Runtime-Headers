/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)footerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(UIView *)headerView;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)setInfoViews:(NSArray *)arg1 ;
-(NSArray *)infoViews;
-(double)_normalizedInfoHeaderWidth;
@end

