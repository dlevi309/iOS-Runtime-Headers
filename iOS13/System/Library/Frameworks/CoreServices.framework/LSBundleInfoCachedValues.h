/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary;

@interface LSBundleInfoCachedValues : NSObject <NSCopying> {

	NSSet* _keys;
	NSDictionary* _values;

}

@property (nonatomic,readonly) NSSet * allKeys;                       //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawValues;              //@synthesize values=_values - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allKeys;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)_initWithKeys:(id)arg1 forDictionary:(id)arg2 ;
-(id)objectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)arrayForKey:(id)arg1 withValuesOfClass:(Class)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(NSDictionary *)rawValues;
@end

