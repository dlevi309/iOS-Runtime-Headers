/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EKDayAllDayView, UIView, EKDayView;

@interface EKDayViewWithGutters : UIView {

	EKDayAllDayView* _leftAllDayView;
	EKDayAllDayView* _rightAllDayView;
	long long _targetSizeClass;
	UIView* _leftGutter;
	UIView* _rightGutter;
	EKDayView* _dayView;
	double _gutterWidth;
	double _allDayHeight;

}

@property (nonatomic,readonly) UIView * leftGutter;               //@synthesize leftGutter=_leftGutter - In the implementation block
@property (nonatomic,readonly) UIView * rightGutter;              //@synthesize rightGutter=_rightGutter - In the implementation block
@property (nonatomic,retain) EKDayView * dayView;                 //@synthesize dayView=_dayView - In the implementation block
@property (assign,nonatomic) double gutterWidth;                  //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (assign,nonatomic) double allDayHeight;                 //@synthesize allDayHeight=_allDayHeight - In the implementation block
-(void)setGutterWidth:(double)arg1 ;
-(void)setAllDayHeight:(double)arg1 ;
-(double)gutterWidth;
-(UIView *)leftGutter;
-(double)allDayHeight;
-(id)_createAllDayView;
-(EKDayView *)dayView;
-(UIView *)rightGutter;
-(id)initWithFrame:(CGRect)arg1 dayView:(id)arg2 sizeClass:(long long)arg3 ;
-(void)setDayView:(EKDayView *)arg1 ;
@end

