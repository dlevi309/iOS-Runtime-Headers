/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKSQLitePool : NSObject {

	BOOL _traced;
	BOOL _drainScheduled;
	/*^block*/id _factory;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _dbs;

}

@property (nonatomic,retain) NSMutableArray * dbs;                            //@synthesize dbs=_dbs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL drainScheduled;                             //@synthesize drainScheduled=_drainScheduled - In the implementation block
@property (nonatomic,readonly) id factory;                                    //@synthesize factory=_factory - In the implementation block
@property (assign,nonatomic) BOOL traced;                                     //@synthesize traced=_traced - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)traced;
-(void)setTraced:(BOOL)arg1 ;
-(id)factory;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(id)initWithFactory:(/*^block*/id)arg1 queueAttr:(id)arg2 ;
-(NSMutableArray *)dbs;
-(id)_openDatabaseWithError:(id*)arg1 ;
-(id)_acquireDatabaseWithError:(id*)arg1 ;
-(void)_scheduleDrain;
-(void)_closeDatabase:(id)arg1 ;
-(void)releaseDatabase:(id)arg1 ;
-(BOOL)performWithDatabase:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)_drain;
-(id)initWithFactory:(/*^block*/id)arg1 ;
-(id)acquireDatabase:(BOOL)arg1 ;
-(id)acquireDatabaseWithError:(id*)arg1 ;
-(void)closeAll;
-(void)setDbs:(NSMutableArray *)arg1 ;
-(BOOL)drainScheduled;
-(void)setDrainScheduled:(BOOL)arg1 ;
@end

