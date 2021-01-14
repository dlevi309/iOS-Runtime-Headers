/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class UNNotificationAction;

@interface CUUserNotificationCustomAction : NSObject {

	UNNotificationAction* _action;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UNNotificationAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
-(void)setHandler:(id)arg1 ;
-(UNNotificationAction *)action;
-(void)setAction:(UNNotificationAction *)arg1 ;
-(id)handler;
@end

