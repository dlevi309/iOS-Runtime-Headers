/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMapTable;

@interface TSUUnfairMapTable : NSObject {

	os_unfair_lock_s _unfairLock;
	NSMapTable* _mapTable;

}

@property (assign,nonatomic) os_unfair_lock_s unfairLock;              //@synthesize unfairLock=_unfairLock - In the implementation block
@property (nonatomic,retain) NSMapTable * mapTable;                    //@synthesize mapTable=_mapTable - In the implementation block
@property (readonly) unsigned long long count; 
+(id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 ;
-(os_unfair_lock_s)unfairLock;
-(NSMapTable *)mapTable;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setUnfairLock:(os_unfair_lock_s)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
-(void)setMapTable:(NSMapTable *)arg1 ;
@end

