/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REDonatedActionStoreObserver.h>

@protocol OS_dispatch_queue, REDonatedActionFilteredCacheDelegate;
@class NSMapTable, NSObject, NSDate, NSString;

@interface REDonatedActionFilteredCache : NSObject <REDonatedActionStoreObserver> {

	NSMapTable* _countsByActionType;
	NSMapTable* _countPerformedTodayByActionType;
	NSMapTable* _actions;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _firstDonationDate;
	id<REDonatedActionFilteredCacheDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<REDonatedActionFilteredCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<REDonatedActionFilteredCacheDelegate>)delegate;
-(void)setDelegate:(id<REDonatedActionFilteredCacheDelegate>)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchFirstPerformedActionDate:(/*^block*/id)arg1 ;
-(void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(BOOL)arg2 ;
-(void)donationActionStoreRemovedDonation:(id)arg1 ;
-(void)donationActionStoreRemovedDonationsFor:(id)arg1 ;
-(void)donationActionStoreRemoveAllDonations;
-(void)fetchDonationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_refreshAllDonations:(id)arg1 ;
-(id)_keyForAction:(id)arg1 ;
-(unsigned long long)_queue_performedCountForDonation:(id)arg1 ;
-(unsigned long long)_queue_performedTodayCountForBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 ;
-(void)_queue_removeAllData;
-(void)_queue_storeDonation:(id)arg1 ;
-(void)_queue_removeDonation:(id)arg1 ;
-(void)_queue_removeDonationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_incrementPerformedCountForDonation:(id)arg1 ;
-(void)fetchAllUniqueActions:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCountForAction:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)fetchPerformedCountForAction:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

