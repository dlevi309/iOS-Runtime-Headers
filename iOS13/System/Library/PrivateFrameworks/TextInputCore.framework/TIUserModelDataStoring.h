/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIUserModelDataStoring <NSObject>
@required
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(id)getInputModesForKey:(id)arg1;
-(id)getAllKnownInputModes;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
-(id)getDurableValueForKey:(id)arg1;

@end

