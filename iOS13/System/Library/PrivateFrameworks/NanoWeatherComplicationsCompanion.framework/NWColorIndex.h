/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/


@class UIColor;

@interface NWColorIndex : NSObject {

	double _value;
	UIColor* _color;

}

@property (nonatomic,readonly) double value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)indexForValue:(double)arg1 ;
+(id)indexWithValue:(double)arg1 color:(id)arg2 ;
+(id)colorForValue:(double)arg1 ;
+(id)zeroIndex;
-(BOOL)isEqual:(id)arg1 ;
-(double)value;
-(UIColor *)color;
-(id)initWithValue:(double)arg1 color:(id)arg2 ;
@end

