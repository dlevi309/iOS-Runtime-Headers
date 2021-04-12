/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSRemotePlistControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, WBSHistory, WBSPasswordEvaluator, WBSSavedPasswordAuditor, WBSSavedPasswordStore, NSUserDefaults, WBSRemotePlistController, WBSPasswordBreachHelperProxy, NSMutableSet, NSArray, NSMapTable, NSString;

@interface WBSPasswordWarningManager : NSObject <WBSRemotePlistControllerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	WBSHistory* _historyStore;
	os_unfair_lock_s _passwordEvaluatorLock;
	WBSPasswordEvaluator* _passwordEvaluator;
	WBSSavedPasswordAuditor* _passwordAuditor;
	WBSSavedPasswordStore* _passwordStore;
	NSUserDefaults* _userDefaults;
	WBSRemotePlistController* _topFraudTargetsRemotePlistController;
	WBSPasswordBreachHelperProxy* _passwordBreachHelperProxy;
	NSMutableSet* _historyHighLevelDomains;
	os_unfair_lock_s _cachedDataLock;
	BOOL _updateInProgress;
	NSArray* _cachedWarnings;
	NSMapTable* _cachedWarningsForSavedPasswords;

}

@property (nonatomic,readonly) WBSSavedPasswordAuditor * passwordAuditor;                    //@synthesize passwordAuditor=_passwordAuditor - In the implementation block
@property (nonatomic,readonly) WBSPasswordEvaluator * passwordEvaluator; 
@property (nonatomic,readonly) long long numberOfWarningsWithSpecifiedPriority; 
@property (nonatomic,readonly) BOOL hasUnacknowledgedHighPriorityWarnings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_scoredWarningForSavedPassword:(id)arg1 topFraudTargets:(id)arg2 contextKitCategories:(long long)arg3 breachResultRecord:(id)arg4 ;
-(void)_scoreWarnings:(id)arg1 contextKitCategoryMap:(id)arg2 topFraudTargets:(id)arg3 ;
-(unsigned long long)_issuesForPassword:(id)arg1 withWeakPasswordEvaluation:(id)arg2 breachResultRecord:(id)arg3 ;
-(id)_localizedShortWarningDescriptionForIssueTypes:(unsigned long long)arg1 ;
-(void)_sortWarningsBySeverity:(id)arg1 intoHighPriorityBucket:(id)arg2 intoStandardPriorityBucket:(id)arg3 unspecifiedSeverityBucket:(id)arg4 savedPasswordMap:(id)arg5 highPriorityWarningHashes:(id)arg6 ;
-(void)_updateUserDefaultsWithWarningHashes:(id)arg1 ;
-(id)_warningForSavedPassword:(id)arg1 breachResultRecord:(id)arg2 ;
-(WBSPasswordEvaluator *)passwordEvaluator;
-(id)_localizedLongWarningDescriptionStringsForPassword:(id)arg1 weakPasswordEvaluation:(id)arg2 issueTypes:(unsigned long long)arg3 ;
-(long long)_scoreForSavedPassword:(id)arg1 issueTypes:(unsigned long long)arg2 topFraudTargets:(id)arg3 contextKitCategories:(long long)arg4 ;
-(BOOL)_historyContainsItemForDomain:(id)arg1 ;
-(id)_passwordBreachHelperProxy;
-(id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2 userDefaults:(id)arg3 history:(id)arg4 ;
-(long long)numberOfWarningsWithSpecifiedPriority;
-(void)preWarmWarningsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeWarningForSavedPassword:(id)arg1 ;
-(void)getWarningForSavedPassword:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasUnacknowledgedHighPriorityWarnings;
-(void)acknowledgeHighPriorityWarnings;
-(WBSSavedPasswordAuditor *)passwordAuditor;
-(void)dealloc;
-(void)getAllWarningsForcingUpdate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getBreachResultRecordsForPasswords:(id)arg1 startSessionIfNecessary:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

