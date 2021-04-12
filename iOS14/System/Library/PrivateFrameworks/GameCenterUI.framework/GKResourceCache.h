/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class _GKASKResourceCacheGroup, NSCache;

@interface GKResourceCache : NSObject {

	_GKASKResourceCacheGroup* _group;
	NSCache* _contents;

}

@property (nonatomic,readonly) _GKASKResourceCacheGroup * group;                             //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSCache * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMember; 
@property (assign,nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground; 
@property (assign,nonatomic) unsigned long long limit; 
-(NSCache *)contents;
-(void)setLimit:(unsigned long long)arg1 ;
-(_GKASKResourceCacheGroup *)group;
-(unsigned long long)limit;
-(void)removeAllResources;
-(id)init;
-(id)resourcesForKey:(id)arg1 ;
-(void)replaceResourcesForKey:(id)arg1 withResource:(id)arg2 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(void)addResource:(id)arg1 forKey:(id)arg2 ;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(void)removeResourcesForKey:(id)arg1 ;
-(id)initWithGroupOfCache:(id)arg1 ;
-(BOOL)isGroupMember;
-(void)dealloc;
@end

