/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@class PPQuickTypeNavigationServant, PPQuickTypeContactsServant, PPQuickTypeEventsServant, PPQuickTypeConnectionsServant, _PASLock;

@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {

	PPQuickTypeNavigationServant* _navigationServant;
	PPQuickTypeContactsServant* _contactsServant;
	PPQuickTypeEventsServant* _eventsServant;
	PPQuickTypeConnectionsServant* _connectionsServant;
	_PASLock* _cacheLock;

}
+(id)sharedInstance;
-(void)_registerForNotifications;
-(void)hibernateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_clearCaches;
-(id)filterFeedback:(id)arg1 ;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(void)processfeedbackItems:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_shouldUseCacheWithCacheEntry:(id)arg1 query:(id)arg2 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_cachedQuickTypeItemsWithQuery:(id)arg1 ;
-(id)_recipientItemCacheKeyForRecipients:(id)arg1 ;
-(id)_quickTypeItemsFromServantsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_cachedQuickTypeItemsWithRecipients:(id)arg1 ;
-(id)_cacheEntryWithRecipients:(id)arg1 ;
@end

