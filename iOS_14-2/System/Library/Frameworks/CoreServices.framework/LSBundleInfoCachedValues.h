/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSPropertyList.h>

@class NSSet, NSDictionary;

@interface LSBundleInfoCachedValues : LSPropertyList {

	NSSet* _keys;
	NSDictionary* _values;

}

@property (nonatomic,readonly) NSSet * allKeys;                       //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawValues;              //@synthesize values=_values - In the implementation block
-(id)_expensiveDictionaryRepresentation;
-(id)numberForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(id)objectsForKeys:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDictionary *)rawValues;
-(id)_initWithKeys:(id)arg1 forDictionary:(id)arg2 ;
-(id)objectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 withValuesOfClass:(Class)arg2 ;
-(id)dictionaryForKey:(id)arg1 valuesOfClass:(Class)arg2 ;
-(NSSet *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForKey:(id)arg1 ;
@end

