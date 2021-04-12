/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long color; 
+(id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)__orderedValuesForDevice:(id)arg1 ;
+(id)_orderedBeginningValuesRestrictedByDevice:(id)arg1 ;
+(id)_orderedEndingValuesRestrictedByDevice:(id)arg1 ;
-(unsigned long long)color;
-(long long)swatchStyle;
-(BOOL)optionExistsInDevice:(id)arg1 ;
-(id)_valueToFaceBundleStringDict;
@end

