/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKGaugeProvider.h>

@interface CLKSimpleGaugeProvider : CLKGaugeProvider {

	float _fillFraction;

}

@property (assign,nonatomic) float fillFraction;              //@synthesize fillFraction=_fillFraction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColor:(id)arg2 fillFraction:(float)arg3 ;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 fillFraction:(float)arg4 ;
-(BOOL)validate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFillFraction:(float)arg1 ;
-(float)fillFraction;
-(void)stopUpdatesForToken:(id)arg1 ;
-(double)progressFractionForNow:(id)arg1 ;
-(BOOL)needsTimerUpdates;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
@end

