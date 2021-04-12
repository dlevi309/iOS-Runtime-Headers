/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@protocol DCLRUCacheDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface DCLRUCache : NSObject {

	NSMapTable* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id<DCLRUCacheDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (assign,nonatomic,__weak) id<DCLRUCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)purgeAllCaches;
+(id)cacheCollection;
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id<DCLRUCacheDelegate>)delegate;
-(void)setDelegate:(id<DCLRUCacheDelegate>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)maxSize;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)p_removeOldestObject;
@end

