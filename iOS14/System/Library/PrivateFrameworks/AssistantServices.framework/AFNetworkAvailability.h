/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAvailable;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers;
-(id)init;
-(void)_clearState;
-(void)_stopObservingAvailability;
-(void)_updateState;
-(void)_startObservingAvailability;
-(void)removeObserver:(id)arg1 ;
-(void)_availabilityChanged;
@end

