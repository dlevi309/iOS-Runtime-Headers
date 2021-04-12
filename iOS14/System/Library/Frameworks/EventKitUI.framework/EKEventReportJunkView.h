/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLargeDayView;
-(void)tapped:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setIsLargeDayView:(BOOL)arg1 ;
-(void)viewDidMoveToSuperview;
@end

