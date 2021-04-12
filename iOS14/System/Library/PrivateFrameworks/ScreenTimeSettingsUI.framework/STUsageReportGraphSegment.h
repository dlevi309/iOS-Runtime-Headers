/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSNumber, UIColor;

@interface STUsageReportGraphSegment : NSObject {

	NSNumber* _amount;
	double _amountAsPercentageOfDataPointTotal;
	UIColor* _color;

}

@property (nonatomic,copy) NSNumber * amount;                                        //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) double amountAsPercentageOfDataPointTotal;              //@synthesize amountAsPercentageOfDataPointTotal=_amountAsPercentageOfDataPointTotal - In the implementation block
@property (nonatomic,retain) UIColor * color;                                        //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(double)amountAsPercentageOfDataPointTotal;
-(id)initWithAmount:(id)arg1 amountAsPercentageOfDataPointTotal:(double)arg2 color:(id)arg3 ;
-(void)setAmountAsPercentageOfDataPointTotal:(double)arg1 ;
@end

