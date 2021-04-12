/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@interface _HKBooleanFilter : _HKFilter {

	BOOL _boolValue;

}

@property (nonatomic,readonly) BOOL boolValue;              //@synthesize boolValue=_boolValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterWithBoolValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

