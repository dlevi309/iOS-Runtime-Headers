/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol OS_dispatch_queue;
#import <PassKitUI/PassKitUI-Structs.h>
@class PKSearchService, NSMutableArray, NSMutableSet, PKWorldRegion, NSHashTable, NSObject;

@interface PKWorldRegionUpdater : NSObject {

	PKSearchService* _searchService;
	os_unfair_lock_s _lockRegionsToGeocode;
	NSMutableArray* _regionsToGeocode;
	NSMutableSet* _regionIdentifiersToGeocode;
	NSMutableSet* _regionsFailedToGeocode;
	PKWorldRegion* _currentRegionToGeocode;
	NSHashTable* _observers;
	os_unfair_lock_s _lockObservers;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;

}
-(void)addObserver:(id)arg1 ;
-(id)initWithSearchService:(id)arg1 ;
-(void)updateCoordinatesForWorldRegionIfNeeded:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_beginReverseGeocodingIfPossible;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
@end

