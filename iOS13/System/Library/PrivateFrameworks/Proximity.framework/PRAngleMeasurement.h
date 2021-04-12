/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)measurement;
-(double)uncertainty;
-(id)initWithAngle:(double)arg1 uncertainty:(double)arg2 ;
@end

