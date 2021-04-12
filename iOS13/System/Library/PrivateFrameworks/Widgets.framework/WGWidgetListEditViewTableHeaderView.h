/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel;

@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView {

	UILabel* _headlineLabel;
	UILabel* _explanationLabel;

}

@property (nonatomic,readonly) double contentMinY; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 forTodayView:(BOOL)arg2 ;
-(CGRect)_headlineLabelFrameForBoundsWidth:(double)arg1 ;
-(CGRect)_explanationLabelFrameForBoundsWidth:(double)arg1 withHeadlineLabelFrame:(CGRect)arg2 ;
-(double)contentMinY;
@end

