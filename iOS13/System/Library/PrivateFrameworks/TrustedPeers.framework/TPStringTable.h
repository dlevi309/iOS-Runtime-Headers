/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)_count;
-(id)setWithArray:(id)arg1 ;
-(id)stringWithString:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSHashTable *)table;
-(void)setTable:(NSHashTable *)arg1 ;
@end

