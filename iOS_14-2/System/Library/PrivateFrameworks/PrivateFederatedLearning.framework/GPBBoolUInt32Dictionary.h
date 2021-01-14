/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBBoolUInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	unsigned _values[2];
	BOOL _valueSet[2];

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeAll;
-(BOOL)isEqual:(id)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(id)initWithUInt32s:(const unsigned*)arg1 forKeys:(const BOOL*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndUInt32sUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getUInt32:(unsigned*)arg1 forKey:(BOOL)arg2 ;
-(void)setUInt32:(unsigned)arg1 forKey:(BOOL)arg2 ;
-(void)removeUInt32ForKey:(BOOL)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

