/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView {

	EKDayOccurrenceView* _occurrenceView;
	UIColor* _baseColor;
	double _radius;

}

@property (nonatomic,retain) UIColor * baseColor;                                        //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,__weak,readonly) EKDayOccurrenceView * occurrenceView;              //@synthesize occurrenceView=_occurrenceView - In the implementation block
@property (assign,nonatomic) double radius;                                              //@synthesize radius=_radius - In the implementation block
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(EKDayOccurrenceView *)occurrenceView;
-(id)initWithFrame:(CGRect)arg1 occurrenceView:(id)arg2 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(CGRect)_circleRect;
-(UIColor *)baseColor;
@end

