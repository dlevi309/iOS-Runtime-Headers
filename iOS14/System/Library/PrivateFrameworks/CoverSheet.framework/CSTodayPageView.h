/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)todayView;
-(void)_layoutTodayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)navigationBarTopInset;
-(UIScrollView *)widgetMajorScrollView;
-(void)layoutSubviews;
-(void)setNavigationBarTopInset:(double)arg1 ;
-(void)setWidgetMajorScrollView:(UIScrollView *)arg1 ;
-(void)setTodayView:(UIView *)arg1 ;
@end

