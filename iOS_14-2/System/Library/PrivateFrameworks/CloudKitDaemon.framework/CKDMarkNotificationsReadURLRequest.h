/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest {

	/*^block*/id _notificationMarkedReadProgressBlock;
	NSArray* _notificationIDs;
	NSMutableDictionary* _notificationIDsByRequestID;

}

@property (nonatomic,retain) NSArray * notificationIDs;                                     //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationIDsByRequestID;              //@synthesize notificationIDsByRequestID=_notificationIDsByRequestID - In the implementation block
@property (nonatomic,copy) id notificationMarkedReadProgressBlock;                          //@synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock - In the implementation block
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(id)initWithOperation:(id)arg1 notificationIDsToMarkRead:(id)arg2 ;
-(void)setNotificationMarkedReadProgressBlock:(id)arg1 ;
-(NSMutableDictionary *)notificationIDsByRequestID;
-(void)setNotificationIDsByRequestID:(NSMutableDictionary *)arg1 ;
-(id)notificationMarkedReadProgressBlock;
@end

