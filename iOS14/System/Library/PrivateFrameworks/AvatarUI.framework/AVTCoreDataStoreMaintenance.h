/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreDataStoreMaintenance.h>

@protocol AVTCoreDataStoreMaintenance
@required
-(void)storeDidChange;

@end


@protocol AVTUILogger, OS_dispatch_queue, AVTEventCoalescer;
@class NSObject;

@interface AVTCoreDataStoreMaintenance : NSObject <AVTCoreDataStoreMaintenance> {

	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<AVTEventCoalescer> _eventCoalescer;
	/*^block*/id _mocFactory;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<AVTEventCoalescer> eventCoalescer;                //@synthesize eventCoalescer=_eventCoalescer - In the implementation block
@property (nonatomic,copy,readonly) id mocFactory;                                  //@synthesize mocFactory=_mocFactory - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<AVTUILogger>)logger;
-(id)mocFactory;
-(id)initWithWorkQueue:(id)arg1 managedObjectContextFactory:(/*^block*/id)arg2 eventCoalescer:(id)arg3 logger:(id)arg4 ;
-(void)runMaintenanceTasks;
-(id<AVTEventCoalescer>)eventCoalescer;
-(void)storeDidChange;
-(BOOL)mitigateDuplicatesWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(id)duplicatedIdentifiersInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)fixDuplicateRecordIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)fetchDuplicatedRecordsForIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithEnvironment:(id)arg1 managedObjectContextFactory:(/*^block*/id)arg2 ;
@end

