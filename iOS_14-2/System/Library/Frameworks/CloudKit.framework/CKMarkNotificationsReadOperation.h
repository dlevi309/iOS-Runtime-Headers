/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKMarkNotificationsReadOperationCallbacks.h>

@class NSArray, NSMutableArray, NSMutableDictionary, CKMarkNotificationsReadOperationInfo;

@interface CKMarkNotificationsReadOperation : CKOperation <CKMarkNotificationsReadOperationCallbacks> {

	/*^block*/id _markNotificationsReadCompletionBlock;
	NSArray* _notificationIDs;
	NSMutableArray* _notificationIDsMarkedRead;
	NSMutableDictionary* _errorsByNotificationID;

}

@property (nonatomic,retain) NSMutableArray * notificationIDsMarkedRead;                                                //@synthesize notificationIDsMarkedRead=_notificationIDsMarkedRead - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByNotificationID;                                              //@synthesize errorsByNotificationID=_errorsByNotificationID - In the implementation block
@property (nonatomic,readonly) id<CKMarkNotificationsReadOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKMarkNotificationsReadOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * notificationIDs;                                                                   //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,copy) id markNotificationsReadCompletionBlock;                                                     //@synthesize markNotificationsReadCompletionBlock=_markNotificationsReadCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(NSMutableDictionary *)errorsByNotificationID;
-(NSMutableArray *)notificationIDsMarkedRead;
-(id)markNotificationsReadCompletionBlock;
-(void)setMarkNotificationsReadCompletionBlock:(id)arg1 ;
-(void)handleMarkNotificationReadCompletionForNotificationID:(id)arg1 error:(id)arg2 ;
-(void)setNotificationIDsMarkedRead:(NSMutableArray *)arg1 ;
-(id)initWithNotificationIDsToMarkRead:(id)arg1 ;
-(void)setErrorsByNotificationID:(NSMutableDictionary *)arg1 ;
@end

