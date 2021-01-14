/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface UIMovieScrubberTrackOverlayView : UIView {

	double _value;
	double _minimumValue;
	double _maximumValue;
	double _startValue;
	double _endValue;
	UIImageView* _leftFillView;
	UIImageView* _rightFillView;
	unsigned _editingHandle;
	unsigned _editing : 1;
	unsigned _zoomed : 1;

}
-(void)setEndValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)layoutSubviews;
-(void)animateFillFramesAway;
-(void)setEditingHandle:(int)arg1 ;
-(void)_clampValueAndLayout;
-(void)_updateRightFill;
-(void)setStartValue:(double)arg1 ;
-(void)setIsZoomed:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)_updateLeftFill;
@end

