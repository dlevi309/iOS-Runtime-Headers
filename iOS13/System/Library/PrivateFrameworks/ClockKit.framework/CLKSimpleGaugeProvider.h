/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKGaugeProvider.h>

@interface CLKSimpleGaugeProvider : CLKGaugeProvider {

	float _fillFraction;

}

@property (assign,nonatomic) float fillFraction;              //@synthesize fillFraction=_fillFraction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 fillFraction:(float)arg4 ;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColor:(id)arg2 fillFraction:(float)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)validate;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(BOOL)needsTimerUpdates;
-(double)progressFractionForNow:(id)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(float)fillFraction;
-(void)setFillFraction:(float)arg1 ;
@end

