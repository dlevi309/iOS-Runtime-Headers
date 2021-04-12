/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIView, NSArray;

@interface PUTimeCodeOverlayView : UIView {

	UILabel* _timecodeLabelView;
	UIView* _timecodeBackgroundView;
	UIView* _verticalLineView;
	NSArray* _overlayConstraints;
	double _displayedTimeInterval;

}

@property (assign,nonatomic) double displayedTimeInterval;              //@synthesize displayedTimeInterval=_displayedTimeInterval - In the implementation block
-(void)didMoveToSuperview;
-(void)setDisplayedTimeInterval:(double)arg1 ;
-(void)updateTimeDisplay;
-(double)displayedTimeInterval;
@end

