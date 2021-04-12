/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSample.h>

@interface HKSeriesSample : HKSample {

	AI _count;
	BOOL _frozen;

}

@property (assign,setter=_setFrozen:,getter=_isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_valueDescription;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(void)_setCount:(unsigned long long)arg1 ;
-(id)_validateSample;
-(BOOL)_isFrozen;
-(BOOL)_shouldNotifyOnInsert;
-(void)_setFrozen:(BOOL)arg1 ;
@end

