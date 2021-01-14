/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSLock, NSMutableDictionary;

@interface MFMessageStoreObjectCache : NSObject {

	NSLock* _lock;
	unsigned long long _capacity;
	NSMutableDictionary* _cache;
	/*^block*/id _keyGenerator;
	/*^block*/id _comparator;

}

@property (nonatomic,copy) id keyGenerator;              //@synthesize keyGenerator=_keyGenerator - In the implementation block
@property (nonatomic,copy) id comparator;                //@synthesize comparator=_comparator - In the implementation block
-(void)flush;
-(void)setComparator:(id)arg1 ;
-(id)debugDescription;
-(id)comparator;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)setKeyGenerator:(id)arg1 ;
-(id)addObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3 ;
-(void)_nts_evictObject;
-(void)_nts_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3 ;
-(void)removeObjectForMessage:(id)arg1 kind:(long long)arg2 ;
-(id)objectForMessage:(id)arg1 kind:(long long)arg2 ;
-(id)keyGenerator;
@end

