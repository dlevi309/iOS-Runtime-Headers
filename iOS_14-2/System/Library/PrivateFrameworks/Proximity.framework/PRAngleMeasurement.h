/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PRAngleMeasurement : NSObject <NSCopying, NSSecureCoding> {

	double _measurement;
	double _uncertainty;

}

@property (nonatomic,readonly) double measurement;              //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,readonly) double uncertainty;              //@synthesize uncertainty=_uncertainty - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)measurementWithAngle:(double)arg1 uncertainty:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)measurement;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAngle:(double)arg1 uncertainty:(double)arg2 ;
@end

