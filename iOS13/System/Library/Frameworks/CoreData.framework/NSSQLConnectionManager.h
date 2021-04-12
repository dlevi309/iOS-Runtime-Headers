/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {

	NSSQLCore* _sqlCore;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;              //@synthesize filter=_filter - In the implementation block
-(void)dealloc;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)sqlCore;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(BOOL)willHandleStoreRequest:(id)arg1 ;
-(id)initializationConnection;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
@end

