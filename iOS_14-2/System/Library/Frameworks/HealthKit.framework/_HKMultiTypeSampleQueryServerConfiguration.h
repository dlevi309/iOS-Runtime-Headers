/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKMultiTypeQueryCursor;

@interface _HKMultiTypeSampleQueryServerConfiguration : HKQueryServerConfiguration {

	HKMultiTypeQueryCursor* _queryCursor;
	unsigned long long _limit;

}

@property (nonatomic,copy) HKMultiTypeQueryCursor * queryCursor;              //@synthesize queryCursor=_queryCursor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKMultiTypeQueryCursor *)queryCursor;
-(void)setQueryCursor:(HKMultiTypeQueryCursor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

