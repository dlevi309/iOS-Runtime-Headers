/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CLLocationGroundAltitude : NSObject <NSCopying, NSSecureCoding> {

	double _estimate;
	double _uncertainty;

}

@property (nonatomic,readonly) double estimate;                 //@synthesize estimate=_estimate - In the implementation block
@property (nonatomic,readonly) double uncertainty;              //@synthesize uncertainty=_uncertainty - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEstimate:(double)arg1 uncertainty:(double)arg2 ;
-(double)estimate;
-(double)uncertainty;
@end

