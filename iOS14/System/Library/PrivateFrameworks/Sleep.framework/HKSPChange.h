/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol NSObjectNSSecureCodingNSCopying;
@class HKSPProperty, NSString;

@interface HKSPChange : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding> {

	HKSPProperty* _property;
	id<NSObject><NSSecureCoding><NSCopying> _changedValue;
	id<NSObject><NSSecureCoding><NSCopying> _originalValue;

}

@property (nonatomic,copy,readonly) HKSPProperty * property;                                       //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSSecureCoding><NSCopying> changedValue;               //@synthesize changedValue=_changedValue - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSSecureCoding><NSCopying> originalValue;              //@synthesize originalValue=_originalValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allowedValueClasses;
-(id)succinctDescription;
-(HKSPProperty *)property;
-(id<NSObject><NSSecureCoding><NSCopying>)originalValue;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSSecureCoding><NSCopying>)changedValue;
-(id)initWithProperty:(id)arg1 changedValue:(id)arg2 originalValue:(id)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

