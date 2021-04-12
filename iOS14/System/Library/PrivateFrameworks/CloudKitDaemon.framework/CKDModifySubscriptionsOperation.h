/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation {

	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableDictionary* _subscriptionsByServerID;

}

@property (nonatomic,retain) NSArray * subscriptionsToSave;                                                         //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;                                                     //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsByServerID;                                         //@synthesize subscriptionsByServerID=_subscriptionsByServerID - In the implementation block
@property (nonatomic,retain) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id saveCompletionBlock;                                                                  //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                                                //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(NSArray *)subscriptionsToSave;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(id)activityCreate;
-(void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)saveCompletionBlock;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(void)main;
-(NSMutableDictionary *)subscriptionsByServerID;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDsToDelete;
-(void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2 ;
-(void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2 ;
-(id)deleteCompletionBlock;
-(void)setSubscriptionsByServerID:(NSMutableDictionary *)arg1 ;
@end

