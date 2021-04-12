/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSArray * subscriptionsToSave;                              //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;                          //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsByServerID;              //@synthesize subscriptionsByServerID=_subscriptionsByServerID - In the implementation block
@property (nonatomic,copy) id saveCompletionBlock;                                       //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                     //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)main;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(id)saveCompletionBlock;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(id)deleteCompletionBlock;
-(void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)subscriptionsByServerID;
-(void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2 ;
-(void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2 ;
-(void)setSubscriptionsByServerID:(NSMutableDictionary *)arg1 ;
@end

