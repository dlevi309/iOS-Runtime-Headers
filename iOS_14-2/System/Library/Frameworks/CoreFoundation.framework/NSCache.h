/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@class NSString;

@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}

@property (copy) NSString * name; 
@property (assign) id<NSCacheDelegate> delegate; 
@property (assign) unsigned long long totalCostLimit; 
@property (assign) unsigned long long countLimit; 
@property (assign) BOOL evictsObjectsWithDiscardedContent; 
-(id)mapTableRepresentation;
-(void)__apply:(/*^block*/id)arg1 ;
-(unsigned long long)countLimit;
-(unsigned long long)totalCostLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setMinimumObjectCount:(unsigned long long)arg1 ;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)minimumObjectCount;
-(id)init;
-(id<NSCacheDelegate>)delegate;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(NSString *)name;
-(id)allObjects;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

