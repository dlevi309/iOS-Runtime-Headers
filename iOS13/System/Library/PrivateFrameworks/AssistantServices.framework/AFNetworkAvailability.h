/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject, NSHashTable;

@interface AFNetworkAvailability : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	AvailabilityState _state;
	NSHashTable* _observers;

}
+(id)sharedAvailability;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isAvailable;
-(void)_updateState;
-(void)_clearState;
-(void)_availabilityChanged;
-(void)_notifyObservers;
-(void)_startObservingAvailability;
-(void)_stopObservingAvailability;
@end

