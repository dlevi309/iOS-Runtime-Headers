/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface RTPredictedDate : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _date;
	double _uncertainty;
	double _confidence;

}

@property (nonatomic,copy,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) double uncertainty;              //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) double confidence;               //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 uncertainty:(double)arg2 confidence:(double)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

