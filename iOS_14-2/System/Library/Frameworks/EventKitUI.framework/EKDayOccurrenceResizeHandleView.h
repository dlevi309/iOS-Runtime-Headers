/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setRadius:(double)arg1 ;
-(EKDayOccurrenceView *)occurrenceView;
-(id)initWithFrame:(CGRect)arg1 occurrenceView:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(CGRect)_circleRect;
-(double)radius;
-(UIColor *)baseColor;
@end

