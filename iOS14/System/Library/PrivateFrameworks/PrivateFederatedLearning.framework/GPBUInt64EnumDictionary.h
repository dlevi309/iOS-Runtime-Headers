/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt64EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;
	/*function pointer*/void* _validationFunc;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) /*function pointer*/void* validationFunc;              //@synthesize validationFunc=_validationFunc - In the implementation block
-(id)init;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAll;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)addRawEntriesFromDictionary:(id)arg1 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 capacity:(unsigned long long)arg2 ;
-(/*function pointer*/void*)validationFunc;
-(id)serializedDataForUnknownValue:(int)arg1 forKey:(/*function pointer*/void**)arg2 keyDataType:(unsigned char)arg3 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 rawValues:(const int*)arg2 forKeys:(const unsigned long long*)arg3 count:(unsigned long long)arg4 ;
-(void)enumerateKeysAndRawValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getEnum:(int*)arg1 forKey:(unsigned long long)arg2 ;
-(BOOL)getRawValue:(int*)arg1 forKey:(unsigned long long)arg2 ;
-(void)enumerateKeysAndEnumsUsingBlock:(/*^block*/id)arg1 ;
-(void)setRawValue:(int)arg1 forKey:(unsigned long long)arg2 ;
-(void)removeEnumForKey:(unsigned long long)arg1 ;
-(void)setEnum:(int)arg1 forKey:(unsigned long long)arg2 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

