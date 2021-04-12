/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore, NSMutableArray;

@interface NSSQLCoreDispatchManager : NSObject {

	NSSQLCore* _sqlCore;
	NSMutableArray* _connectionManagers;

}
-(void)dealloc;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(BOOL)routeStoreRequest:(id)arg1 ;
@end

