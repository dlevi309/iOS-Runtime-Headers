/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeDeletedObjects;
	BOOL _includeAutomaticTimeZones;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;

}

@property (nonatomic,copy) HKQueryAnchor * anchor;                        //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double collectionInterval;                   //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;                  //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;              //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
-(void)setCollectionInterval:(double)arg1 ;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(double)collectionInterval;
-(BOOL)includeDeletedObjects;
@end

