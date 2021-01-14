/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore, NSMutableArray;

@interface NSSQLCoreDispatchManager : NSObject {

	NSSQLCore* _sqlCore;
	NSMutableArray* _connectionManagers;

}
-(BOOL)routeStoreRequest:(id)arg1 ;
-(void)enumerateAvailableConnectionsWithBlock:(/*^block*/id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(void)dealloc;
@end

