/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 ;
-(void)animateFillFramesAway;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(void)setEditingHandle:(int)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)setIsZoomed:(BOOL)arg1 ;
-(void)_clampValueAndLayout;
-(void)_updateLeftFill;
-(void)_updateRightFill;
@end

