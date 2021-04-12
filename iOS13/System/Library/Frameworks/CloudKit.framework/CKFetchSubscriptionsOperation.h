/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation {

	BOOL _isFetchAllSubscriptionsOperation;
	/*^block*/id _fetchSubscriptionCompletionBlock;
	NSArray* _subscriptionIDs;
	NSArray* _subscriptions;
	NSMutableDictionary* _subscriptionsBySubscriptionID;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,retain) NSArray * subscriptions;                                          //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionID;              //@synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                         //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;                            //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDs;                                          //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,copy) id fetchSubscriptionCompletionBlock;                                //@synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock - In the implementation block
+(id)fetchAllSubscriptionsOperation;
-(id)init;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(void)setFetchSubscriptionCompletionBlock:(id)arg1 ;
-(NSMutableDictionary *)subscriptionErrors;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)fetchSubscriptionCompletionBlock;
-(NSMutableDictionary *)subscriptionsBySubscriptionID;
-(void)setSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
@end

