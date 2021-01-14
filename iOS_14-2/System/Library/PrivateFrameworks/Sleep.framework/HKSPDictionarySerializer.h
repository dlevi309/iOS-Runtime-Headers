/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Foundation/NSCoder.h>

@class NSDictionary, NSError, NSMutableArray;

@interface HKSPDictionarySerializer : NSCoder {

	NSDictionary* _serializedDictionary;
	unsigned long long _serializationOptions;
	NSError* _internalError;
	NSMutableArray* _stack;

}

@property (nonatomic,readonly) unsigned long long serializationOptions;              //@synthesize serializationOptions=_serializationOptions - In the implementation block
@property (nonatomic,readonly) NSError * internalError;                              //@synthesize internalError=_internalError - In the implementation block
@property (nonatomic,readonly) NSMutableArray * stack;                               //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) NSDictionary * serializedDictionary;                  //@synthesize serializedDictionary=_serializedDictionary - In the implementation block
-(unsigned long long)serializationOptions;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)encodeRootObject:(id)arg1 ;
-(NSMutableArray *)stack;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(NSDictionary *)serializedDictionary;
-(void)_encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)_dictionaryForProtocolObject:(id)arg1 ;
-(void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)serialize:(id)arg1 error:(id*)arg2 ;
-(id)initWithSerializationOptions:(unsigned long long)arg1 ;
-(NSError *)internalError;
-(unsigned long long)hksp_serializationOptions;
@end

