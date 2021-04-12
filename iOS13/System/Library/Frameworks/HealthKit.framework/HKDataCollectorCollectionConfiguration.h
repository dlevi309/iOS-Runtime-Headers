/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionInterval:(double)arg1 ;
-(double)collectionInterval;
-(id)initWithCollectionInterval:(double)arg1 maxUnsentDatumAge:(double)arg2 ;
-(double)maxUnsentDatumAge;
-(void)setMaxUnsentDatumAge:(double)arg1 ;
@end

