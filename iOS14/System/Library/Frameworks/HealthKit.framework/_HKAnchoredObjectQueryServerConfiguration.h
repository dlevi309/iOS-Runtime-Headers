/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeDeletedObjects;
	BOOL _includeAutomaticTimeZones;
	BOOL _includeContributorInformation;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;

}

@property (nonatomic,copy) HKQueryAnchor * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double collectionInterval;                       //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;                      //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)collectionInterval;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIncludeContributorInformation:(BOOL)arg1 ;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(BOOL)includeDeletedObjects;
-(void)setCollectionInterval:(double)arg1 ;
-(BOOL)includeContributorInformation;
-(id)initWithCoder:(id)arg1 ;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
@end

