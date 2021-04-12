/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSTTableStrokePresetData;

@interface TSTTableStrokePresetList : NSObject {

	unsigned long long mCount;
	TSTTableStrokePresetData* mPresets[15];

}
+(id)init;
+(id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3 ;
+(id)strokePresetListForDefaultPropertyMapForTablePresetIndex:(unsigned long long)arg1 colors:(id)arg2 ;
+(id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg1 andThinStroke:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)setStrokePreset:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)presetAtIndex:(unsigned long long)arg1 ;
-(id)horizontalStrokeForStrokePreset:(unsigned long long)arg1 ;
-(id)verticalStrokeForStrokePreset:(unsigned long long)arg1 ;
-(id)exteriorStrokeForStrokePreset:(unsigned long long)arg1 ;
-(unsigned)maskForStrokePreset:(unsigned long long)arg1 ;
-(void)setStroke:(id)arg1 forPresetIndex:(unsigned long long)arg2 ;
@end

