/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSSet, HKQueryAnchor;

@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeChangeDetails;
	NSSet* _sampleTypes;
	HKQueryAnchor* _anchor;
	long long _changeDetailsQueryStrategy;
	long long _anchorStrategyChangeCountLimit;

}

@property (nonatomic,copy) NSSet * sampleTypes;                                     //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,copy) HKQueryAnchor * anchor;                                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL includeChangeDetails;                             //@synthesize includeChangeDetails=_includeChangeDetails - In the implementation block
@property (assign,nonatomic) long long changeDetailsQueryStrategy;                  //@synthesize changeDetailsQueryStrategy=_changeDetailsQueryStrategy - In the implementation block
@property (assign,nonatomic) long long anchorStrategyChangeCountLimit;              //@synthesize anchorStrategyChangeCountLimit=_anchorStrategyChangeCountLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)sampleTypes;
-(void)setIncludeChangeDetails:(BOOL)arg1 ;
-(void)setSampleTypes:(NSSet *)arg1 ;
-(void)setChangeDetailsQueryStrategy:(long long)arg1 ;
-(BOOL)includeChangeDetails;
-(void)setAnchorStrategyChangeCountLimit:(long long)arg1 ;
-(long long)changeDetailsQueryStrategy;
-(long long)anchorStrategyChangeCountLimit;
-(id)initWithCoder:(id)arg1 ;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

