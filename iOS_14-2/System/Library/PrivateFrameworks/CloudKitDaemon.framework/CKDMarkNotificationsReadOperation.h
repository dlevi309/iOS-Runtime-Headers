/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDMarkNotificationsReadOperation : CKDOperation {

	/*^block*/id _notificationMarkedRead;
	NSArray* _notificationIDs;
	NSMutableDictionary* _errorByNotificationID;
	NSMutableSet* _successfulNotificationIDs;

}

@property (nonatomic,retain) NSArray * notificationIDs;                                                               //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorByNotificationID;                                             //@synthesize errorByNotificationID=_errorByNotificationID - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulNotificationIDs;                                                //@synthesize successfulNotificationIDs=_successfulNotificationIDs - In the implementation block
@property (nonatomic,retain) id<CKMarkNotificationsReadOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id notificationMarkedRead;                                                                 //@synthesize notificationMarkedRead=_notificationMarkedRead - In the implementation block
+(long long)isPredominatelyDownload;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(void)setNotificationMarkedRead:(id)arg1 ;
-(NSMutableSet *)successfulNotificationIDs;
-(NSMutableDictionary *)errorByNotificationID;
-(void)_handleNotificationID:(id)arg1 withResponse:(id)arg2 ;
-(id)notificationMarkedRead;
-(void)setErrorByNotificationID:(NSMutableDictionary *)arg1 ;
-(void)setSuccessfulNotificationIDs:(NSMutableSet *)arg1 ;
@end

