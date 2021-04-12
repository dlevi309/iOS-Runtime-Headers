/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface TodayCirclePulseBackground : UIView {

	BOOL _usesRoundedRectInsteadOfCircle;
	double _roundedRectCornerRadius;

}

@property (assign,nonatomic) BOOL usesRoundedRectInsteadOfCircle;              //@synthesize usesRoundedRectInsteadOfCircle=_usesRoundedRectInsteadOfCircle - In the implementation block
@property (assign,nonatomic) double roundedRectCornerRadius;                   //@synthesize roundedRectCornerRadius=_roundedRectCornerRadius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)usesRoundedRectInsteadOfCircle;
-(double)roundedRectCornerRadius;
-(void)setUsesRoundedRectInsteadOfCircle:(BOOL)arg1 ;
-(void)setRoundedRectCornerRadius:(double)arg1 ;
@end

