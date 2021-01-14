/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubscriptionID:(NSString *)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setNotificationInfo:(CKNotificationInfo *)arg1 ;
-(NSString *)subscriptionID;
-(CKNotificationInfo *)notificationInfo;
-(id)saveDatabaseSubscriptionCompletionBlock;
-(void)setSaveDatabaseSubscriptionCompletionBlock:(id)arg1 ;
@end

