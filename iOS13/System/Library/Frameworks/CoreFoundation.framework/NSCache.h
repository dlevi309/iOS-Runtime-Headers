/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id<NSCacheDelegate>)delegate;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allObjects;
-(void)setName:(NSString *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(unsigned long long)totalCostLimit;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(void)setMinimumObjectCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumObjectCount;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(void)__apply:(/*^block*/id)arg1 ;
@end

