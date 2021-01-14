/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKPaletteColorEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long paletteColor; 
+(id)optionWithPaletteColor:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)optionByValidatingValueOfInvalidOption:(id)arg1 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg1 ;
+(id)__orderedValuesForDevice:(id)arg1 ;
-(long long)swatchStyle;
-(unsigned long long)paletteColor;
-(BOOL)optionExistsInDevice:(id)arg1 ;
-(id)_valueToFaceBundleStringDict;
@end

