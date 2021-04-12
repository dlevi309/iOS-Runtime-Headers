/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchSubscriptionsOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKFetchSubscriptionsOperationInfo;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks> {

	BOOL _isFetchAllSubscriptionsOperation;
	/*^block*/id _fetchSubscriptionCompletionBlock;
	NSArray* _subscriptionIDs;
	NSArray* _subscriptions;
	NSMutableDictionary* _subscriptionsBySubscriptionID;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,readonly) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchSubscriptionsOperationInfo * operationInfo; 
@property (nonatomic,retain) NSArray * subscriptions;                                                                //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionID;                                    //@synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                                               //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;                                                  //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDs;                                                                //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,copy) id fetchSubscriptionCompletionBlock;                                                      //@synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock - In the implementation block
+(id)fetchAllSubscriptionsOperation;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(id)activityCreate;
-(NSArray *)subscriptions;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(void)performCKOperation;
-(id)init;
-(NSArray *)subscriptionIDs;
-(NSMutableDictionary *)subscriptionErrors;
-(void)handleSubscriptionFetchForSubscriptionID:(id)arg1 subscription:(id)arg2 error:(id)arg3 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)setSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setFetchSubscriptionCompletionBlock:(id)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)subscriptionsBySubscriptionID;
-(id)fetchSubscriptionCompletionBlock;
-(id)initWithSubscriptionIDs:(id)arg1 ;
@end

