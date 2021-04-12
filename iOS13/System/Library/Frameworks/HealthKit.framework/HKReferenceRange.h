/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKInspectableValueCollection *)valueRange;
-(NSString *)referenceRangeIdentifier;
@end

