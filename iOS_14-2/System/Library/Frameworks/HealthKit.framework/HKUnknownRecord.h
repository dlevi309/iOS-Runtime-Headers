/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKUnknownRecordType;

@interface HKUnknownRecord : HKMedicalRecord <NSSecureCoding, NSCopying> {

	NSString* _displayName;

}

@property (copy,readonly) HKUnknownRecordType * unknownRecordType; 
@property (copy,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
+(id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 displayName:(id)arg12 ;
+(id)_newUnknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 displayName:(id)arg13 config:(/*^block*/id)arg14 ;
+(id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 displayName:(id)arg13 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(id)defaultDisplayString;
-(BOOL)isEquivalent:(id)arg1 ;
-(void)_setDisplayName:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)fallbackDisplayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(HKUnknownRecordType *)unknownRecordType;
@end

