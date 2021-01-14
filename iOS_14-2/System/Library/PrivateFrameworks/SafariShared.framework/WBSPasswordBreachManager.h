/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_os_transaction, WBSPasswordBreachCredentialSource;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, WBSPasswordBreachContext, WBSPasswordBreachChecker, WBSPasswordBreachResults, WBSPasswordBreachQueuedPasswordBagManager;

@interface WBSPasswordBreachManager : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_os_transaction> _sessionTransaction;
	WBSPasswordBreachContext* _context;
	id<WBSPasswordBreachCredentialSource> _credentialSource;
	WBSPasswordBreachChecker* _checker;
	WBSPasswordBreachResults* _results;
	WBSPasswordBreachQueuedPasswordBagManager* _bagManager;

}
+(void)_getStandardContextWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)isPasswordBreachDetectionOn;
+(void)setPasswordBreachDetectionOn:(BOOL)arg1 ;
+(id)testableManagerWithTestCredentialSource:(id)arg1 store:(id)arg2 configuration:(id)arg3 ;
+(void)getSharedManagerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_checker;
-(id)initWithContext:(id)arg1 credentialSource:(id)arg2 ;
-(BOOL)_canPerformSessionIgnoringMinimumDelay:(BOOL)arg1 ;
-(void)_completeSessionWithResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addRecentlyBreachedNotificationIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)recentlyBreachedSavedPasswords;
-(void)performNextSessionLookupIgnoringMinimumDelay:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)resultRecordsForQueries:(id)arg1 ;
-(void)addResultRecords:(id)arg1 ;
-(id)recentlyBreachedResultRecords;
-(void)clearRecentlyBreachedResultRecords;
@end

