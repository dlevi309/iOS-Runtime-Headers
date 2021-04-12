/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSArray * notificationIDs;                                //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorByNotificationID;              //@synthesize errorByNotificationID=_errorByNotificationID - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulNotificationIDs;                 //@synthesize successfulNotificationIDs=_successfulNotificationIDs - In the implementation block
@property (nonatomic,copy) id notificationMarkedRead;                                  //@synthesize notificationMarkedRead=_notificationMarkedRead - In the implementation block
+(long long)isPredominatelyDownload;
-(void)main;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setNotificationMarkedRead:(id)arg1 ;
-(NSMutableSet *)successfulNotificationIDs;
-(NSMutableDictionary *)errorByNotificationID;
-(void)_handleNotificationID:(id)arg1 withResponse:(id)arg2 ;
-(id)notificationMarkedRead;
-(void)setErrorByNotificationID:(NSMutableDictionary *)arg1 ;
-(void)setSuccessfulNotificationIDs:(NSMutableSet *)arg1 ;
@end

