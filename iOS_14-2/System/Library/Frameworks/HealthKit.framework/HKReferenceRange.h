/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HKInspectableValueCollection;

@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding> {

	NSString* _referenceRangeIdentifier;
	HKInspectableValueCollection* _valueRange;

}

@property (nonatomic,readonly) NSString * referenceRangeIdentifier;                    //@synthesize referenceRangeIdentifier=_referenceRangeIdentifier - In the implementation block
@property (nonatomic,readonly) HKInspectableValueCollection * valueRange;              //@synthesize valueRange=_valueRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 ;
+(id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 ;
+(id)referenceRangeWithIdentifier:(id)arg1 maxValue:(id)arg2 ;
+(id)referenceRangeWithIdentifier:(id)arg1 inspectableValueRange:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)referenceRangeIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HKInspectableValueCollection *)valueRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

