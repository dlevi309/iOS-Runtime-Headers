/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)countLimit;
-(void)setCountLimit:(int)arg1 ;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setMapping:(NSMutableDictionary *)arg1 ;
-(void)removeAllObjects;
-(NSMutableDictionary *)mapping;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeLastItem;
-(id)objectForKeyLocked:(id)arg1 ;
-(NSMutableArray *)usageOrder;
-(void)setUsageOrder:(NSMutableArray *)arg1 ;
@end

