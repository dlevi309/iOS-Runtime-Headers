/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@class EKEventDetailsHighlightControl, EKEventViewController;

@interface EKEventReportJunkView : UIView {

	EKEventDetailsHighlightControl* _control;
	EKEventViewController* _controller;
	BOOL _isLargeDayView;

}

@property (assign) BOOL isLargeDayView;              //@synthesize isLargeDayView=_isLargeDayView - In the implementation block
-(id)initWithViewController:(id)arg1 ;
-(void)tapped:(id)arg1 ;
-(BOOL)isLargeDayView;
-(void)setIsLargeDayView:(BOOL)arg1 ;
@end

