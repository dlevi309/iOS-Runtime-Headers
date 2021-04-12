/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@class NSMapTable;

@interface HMDRemoteMessageNotifications : HMFObject {

	id<HMFLocking> _lock;
	NSMapTable* _sessionNotificationPayloads;

}

@property (nonatomic,retain) NSMapTable * sessionNotificationPayloads;              //@synthesize sessionNotificationPayloads=_sessionNotificationPayloads - In the implementation block
+(void)initialize;
+(id)messagesWithNotificationResponses;
+(BOOL)messageExpectsNotificationResponse:(id)arg1 ;
-(id)init;
-(id)description;
-(NSMapTable *)sessionNotificationPayloads;
-(id)_notificationPayloadsForDevice:(id)arg1 ;
-(void)addNotificationPayload:(id)arg1 identifier:(id)arg2 device:(id)arg3 ;
-(void)removeNotificationPayloadWithIdentifier:(id)arg1 device:(id)arg2 ;
-(id)notificationPayloadWithIdentifier:(id)arg1 device:(id)arg2 ;
-(void)clearNotificationsForDevice:(id)arg1 ;
-(void)setSessionNotificationPayloads:(NSMapTable *)arg1 ;
@end

