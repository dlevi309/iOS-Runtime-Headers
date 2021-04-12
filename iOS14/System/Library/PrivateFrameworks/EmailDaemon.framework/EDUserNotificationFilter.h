/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EMBlockedSenderReader, EMVIPReader;
@interface EDUserNotificationFilter : NSObject {

	id<EMBlockedSenderReader> _blockedSenderReader;
	id<EMVIPReader> _vipReader;

}

@property (nonatomic,readonly) id<EMBlockedSenderReader> blockedSenderReader;              //@synthesize blockedSenderReader=_blockedSenderReader - In the implementation block
@property (nonatomic,readonly) id<EMVIPReader> vipReader;                                  //@synthesize vipReader=_vipReader - In the implementation block
-(BOOL)_messageNeedsNotification:(id)arg1 ;
-(id<EMBlockedSenderReader>)blockedSenderReader;
-(id<EMVIPReader>)vipReader;
-(id)initWithBlockedSenderReader:(id)arg1 vipReader:(id)arg2 ;
-(id)messagesNeedingNotification:(id)arg1 ;
@end

