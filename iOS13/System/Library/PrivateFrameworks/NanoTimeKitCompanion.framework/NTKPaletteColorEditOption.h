/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKPaletteColorEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long paletteColor; 
+(id)optionWithPaletteColor:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg1 ;
+(id)__orderedValuesForDevice:(id)arg1 ;
-(long long)swatchStyle;
-(unsigned long long)paletteColor;
-(id)_valueToFaceBundleStringDict;
@end

