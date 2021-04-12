/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKModifySubscriptionsOperationCallbacks.h>

@class NSArray, NSMutableArray, NSMutableDictionary, CKModifySubscriptionsOperationInfo;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation <CKModifySubscriptionsOperationCallbacks> {

	/*^block*/id _modifySubscriptionsCompletionBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableArray* _savedSubscriptions;
	NSMutableArray* _deletedSubscriptionIDs;
	NSMutableDictionary* _subscriptionsBySubscriptionIDs;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,retain) NSMutableArray * savedSubscriptions;                                                     //@synthesize savedSubscriptions=_savedSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedSubscriptionIDs;                                                 //@synthesize deletedSubscriptionIDs=_deletedSubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionIDs;                                    //@synthesize subscriptionsBySubscriptionIDs=_subscriptionsBySubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                                                //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (nonatomic,readonly) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKModifySubscriptionsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * subscriptionsToSave;                                                             //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDsToDelete;                                                         //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifySubscriptionsCompletionBlock;                                                     //@synthesize modifySubscriptionsCompletionBlock=_modifySubscriptionsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(NSArray *)subscriptionsToSave;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(NSMutableDictionary *)subscriptionErrors;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(id)modifySubscriptionsCompletionBlock;
-(void)handleSubscriptionSaveForSubscriptionID:(id)arg1 error:(id)arg2 ;
-(NSMutableArray *)savedSubscriptions;
-(void)setSavedSubscriptions:(NSMutableArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)handleSubscriptionDeleteForSubscriptionID:(id)arg1 error:(id)arg2 ;
-(NSMutableArray *)deletedSubscriptionIDs;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionsBySubscriptionIDs:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(NSMutableDictionary *)subscriptionsBySubscriptionIDs;
-(NSArray *)subscriptionIDsToDelete;
-(void)setDeletedSubscriptionIDs:(NSMutableArray *)arg1 ;
-(id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 ;
-(void)setModifySubscriptionsCompletionBlock:(id)arg1 ;
@end

