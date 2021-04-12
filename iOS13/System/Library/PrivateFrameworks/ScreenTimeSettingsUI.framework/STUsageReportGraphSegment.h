/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)amount;
-(void)setAmount:(NSNumber *)arg1 ;
-(double)amountAsPercentageOfDataPointTotal;
-(id)initWithAmount:(id)arg1 amountAsPercentageOfDataPointTotal:(double)arg2 color:(id)arg3 ;
-(void)setAmountAsPercentageOfDataPointTotal:(double)arg1 ;
@end

