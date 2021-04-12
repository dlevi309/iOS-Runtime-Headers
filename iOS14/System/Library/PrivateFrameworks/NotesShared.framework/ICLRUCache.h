/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICLRUCacheDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface ICLRUCache : NSObject {

	NSMapTable* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id<ICLRUCacheDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (assign,nonatomic,__weak) id<ICLRUCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)purgeAllCaches;
+(id)cacheCollection;
-(id<ICLRUCacheDelegate>)delegate;
-(void)p_removeOldestObject;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setDelegate:(id<ICLRUCacheDelegate>)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(void)removeAllObjects;
-(NSArray *)allKeys;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

