/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dateValue;
-(id)numberValue;
-(id)objectValue;
-(id)arrayValue;
-(unsigned long long)propertyCount;
-(id)stringValue;
-(unsigned long long)type;
-(id)dictionaryValue;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end

