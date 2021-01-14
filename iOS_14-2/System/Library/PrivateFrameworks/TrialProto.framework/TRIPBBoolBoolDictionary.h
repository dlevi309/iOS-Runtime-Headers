/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/TRIPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage;

@interface TRIPBBoolBoolDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {

	TRIPBMessage* _autocreator;
	BOOL _values[2];
	BOOL _valueSet[2];

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeAll;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)setTRIPBGenericValue:(/*function pointer*/void**)arg1 forTRIPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(id)initWithBools:(const BOOL*)arg1 forKeys:(const BOOL*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndBoolsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getBool:(BOOL*)arg1 forKey:(BOOL)arg2 ;
-(void)removeBoolForKey:(BOOL)arg1 ;
@end

