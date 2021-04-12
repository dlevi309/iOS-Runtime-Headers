/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _observeUnfrozenSeries;

}

@property (assign,nonatomic) BOOL observeUnfrozenSeries;              //@synthesize observeUnfrozenSeries=_observeUnfrozenSeries - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)observeUnfrozenSeries;
-(void)setObserveUnfrozenSeries:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

