/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@interface NTKEnumeratedEditOption : NTKValueEditOption

@property (nonatomic,readonly) unsigned long long _value; 
+(unsigned long long)numberOfOptionsForDevice:(id)arg1 ;
+(id)optionAtIndex:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(unsigned long long)indexOfOption:(id)arg1 forDevice:(id)arg2 ;
+(id)optionsRestrictedByDevice:(id)arg1 ;
+(BOOL)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg1 ;
@end

