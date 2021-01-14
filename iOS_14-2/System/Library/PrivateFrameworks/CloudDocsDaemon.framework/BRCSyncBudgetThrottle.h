/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding> {

	double _t0;
	float _values[8];

}

@property (nonatomic,readonly) float lastMinute; 
@property (nonatomic,readonly) float lastHour; 
@property (nonatomic,readonly) float lastDay; 
+(BOOL)supportsSecureCoding;
-(void)clear;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(float)lastDay;
-(float)lastHour;
-(void)updateForTime:(double)arg1 ;
-(float)availableBudgetWithDefaults:(id)arg1 ;
-(double)nextDateWithBudgetWithDefaults:(id)arg1 ;
-(id)debugDescriptionWithDefaults:(id)arg1 ;
-(double)_timeToLoseAmount:(float)arg1 count:(int)arg2 ;
-(float)lastMinute;
-(void)consume:(float)arg1 ;
@end

