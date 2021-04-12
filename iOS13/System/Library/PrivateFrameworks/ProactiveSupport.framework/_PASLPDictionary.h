/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class _PASLazyPlist, NSCache;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration> {

	_PASLazyPlist* _lazyPlist;
	const unsigned* _storage;
	unsigned long long _count;
	NSCache* _enumerationCache;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PA5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)keyEnumerator;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLazyPlist:(id)arg1 storage:(const unsigned*)arg2 count:(unsigned long long)arg3 ;
-(id)_keyAtIndex:(unsigned long long)arg1 ;
@end

