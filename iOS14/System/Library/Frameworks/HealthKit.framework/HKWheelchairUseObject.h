/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HKWheelchairUseObject : NSObject <NSCopying, NSSecureCoding> {

	long long _wheelchairUse;

}

@property (readonly) long long wheelchairUse;              //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)wheelchairUse;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithWheelchairUse:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

