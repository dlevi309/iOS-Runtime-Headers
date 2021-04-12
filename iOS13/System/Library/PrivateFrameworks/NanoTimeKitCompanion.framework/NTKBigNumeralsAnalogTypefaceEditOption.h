/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@class NSLocale;

@interface NTKBigNumeralsAnalogTypefaceEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long typeface; 
@property (nonatomic,readonly) NSLocale * locale; 
+(id)defaultOptionForLocale:(id)arg1 device:(id)arg2 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)__orderedValuesForDevice:(id)arg1 ;
+(id)optionWithTypeface:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)localeForTypeface:(unsigned long long)arg1 ;
-(NSLocale *)locale;
-(unsigned long long)typeface;
-(long long)swatchStyle;
-(id)_valueToFaceBundleStringDict;
@end

