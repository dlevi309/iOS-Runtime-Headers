/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKMarkNotificationsReadOperation : CKOperation {

	/*^block*/id _markNotificationsReadCompletionBlock;
	NSArray* _notificationIDs;
	NSMutableArray* _notificationIDsMarkedRead;
	NSMutableDictionary* _errorsByNotificationID;

}

@property (nonatomic,retain) NSMutableArray * notificationIDsMarkedRead;                //@synthesize notificationIDsMarkedRead=_notificationIDsMarkedRead - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByNotificationID;              //@synthesize errorsByNotificationID=_errorsByNotificationID - In the implementation block
@property (nonatomic,copy) NSArray * notificationIDs;                                   //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,copy) id markNotificationsReadCompletionBlock;                     //@synthesize markNotificationsReadCompletionBlock=_markNotificationsReadCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(NSMutableDictionary *)errorsByNotificationID;
-(void)setErrorsByNotificationID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)notificationIDsMarkedRead;
-(void)setNotificationIDsMarkedRead:(NSMutableArray *)arg1 ;
-(id)markNotificationsReadCompletionBlock;
-(void)setMarkNotificationsReadCompletionBlock:(id)arg1 ;
-(id)initWithNotificationIDsToMarkRead:(id)arg1 ;
@end

