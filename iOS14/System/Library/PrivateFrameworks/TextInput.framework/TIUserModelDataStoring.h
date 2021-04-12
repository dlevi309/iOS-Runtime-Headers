/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

@class NSDate;


@protocol TIUserModelDataStoring <NSObject>
@property (readonly) BOOL isValid; 
@property (readonly) int propertiesVersion; 
@property (readonly) int durableVersion; 
@property (readonly) int transientVersion; 
@property (readonly) NSDate * propertiesLastMigrationDate; 
@property (readonly) NSDate * durableLastMigrationDate; 
@property (readonly) NSDate * transientLastMigrationDate; 
@required
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(id)getInputModesForKey:(id)arg1;
-(id)getAllKnownInputModes;
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(id)getAllKnownInputModesSinceDate:(id)arg1;
-(int)transientVersion;
-(NSDate *)transientLastMigrationDate;
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(BOOL)isValid;
-(NSDate *)durableLastMigrationDate;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(NSDate *)propertiesLastMigrationDate;
-(int)durableVersion;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4;
-(id)getDurableValueForKey:(id)arg1;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
-(int)propertiesVersion;

@end

