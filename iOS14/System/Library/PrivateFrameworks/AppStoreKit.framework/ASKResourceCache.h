/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSCache *)contents;
-(void)setLimit:(unsigned long long)arg1 ;
-(_ASKResourceCacheGroup *)group;
-(unsigned long long)limit;
-(void)removeAllResources;
-(id)init;
-(id)resourcesForKey:(id)arg1 ;
-(void)replaceResourcesForKey:(id)arg1 withResource:(id)arg2 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(void)addResource:(id)arg1 forKey:(id)arg2 ;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(id)initWithGroupOfCache:(id)arg1 ;
-(BOOL)isGroupMember;
-(void)dealloc;
@end

