/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSArray;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {

	BOOL _isFetchAllSubscriptionsOperation;
	NSMutableArray* _subscriptions;
	/*^block*/id _subscriptionFetchedProgressBlock;
	NSArray* _subscriptionIDs;

}

@property (nonatomic,retain) NSMutableArray * subscriptions;                                                       //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDs;                                                            //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;                                                //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,retain) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id subscriptionFetchedProgressBlock;                                                    //@synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(id)activityCreate;
-(NSMutableArray *)subscriptions;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDs;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3 ;
-(void)main;
-(void)setSubscriptionFetchedProgressBlock:(id)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)subscriptionFetchedProgressBlock;
@end

