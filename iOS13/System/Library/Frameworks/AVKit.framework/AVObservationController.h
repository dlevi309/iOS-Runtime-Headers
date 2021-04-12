/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@class NSMutableDictionary;

@interface AVObservationController : NSObject {

	os_unfair_lock_s _unfairLock;
	NSMutableDictionary* _proxyObserversByTokens;
	NSMutableDictionary* _notificationObservers;
	NSMutableDictionary* _notificationCenters;
	id _owner;

}
-(void)dealloc;
-(id)initWithOwner:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
-(id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(BOOL)arg3 includeChanges:(BOOL)arg4 observationHandler:(/*^block*/id)arg5 ;
-(id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(BOOL)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)startObserving:(id)arg1 keyPaths:(id)arg2 observationHandler:(/*^block*/id)arg3 ;
-(id)startObserving:(id)arg1 keyPath:(id)arg2 observationHandler:(/*^block*/id)arg3 ;
-(id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(BOOL)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)startObservingNotificationForName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)stopAllObservation;
-(void)_stopAllObservation;
@end

