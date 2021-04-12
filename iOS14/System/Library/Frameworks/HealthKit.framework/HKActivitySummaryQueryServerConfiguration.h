/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _shouldIncludeActivitySummaryPrivateProperties;
	BOOL _shouldIncludeActivitySummaryStatistics;
	BOOL _orderByDateAscending;
	unsigned long long _limit;

}

@property (assign,nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties;              //@synthesize shouldIncludeActivitySummaryPrivateProperties=_shouldIncludeActivitySummaryPrivateProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeActivitySummaryStatistics;                     //@synthesize shouldIncludeActivitySummaryStatistics=_shouldIncludeActivitySummaryStatistics - In the implementation block
@property (assign,nonatomic) BOOL orderByDateAscending;                                       //@synthesize orderByDateAscending=_orderByDateAscending - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                        //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrderByDateAscending:(BOOL)arg1 ;
-(BOOL)shouldIncludeActivitySummaryPrivateProperties;
-(void)setShouldIncludeActivitySummaryPrivateProperties:(BOOL)arg1 ;
-(BOOL)shouldIncludeActivitySummaryStatistics;
-(void)setShouldIncludeActivitySummaryStatistics:(BOOL)arg1 ;
-(BOOL)orderByDateAscending;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

