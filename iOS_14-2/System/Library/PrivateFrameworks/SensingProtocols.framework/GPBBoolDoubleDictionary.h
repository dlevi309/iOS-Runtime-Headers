/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
*/

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBBoolDoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	double _values[2];
	BOOL _valueSet[2];

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)setDouble:(double)arg1 forKey:(BOOL)arg2 ;
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
-(id)initWithDoubles:(const double*)arg1 forKeys:(const BOOL*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndDoublesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getDouble:(double*)arg1 forKey:(BOOL)arg2 ;
-(void)removeDoubleForKey:(BOOL)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

