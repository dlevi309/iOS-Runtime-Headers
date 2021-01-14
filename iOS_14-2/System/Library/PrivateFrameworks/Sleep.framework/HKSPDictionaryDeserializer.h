/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Foundation/NSCoder.h>

@class NSDictionary, NSMutableArray;

@interface HKSPDictionaryDeserializer : NSCoder {

	unsigned long long _serializationOptions;
	NSDictionary* _serializedDictionary;
	NSMutableArray* _stack;

}

@property (nonatomic,readonly) unsigned long long serializationOptions;              //@synthesize serializationOptions=_serializationOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * serializedDictionary;                  //@synthesize serializedDictionary=_serializedDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableArray * stack;                               //@synthesize stack=_stack - In the implementation block
-(id)decodeObjectForKey:(id)arg1 ;
-(id)_decodeObject:(id)arg1 ;
-(unsigned long long)serializationOptions;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(NSMutableArray *)stack;
-(BOOL)allowsKeyedCoding;
-(NSDictionary *)serializedDictionary;
-(id)_decodeDeserializable:(id)arg1 ;
-(id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithSerializedDictionary:(id)arg1 ;
-(id)initWithSerializedDictionary:(id)arg1 serializationOptions:(unsigned long long)arg2 ;
-(unsigned long long)hksp_serializationOptions;
-(id)deserializeObjectOfClass:(Class)arg1 error:(id*)arg2 ;
@end

