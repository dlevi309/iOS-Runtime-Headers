/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class _ASKResourceCacheGroup, NSCache;

@interface ASKResourceCache : NSObject {

	_ASKResourceCacheGroup* _group;
	NSCache* _contents;

}

@property (nonatomic,readonly) _ASKResourceCacheGroup * group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSCache * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMember; 
@property (assign,nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground; 
@property (assign,nonatomic) unsigned long long limit; 
-(id)init;
-(void)dealloc;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(NSCache *)contents;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(_ASKResourceCacheGroup *)group;
-(void)addResource:(id)arg1 forKey:(id)arg2 ;
-(id)resourcesForKey:(id)arg1 ;
-(void)removeAllResources;
-(BOOL)isGroupMember;
-(void)replaceResourcesForKey:(id)arg1 withResource:(id)arg2 ;
-(id)initWithGroupOfCache:(id)arg1 ;
@end

