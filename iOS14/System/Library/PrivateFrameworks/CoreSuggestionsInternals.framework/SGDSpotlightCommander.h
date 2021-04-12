/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue;
@class SGSqlEntityStore, NSObject;

@interface SGDSpotlightCommander : NSObject {

	id _deviceStateToken;
	SGSqlEntityStore* _store;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)_attemptToProcessRequests;
-(void)requestReimportForHistoricalDataRequest:(id)arg1 ;
-(BOOL)_unlocked;
-(void)_unregisterForLockStateChange;
-(id)_reimportQueryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 requestId:(unsigned long long)arg4 ;
-(id)queryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contentTypes:(id)arg4 ;
-(void)_reimportFromBundleId:(id)arg1 protectionClasses:(id)arg2 identifiers:(id)arg3 ;
-(id)_protectionClasses;
-(BOOL)_locked;
-(void)_registerForLockStateChange;
-(void)_issueCommand:(id)arg1 ;
-(void)requestReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)_executeReimportOfIdentifiers:(id)arg1 ;
@end

