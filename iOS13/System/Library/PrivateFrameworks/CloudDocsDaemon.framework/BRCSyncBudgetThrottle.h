/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)clear;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)lastHour;
-(void)updateForTime:(double)arg1 ;
-(float)availableBudgetWithDefaults:(id)arg1 ;
-(double)nextDateWithBudgetWithDefaults:(id)arg1 ;
-(id)debugDescriptionWithDefaults:(id)arg1 ;
-(float)lastDay;
-(double)_timeToLoseAmount:(float)arg1 count:(int)arg2 ;
-(float)lastMinute;
-(void)consume:(float)arg1 ;
@end

