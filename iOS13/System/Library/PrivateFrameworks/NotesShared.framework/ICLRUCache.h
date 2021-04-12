/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id<ICLRUCacheDelegate>)delegate;
-(void)setDelegate:(id<ICLRUCacheDelegate>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)maxSize;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)p_removeOldestObject;
@end

