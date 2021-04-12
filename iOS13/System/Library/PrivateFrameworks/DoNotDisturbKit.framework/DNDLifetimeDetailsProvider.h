/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, DNDLifetimeDetailsProviderDelegate;
@class NSObject, CLLocationManager, _CLPlaceInference, EKEventStore, EKCalendarVisibilityManager, EKEvent, NSArray, NSString;

@interface DNDLifetimeDetailsProvider : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventStoreQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _monitoringLifetimes;
	CLLocationManager* _locationManager;
	_CLPlaceInference* _currentPlaceInference;
	EKEventStore* _eventStore;
	EKCalendarVisibilityManager* _calendarVisibilityManager;
	EKEvent* _relevantEvent;
	NSArray* _availableLifetimeDetails;
	id<DNDLifetimeDetailsProviderDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSArray * availableLifetimeDetails;                           //@synthesize availableLifetimeDetails=_availableLifetimeDetails - In the implementation block
@property (assign,nonatomic,__weak) id<DNDLifetimeDetailsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<DNDLifetimeDetailsProviderDelegate>)delegate;
-(void)setDelegate:(id<DNDLifetimeDetailsProviderDelegate>)arg1 ;
-(void)_queue_requestLifetimeDetails;
-(void)_eventStoreQueue_requestRelevantEvent;
-(void)requestLifetimeDetails;
-(void)_requestRelevantLocationMetadata;
-(id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)arg1 ;
-(void)_queue_gotPlaceInferences:(id)arg1 ;
-(void)_queue_rebuildAvailableLifetimeDetails;
-(void)_queue_resetLifetimeDetails;
-(void)resetLifetimeDetails;
-(void)startUpdatingLifetimeDetails;
-(void)stopUpdatingLifetimeDetails;
-(void)startUpdatingLifetimeDetailMetadata;
-(void)stopUpdatingLifetimeDetailMetadata;
-(id)lifetimeForLifetimeDetails:(id)arg1 error:(id*)arg2 ;
-(id)lifetimeDetailsForAssertionDetails:(id)arg1 error:(id*)arg2 ;
-(void)lifetimeDetailsWithMetadataForAssertionDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)availableLifetimeDetails;
@end

