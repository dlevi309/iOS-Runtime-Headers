/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_queue_requestLifetimeDetails;
-(void)resetLifetimeDetails;
-(void)lifetimeDetailsWithMetadataForAssertionDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_rebuildAvailableLifetimeDetails;
-(void)startUpdatingLifetimeDetailMetadata;
-(id)init;
-(id<DNDLifetimeDetailsProviderDelegate>)delegate;
-(void)_queue_resetLifetimeDetails;
-(id)lifetimeForLifetimeDetails:(id)arg1 error:(id*)arg2 ;
-(void)_requestRelevantLocationMetadata;
-(void)stopUpdatingLifetimeDetailMetadata;
-(id)lifetimeDetailsForAssertionDetails:(id)arg1 error:(id*)arg2 ;
-(void)stopUpdatingLifetimeDetails;
-(void)setDelegate:(id<DNDLifetimeDetailsProviderDelegate>)arg1 ;
-(NSArray *)availableLifetimeDetails;
-(void)_eventStoreQueue_requestRelevantEvent;
-(void)_queue_gotPlaceInferences:(id)arg1 ;
-(id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)arg1 ;
-(void)requestLifetimeDetails;
-(void)startUpdatingLifetimeDetails;
@end

