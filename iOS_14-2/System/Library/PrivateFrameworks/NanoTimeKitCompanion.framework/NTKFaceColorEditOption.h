/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long faceColor; 
+(id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)standardColorValuesForDevice:(id)arg1 ;
+(id)standardColorsWithColorClass:(Class)arg1 forDevice:(id)arg2 ;
+(id)optionByValidatingValueOfInvalidOption:(id)arg1 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg1 ;
+(id)_optionByValidatingValueOfInvalidOption:(id)arg1 ;
+(id)standardColorEditOptionsForDevice:(id)arg1 ;
+(BOOL)value:(long long)arg1 existsInDevice:(id)arg2 ;
+(id)__orderedValuesForDevice:(id)arg1 ;
+(id)__allOrderedColors;
+(id)_thirdPartyValues;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)faceColor;
-(long long)swatchStyle;
-(BOOL)optionExistsInDevice:(id)arg1 ;
-(id)_valueToFaceBundleStringDict;
@end

