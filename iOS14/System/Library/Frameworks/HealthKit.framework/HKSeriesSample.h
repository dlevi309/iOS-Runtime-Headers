/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@interface HKSeriesSample : HKSample {

	AI _count;
	BOOL _frozen;

}

@property (assign,setter=_setFrozen:,getter=_isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(BOOL)_shouldNotifyOnInsert;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isFrozen;
-(void)_setFrozen:(BOOL)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setCount:(unsigned long long)arg1 ;
-(id)_validateSample;
-(id)_valueDescription;
@end

