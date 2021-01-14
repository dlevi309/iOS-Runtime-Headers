/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSArray;

@interface _HKSampleQueryConfiguration : HKQueryServerConfiguration {

	BOOL _includeAutomaticTimeZones;
	BOOL _includeContributorInformation;
	NSArray* _sortDescriptors;
	unsigned long long _limit;

}

@property (nonatomic,copy) NSArray * sortDescriptors;                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIncludeContributorInformation:(BOOL)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(BOOL)includeContributorInformation;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
@end

