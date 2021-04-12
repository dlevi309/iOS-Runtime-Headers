/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMCameraClipManagerObserver.h>
#import <libobjc.A.dylib/HMCameraRecordingReachabilityEventManagerObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class _HMContext, HMCameraRecordingReachabilityEventManager, HMCameraClipManager, HMFUnfairLock, NSHashTable, NSString;

@interface HMCameraRecordingEventManager : NSObject <HMCameraClipManagerObserver, HMCameraRecordingReachabilityEventManagerObserver, HMFLogging> {

	_HMContext* _context;
	HMCameraRecordingReachabilityEventManager* _reachabilityEventManager;
	HMCameraClipManager* _clipManager;
	HMFUnfairLock* _lock;
	NSHashTable* _observers;

}

@property (readonly) _HMContext * context;                                                              //@synthesize context=_context - In the implementation block
@property (readonly) HMCameraRecordingReachabilityEventManager * reachabilityEventManager;              //@synthesize reachabilityEventManager=_reachabilityEventManager - In the implementation block
@property (readonly) HMCameraClipManager * clipManager;                                                 //@synthesize clipManager=_clipManager - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                                              //@synthesize lock=_lock - In the implementation block
@property (readonly) NSHashTable * observers;                                                           //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(HMFUnfairLock *)lock;
-(_HMContext *)context;
-(void)removeObserver:(id)arg1 ;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
-(HMCameraClipManager *)clipManager;
-(HMCameraRecordingReachabilityEventManager *)reachabilityEventManager;
-(void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)mergedRecordingEventsWithRecordingEvents1:(id)arg1 recordingEvents2:(id)arg2 limit:(unsigned long long)arg3 shouldOrderAscending:(BOOL)arg4 ;
-(void)fetchCountOfEventsWithDateInterval:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clipManager:(id)arg1 didUpdateClips:(id)arg2 ;
-(void)notifyObserversOfUpdatedEvents:(id)arg1 removedEventsWithUUIDs:(id)arg2 ;
-(void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2 ;
-(void)fetchAllEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)reachabilityEventManager:(id)arg1 didUpdateReachabilityEvents:(id)arg2 ;
-(void)reachabilityEventManager:(id)arg1 didRemoveReachabilityEventsWithUUIDs:(id)arg2 ;
-(id)initWithContext:(id)arg1 clipManager:(id)arg2 reachabilityEventManager:(id)arg3 ;
-(void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCountOfAllEventsWithCompletion:(/*^block*/id)arg1 ;
@end

