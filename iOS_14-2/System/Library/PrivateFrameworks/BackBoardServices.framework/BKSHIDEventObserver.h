/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_lock_enableObservation;
-(id)init;
-(id)addDeferringObserver:(id)arg1 ;
-(void)didUpdateDeferringResolutions:(id)arg1 ;
-(void)_lock_disableObservation;
-(id)_init;
-(NSSet *)deferringResolutions;
@end

