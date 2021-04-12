/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKValueEditOption : NTKEditOption {

	unsigned long long _value;

}
+(BOOL)supportsSecureCoding;
+(id)optionByValidatingValueOfInvalidOption:(id)arg1 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)localizedNameForValidValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForActionForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_optionWithValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_value;
-(BOOL)isEqual:(id)arg1 ;
-(id)dailySnapshotKey;
-(id)localizedNameForAction;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(id)_valueToFaceBundleStringDict;
-(id)_faceBundleStringToValueDict;
@end

