/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@protocol OS_dispatch_queue;
#import <BackBoardServices/BackBoardServices-Structs.h>
@class NSObject, NSMapTable, NSSet, BSServiceConnection;

@interface BKSHIDEventObserver : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	NSMapTable* _lock_deferringAssertionsToObservers;
	NSSet* _lock_deferringResolutions;
	BSServiceConnection* _connection;

}

@property (nonatomic,readonly) NSSet * deferringResolutions; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)addDeferringObserver:(id)arg1 ;
-(NSSet *)deferringResolutions;
-(void)_lock_enableObservation;
-(void)_lock_disableObservation;
-(void)didUpdateDeferringResolutions:(id)arg1 ;
@end

