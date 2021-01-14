/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)color;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValue:(double)arg1 color:(id)arg2 ;
@end

