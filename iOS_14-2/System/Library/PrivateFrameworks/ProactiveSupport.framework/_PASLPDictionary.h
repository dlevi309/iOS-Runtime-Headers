/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol _PASLPReaderProtocol;
@class _PASLPDictionaryContext;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration> {

	id<_PASLPReaderProtocol> _reader;
	_PASLPDictionaryContext* _context;

}
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PA6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(id)allValues;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLazyPlistReader:(id)arg1 context:(id)arg2 ;
-(id)allKeys;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allKeysForObject:(id)arg1 ;
@end

