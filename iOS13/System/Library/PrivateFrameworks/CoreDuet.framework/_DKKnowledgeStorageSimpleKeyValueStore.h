/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSimpleKeyValueStore.h>

@class _DKKnowledgeStorage, NSString;

@interface _DKKnowledgeStorageSimpleKeyValueStore : NSObject <_DKSimpleKeyValueStore> {

	_DKKnowledgeStorage* _storage;
	NSString* _domain;

}

@property (nonatomic,readonly) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSString * domain;                          //@synthesize domain=_domain - In the implementation block
-(NSString *)domain;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(_DKKnowledgeStorage *)storage;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStorage:(id)arg1 domain:(id)arg2 ;
@end

