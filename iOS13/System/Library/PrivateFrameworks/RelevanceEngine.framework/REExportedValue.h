/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REExportedValue : NSObject
+(id)exportedValueForObject:(id)arg1 ;
+(id)_exportedValueForTable:(id)arg1 ;
+(id)exportedValueForString:(id)arg1 ;
+(id)exportedValueForNumber:(id)arg1 ;
+(id)exportedValueForArray:(id)arg1 ;
+(id)exportedValueForDictionary:(id)arg1 ;
+(id)exportedValueForDate:(id)arg1 ;
-(unsigned long long)type;
-(id)stringValue;
-(id)dateValue;
-(id)dictionaryValue;
-(id)objectValue;
-(id)arrayValue;
-(id)numberValue;
-(unsigned long long)propertyCount;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end

