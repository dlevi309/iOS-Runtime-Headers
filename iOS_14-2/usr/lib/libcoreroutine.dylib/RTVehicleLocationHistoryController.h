/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSManagedObjectContext, NSString;

@interface RTVehicleLocationHistoryController : NSObject <RTPurgable> {

	NSObject*<OS_dispatch_queue> _queue;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_getAllVehicleEventsFromHistory;
-(BOOL)_deleteVehicleEventsBeforeDate:(id)arg1 ;
-(id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_evaluateUsualLocationWithVehicleEvent:(id)arg1 ;
-(BOOL)_persistVehicleEventToHistory:(id)arg1 ;
@end

