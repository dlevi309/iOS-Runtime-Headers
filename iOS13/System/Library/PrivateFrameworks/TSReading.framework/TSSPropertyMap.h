/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSReading/TSSPropertySource.h>

@class NSString;

@interface TSSPropertyMap : NSObject <NSCopying, TSSPropertySource> {

	TSSPropertyStoreRef mStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyMap;
+(id)propertyMapWithPropertiesAndValues:(int)arg1 ;
+(id)propertyMapWithPropertyMap:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)allKeys;
-(void)setObject:(id)arg1 forProperty:(int)arg2 ;
-(id)objectForProperty:(int)arg1 ;
-(id)allProperties;
-(id)diff:(id)arg1 ;
-(id)initWithPropertiesAndValues:(int)arg1 ;
-(void)setIntValue:(int)arg1 forProperty:(int)arg2 ;
-(float)floatValueForProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg1 forProperty:(int)arg2 ;
-(BOOL)containsProperty:(int)arg1 ;
-(void)setDoubleValue:(double)arg1 forProperty:(int)arg2 ;
-(id)initWithFirstKey:(int)arg1 andArgumentList:(char*)arg2 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(void)enumeratePropertiesAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromPropertyMap:(id)arg1 ;
-(void)removeValuesFromPropertyMap:(id)arg1 ;
-(void)removeValueForProperty:(int)arg1 ;
-(void)filterWithProperties:(id)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(id)initWithPropertyMap:(id)arg1 ;
-(void)p_getAllKeys:(int*)arg1 ;
-(id)old_description;
-(void)setBoxedObject:(id)arg1 forProperty:(int)arg2 ;
-(void)setCGFloatValue:(double)arg1 forProperty:(int)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forProperty:(int)arg2 ;
-(BOOL)definesProperty:(int)arg1 ;
-(BOOL)containsAnyPropertyInProperties:(id)arg1 ;
-(void)removeValuesForProperties:(id)arg1 ;
-(void)removeAllPropertyValues;
-(void)minusPropertyMap:(id)arg1 ;
-(id)diffOnlyDifferences:(id)arg1 ;
-(id)diffPropertyNames:(id)arg1 ;
-(id)propertyMapByAddingValuesFromPropertyMap:(id)arg1 ;
-(id)propertyMapByRemovingValuesFromPropertyMap:(id)arg1 ;
-(id)propertyMapByRemovingValuesForProperties:(id)arg1 ;
-(id)propertyMapWithProperties:(id)arg1 ;
-(void)pSetArrayOfObjects:(id)arg1 forProperty:(int)arg2 ;
-(void)pSetArrayOfFloats:(double)arg1 forProperty:(int)arg2 ;
@end

