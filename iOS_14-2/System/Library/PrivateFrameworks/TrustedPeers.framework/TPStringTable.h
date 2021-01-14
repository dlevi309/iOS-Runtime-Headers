/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface TPStringTable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _table;

}

@property (readonly) unsigned long long _count; 
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSHashTable * table;                             //@synthesize table=_table - In the implementation block
+(id)defaultTable;
-(NSHashTable *)table;
-(id)stringWithString:(id)arg1 ;
-(id)setWithArray:(id)arg1 ;
-(unsigned long long)_count;
-(void)setTable:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

