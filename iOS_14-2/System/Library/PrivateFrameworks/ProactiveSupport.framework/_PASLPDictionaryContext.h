/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSCache;

@interface _PASLPDictionaryContext : NSObject {

	const unsigned* _storage;
	unsigned long long _count;
	NSCache* _enumerationCache;

}

@property (readonly) const unsigned* storage;               //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (__weak) NSCache * enumerationCache;              //@synthesize enumerationCache=_enumerationCache - In the implementation block
-(id)init;
-(id)initWithStorage:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(const unsigned*)storage;
-(unsigned long long)count;
-(void)setEnumerationCache:(NSCache *)arg1 ;
-(NSCache *)enumerationCache;
@end

