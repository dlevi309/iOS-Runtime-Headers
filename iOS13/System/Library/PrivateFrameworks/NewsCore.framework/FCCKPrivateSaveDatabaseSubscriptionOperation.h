/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSString, CKNotificationInfo;

@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation {

	NSString* _subscriptionID;
	CKNotificationInfo* _notificationInfo;
	/*^block*/id _saveDatabaseSubscriptionCompletionBlock;

}

@property (nonatomic,copy) NSString * subscriptionID;                               //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,copy) CKNotificationInfo * notificationInfo;                   //@synthesize notificationInfo=_notificationInfo - In the implementation block
@property (nonatomic,copy) id saveDatabaseSubscriptionCompletionBlock;              //@synthesize saveDatabaseSubscriptionCompletionBlock=_saveDatabaseSubscriptionCompletionBlock - In the implementation block
-(void)setNotificationInfo:(CKNotificationInfo *)arg1 ;
-(CKNotificationInfo *)notificationInfo;
-(NSString *)subscriptionID;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)saveDatabaseSubscriptionCompletionBlock;
-(void)setSaveDatabaseSubscriptionCompletionBlock:(id)arg1 ;
@end

