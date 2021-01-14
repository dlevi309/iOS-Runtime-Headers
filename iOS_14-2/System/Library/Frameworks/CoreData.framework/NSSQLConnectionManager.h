/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {

	NSSQLCore* _sqlCore;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;              //@synthesize filter=_filter - In the implementation block
-(id)sqlCore;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initializationConnection;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(BOOL)willHandleStoreRequest:(id)arg1 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(void)dealloc;
@end

