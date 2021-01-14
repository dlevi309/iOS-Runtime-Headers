/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/ANLocalPlaybackSessionDelegate.h>
#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, AFNotifyObserver, ANLocalPlaybackSession, AFHomeAnnouncement, AFHomeAnnouncementSnapshot, NSString;

@interface AFHomeAnnouncementObserver : NSObject <ANLocalPlaybackSessionDelegate, AFNotifyObserverDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _listeners;
	AFNotifyObserver* _notifyObserver;
	ANLocalPlaybackSession* _localPlaybackSession;
	long long _groupingDepth;
	NSObject*<OS_dispatch_group> _snapshotGroup;
	unsigned long long _state;
	AFHomeAnnouncement* _lastPlayedAnnouncement;
	AFHomeAnnouncementSnapshot* _snapshot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addListener:(id)arg1 ;
-(void)connectionInvalidated;
-(id)init;
-(void)connectionInterrupted;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)_tearDown;
-(void)invalidate;
-(void)_beginGrouping;
-(void)_updateLastPlayedAnnouncement:(id)arg1 ;
-(void)_endGrouping;
-(void)_handleNotifyStateChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)_updateSnapshot:(id)arg1 ;
-(void)_fetchStateAndLastPlayedAnnouncementForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateLocalPlaybackSession;
-(id)_localPlaybackSession:(BOOL)arg1 ;
-(void)_setUp;
-(void)getSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateState:(unsigned long long)arg1 ;
-(void)_enumerateListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(void)dealloc;
@end

