/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKMedicalDate, HKAccountOwnerType;

@interface HKAccountOwner : HKMedicalRecord <NSSecureCoding, NSCopying> {

	NSString* _name;
	HKMedicalDate* _birthDate;

}

@property (copy,readonly) HKAccountOwnerType * accountOwnerType; 
@property (copy,readonly) HKMedicalDate * birthDate; 
@property (copy,readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)_newAccountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14 config:(/*^block*/id)arg15 ;
+(id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14 ;
+(id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 name:(id)arg12 birthDate:(id)arg13 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(HKMedicalDate *)birthDate;
-(void)_setBirthDate:(id)arg1 ;
-(HKAccountOwnerType *)accountOwnerType;
@end

