/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSPageViewBase.h>

@class UIView, UIScrollView;

@interface CSTodayPageView : CSPageViewBase {

	UIView* _todayView;
	UIScrollView* _widgetMajorScrollView;
	double _navigationBarTopInset;

}

@property (nonatomic,retain) UIView * todayView;                                //@synthesize todayView=_todayView - In the implementation block
@property (nonatomic,retain) UIScrollView * widgetMajorScrollView;              //@synthesize widgetMajorScrollView=_widgetMajorScrollView - In the implementation block
@property (assign,nonatomic) double navigationBarTopInset;                      //@synthesize navigationBarTopInset=_navigationBarTopInset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTodayView:(UIView *)arg1 ;
-(UIView *)todayView;
-(void)setWidgetMajorScrollView:(UIScrollView *)arg1 ;
-(void)setNavigationBarTopInset:(double)arg1 ;
-(void)_layoutTodayView;
-(UIScrollView *)widgetMajorScrollView;
-(double)navigationBarTopInset;
@end

