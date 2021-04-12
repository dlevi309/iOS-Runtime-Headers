/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIColor, HKAxisLabel;

@interface HKAxisAnnotation : NSObject {

	UIColor* _textColor;
	HKAxisLabel* _axisLabel;

}

@property (nonatomic,readonly) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) HKAxisLabel * axisLabel;              //@synthesize axisLabel=_axisLabel - In the implementation block
-(UIColor *)textColor;
-(HKAxisLabel *)axisLabel;
-(id)initWithAnnotation:(id)arg1 color:(id)arg2 position:(id)arg3 ;
@end

