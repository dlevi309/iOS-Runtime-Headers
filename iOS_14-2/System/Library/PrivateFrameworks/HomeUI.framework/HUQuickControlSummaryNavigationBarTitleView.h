/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/_UINavigationBarTitleView.h>

@class HUQuickControlSummaryView, NSArray;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView {

	HUQuickControlSummaryView* _summaryView;
	NSArray* _contentConstraints;

}

@property (nonatomic,retain) HUQuickControlSummaryView * summaryView;              //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                         //@synthesize contentConstraints=_contentConstraints - In the implementation block
-(void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(NSArray *)contentConstraints;
-(HUQuickControlSummaryView *)summaryView;
-(void)setSummaryView:(HUQuickControlSummaryView *)arg1 ;
@end

