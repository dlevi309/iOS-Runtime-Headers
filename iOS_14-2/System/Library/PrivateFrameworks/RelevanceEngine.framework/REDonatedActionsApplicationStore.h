/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REDonatedActionFilteredCacheDelegate.h>

@protocol OS_dispatch_queue, REMLElementRanker;
@class REDonatedActionFilteredCache, REUpNextScheduler, NSObject, NSMutableSet, RERelevanceEngine, NSString;

@interface REDonatedActionsApplicationStore : NSObject <REDonatedActionFilteredCacheDelegate> {

	REDonatedActionFilteredCache* _cache;
	REUpNextScheduler* _scheduler;
	REUpNextScheduler* _applicationScheduler;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _applications;
	RERelevanceEngine* _filteringEngine;
	id<REMLElementRanker> _elementRanker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_notify;
-(id)initWithLocationManager:(id)arg1 ;
-(void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchFirstPerformedActionDate:(/*^block*/id)arg1 ;
-(void)fetchDonationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donatedActionFilteredCacheDonationRemoved;
-(void)donatedActionFilteredCacheDidAddDonation:(id)arg1 ;
-(void)donatedActionFilteredCacheCountDidChange;
-(void)_notifyApplicationsUpdates;
-(void)_queue_loadApplicationsIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldFilterDonation:(id)arg1 ;
-(void)_sortDonationsByCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchApplicationsProvidingDonations:(/*^block*/id)arg1 ;
-(void)fetchTopDonationsForApplications:(id)arg1 fromOnlyRecentPlatform:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)fetchAllUniqueDonationsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPerformedCountForAction:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

