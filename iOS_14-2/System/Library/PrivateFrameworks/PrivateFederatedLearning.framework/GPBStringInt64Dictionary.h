/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBStringInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeAll;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(id)initWithInt64s:(const long long*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndInt64sUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getInt64:(long long*)arg1 forKey:(id)arg2 ;
-(void)removeInt64ForKey:(id)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

