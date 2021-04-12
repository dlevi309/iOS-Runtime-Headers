/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@class NSMutableDictionary, NSMutableArray;

@interface LiveFSLRUCache : NSObject {

	int _countLimit;
	NSMutableDictionary* _mapping;
	NSMutableArray* _usageOrder;

}

@property (retain) NSMutableDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (retain) NSMutableArray * usageOrder;                //@synthesize usageOrder=_usageOrder - In the implementation block
@property (assign) int countLimit; 
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(int)countLimit;
-(void)setCountLimit:(int)arg1 ;
-(NSMutableDictionary *)mapping;
-(void)setMapping:(NSMutableDictionary *)arg1 ;
-(void)removeLastItem;
-(id)objectForKeyLocked:(id)arg1 ;
-(NSMutableArray *)usageOrder;
-(void)setUsageOrder:(NSMutableArray *)arg1 ;
@end

