/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(void)setDayView:(EKDayView *)arg1 ;
-(UIView *)leftGutter;
-(EKDayView *)dayView;
-(UIView *)rightGutter;
-(void)setAllDayHeight:(double)arg1 ;
-(id)_createAllDayView;
-(id)initWithFrame:(CGRect)arg1 dayView:(id)arg2 sizeClass:(long long)arg3 ;
-(double)allDayHeight;
@end

