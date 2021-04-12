/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(BOOL)shouldIncludeActivitySummaryPrivateProperties;
-(void)setShouldIncludeActivitySummaryPrivateProperties:(BOOL)arg1 ;
-(BOOL)shouldIncludeActivitySummaryStatistics;
-(void)setShouldIncludeActivitySummaryStatistics:(BOOL)arg1 ;
-(BOOL)orderByDateAscending;
-(void)setOrderByDateAscending:(BOOL)arg1 ;
@end

