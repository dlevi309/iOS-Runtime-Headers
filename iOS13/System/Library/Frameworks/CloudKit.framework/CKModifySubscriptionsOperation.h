/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation {

	/*^block*/id _modifySubscriptionsCompletionBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableArray* _savedSubscriptions;
	NSMutableArray* _deletedSubscriptionIDs;
	NSMutableDictionary* _subscriptionsBySubscriptionIDs;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,retain) NSMutableArray * savedSubscriptions;                               //@synthesize savedSubscriptions=_savedSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedSubscriptionIDs;                           //@synthesize deletedSubscriptionIDs=_deletedSubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionIDs;              //@synthesize subscriptionsBySubscriptionIDs=_subscriptionsBySubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                          //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToSave;                                       //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDsToDelete;                                   //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifySubscriptionsCompletionBlock;                               //@synthesize modifySubscriptionsCompletionBlock=_modifySubscriptionsCompletionBlock - In the implementation block
-(id)init;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(void)setModifySubscriptionsCompletionBlock:(id)arg1 ;
-(id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(id)modifySubscriptionsCompletionBlock;
-(NSMutableDictionary *)subscriptionsBySubscriptionIDs;
-(NSMutableDictionary *)subscriptionErrors;
-(NSMutableArray *)deletedSubscriptionIDs;
-(NSMutableArray *)savedSubscriptions;
-(void)setSavedSubscriptions:(NSMutableArray *)arg1 ;
-(void)setDeletedSubscriptionIDs:(NSMutableArray *)arg1 ;
-(void)setSubscriptionsBySubscriptionIDs:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
@end

