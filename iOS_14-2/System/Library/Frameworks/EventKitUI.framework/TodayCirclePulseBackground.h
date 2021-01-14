/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

