/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding> {

	double _collectionInterval;
	double _maxUnsentDatumAge;

}

@property (assign,nonatomic) double collectionInterval;              //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (assign,nonatomic) double maxUnsentDatumAge;               //@synthesize maxUnsentDatumAge=_maxUnsentDatumAge - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)collectionInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaxUnsentDatumAge:(double)arg1 ;
-(id)description;
-(id)initWithCollectionInterval:(double)arg1 maxUnsentDatumAge:(double)arg2 ;
-(void)setCollectionInterval:(double)arg1 ;
-(double)maxUnsentDatumAge;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

