/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSPasswordBreachContext, WBSPasswordBreachQueuedPasswordBagManager, WBSPasswordBreachRequestManager;

@interface WBSPasswordBreachChecker : NSObject {

	WBSPasswordBreachContext* _context;
	WBSPasswordBreachQueuedPasswordBagManager* _bagManager;
	WBSPasswordBreachRequestManager* _requestManager;

}
-(void)_mergeResultsByUUID:(id)arg1 intoResultsByPersistentIdentifier:(id)arg2 usingQueuedPasswordsbyUUID:(id)arg3 ;
-(void)_checkLowFrequencyBatchesWithBagManager:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkHighFrequencyBucketForPasswords:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 bagManager:(id)arg2 ;
-(void)checkPasswordBatchesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

