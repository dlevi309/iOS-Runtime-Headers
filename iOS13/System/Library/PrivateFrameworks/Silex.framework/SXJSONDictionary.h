/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NSMutableDictionary, NSArray;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration> {

	/*^block*/id _objectValueClassBlock;
	/*^block*/id _valueClassBlock;
	NSDictionary* _json;
	NSMutableDictionary* _objects;
	NSArray* _keys;
	unsigned long long _count;

}

@property (nonatomic,readonly) id objectValueClassBlock;                   //@synthesize objectValueClassBlock=_objectValueClassBlock - In the implementation block
@property (nonatomic,readonly) id valueClassBlock;                         //@synthesize valueClassBlock=_valueClassBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * json;                        //@synthesize json=_json - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * objects;              //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSArray * keys;                             //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                   //@synthesize count=_count - In the implementation block
-(id)description;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SX16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)allObjects;
-(NSArray *)keys;
-(NSMutableDictionary *)objects;
-(id)jsonDictionary;
-(NSDictionary *)json;
-(id)initWithValueClassBlock:(/*^block*/id)arg1 objectValueClassBlock:(/*^block*/id)arg2 purgeBlock:(/*^block*/id)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5 ;
-(id)objectValueClassBlock;
-(id)NSDictionary;
-(id)valueClassBlock;
@end

