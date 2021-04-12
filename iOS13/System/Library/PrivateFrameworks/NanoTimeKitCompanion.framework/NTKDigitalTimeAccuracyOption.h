/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long accuracy; 
+(id)optionWithAccuracy:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(long long)indexForAccuracy:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(unsigned long long)accuracy;
-(id)_valueToFaceBundleStringDict;
@end

