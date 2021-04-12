/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKValueEditOption : NTKEditOption {

	unsigned long long _value;

}
+(BOOL)supportsSecureCoding;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)localizedNameForValidValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForActionForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_optionWithValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_value;
-(id)localizedName;
-(id)JSONObjectRepresentation;
-(id)dailySnapshotKey;
-(id)localizedNameForAction;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(id)_valueToFaceBundleStringDict;
-(id)_faceBundleStringToValueDict;
@end

