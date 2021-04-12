/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSSharedKeySet, NSMutableDictionary;

@interface NSSharedKeyDictionary : NSMutableDictionary {

	NSSharedKeySet* _keyMap;
	unsigned long long _count;
	id* _values;
	/*function pointer*/void* _ifkIMP;
	NSMutableDictionary* _sideDic;
	unsigned long long _mutations;
	BOOL _doKVO;

}
+(id)sharedKeyDictionaryWithKeySet:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithKeySet:(id)arg1 ;
-(id)keySet;
@end

