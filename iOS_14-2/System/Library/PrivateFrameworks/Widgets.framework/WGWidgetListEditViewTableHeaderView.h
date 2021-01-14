/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 forTodayView:(BOOL)arg2 ;
-(CGRect)_headlineLabelFrameForBoundsWidth:(double)arg1 ;
-(CGRect)_explanationLabelFrameForBoundsWidth:(double)arg1 withHeadlineLabelFrame:(CGRect)arg2 ;
-(double)contentMinY;
@end

