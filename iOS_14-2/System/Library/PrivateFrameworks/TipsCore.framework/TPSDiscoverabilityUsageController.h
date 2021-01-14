/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@class TPSDuetDataProvider, NSString, NSSortDescriptor;

@interface TPSDiscoverabilityUsageController : NSObject {

	TPSDuetDataProvider* _duetProvider;
	NSString* _currentOSBuildVersion;
	NSString* _currentOSMajorVersion;
	NSSortDescriptor* _eventSortDescriptor;

}
+(id)sharedInstance;
-(void)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(void)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 error:(id*)arg3 ;
-(id)_metaDataForUsageEvent:(id)arg1 ;
-(id)firstEventMatchingUsageEventState:(long long)arg1 fromEvents:(id)arg2 ;
-(id)_discoverabilityStream;
-(id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(BOOL*)arg4 error:(id*)arg5 ;
-(id)_majorVersionForBuildVersion:(id)arg1 ;
-(id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 error:(id*)arg5 ;
-(void)addContentUsageEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_majorVersionFilterPredicate;
-(id)_initWithDirectory:(id)arg1 ;
-(id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 fromEvents:(id)arg4 ;
-(void)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_lastOfferedDateFilterPredicate;
-(void)_commonInit;
-(id)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(BOOL*)arg4 error:(id*)arg5 ;
-(id)_eventsPredicateForContentID:(id)arg1 sinceDate:(id)arg2 ;
@end

