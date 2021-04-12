/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCurrentIssuesChecker.h>

@protocol FCCurrentIssuesChecker <NSObject>
@required
-(void)fetchUsersCurrentIssuesWithCompletion:(/*^block*/id)arg1;
-(void)fetchCurrentIssuesWithCompletion:(/*^block*/id)arg1;

@end


@protocol FCContentContext, FCBundleSubscriptionProviderType;
@class FCSubscriptionController, FCIssueReadingHistory, NSString;

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker> {

	id<FCContentContext> _context;
	FCSubscriptionController* _subscriptionController;
	FCIssueReadingHistory* _issueReadingHistory;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;

}

@property (nonatomic,retain) id<FCContentContext> context;                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCSubscriptionController * subscriptionController;                            //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,retain) FCIssueReadingHistory * issueReadingHistory;                                  //@synthesize issueReadingHistory=_issueReadingHistory - In the implementation block
@property (nonatomic,retain) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(FCSubscriptionController *)subscriptionController;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(FCIssueReadingHistory *)issueReadingHistory;
-(id)initWithContext:(id)arg1 subscriptionController:(id)arg2 issueReadingHistory:(id)arg3 bundleSubscriptionProvider:(id)arg4 ;
-(void)fetchUsersCurrentIssuesWithCompletion:(/*^block*/id)arg1 ;
-(id)_promiseBundleChannelIDs;
-(id)_promiseFollowedAndAutofavoriteChannelIDsWithChainingData:(id)arg1 ;
-(id)_promiseCurrentIssuesFromChannelIDs:(id)arg1 withChainingData:(id)arg2 ;
-(id)demoFollowedChannelIDs;
-(id)sortIssues:(id)arg1 basedOnTagIDs:(id)arg2 ;
-(id)_promiseFilterUnreadIssuesWithFromIssues:(id)arg1 withChainingdata:(id)arg2 ;
-(void)fetchCurrentIssuesWithCompletion:(/*^block*/id)arg1 ;
-(void)setSubscriptionController:(FCSubscriptionController *)arg1 ;
-(void)setIssueReadingHistory:(FCIssueReadingHistory *)arg1 ;
-(void)setBundleSubscriptionProvider:(id<FCBundleSubscriptionProviderType>)arg1 ;
@end

