/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSString;

@interface _TVInfoHeaderView : UIView <TVAppTemplateImpressionable> {

	UIView* _headerView;

}

@property (nonatomic,retain) UIView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoHeaderViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end

