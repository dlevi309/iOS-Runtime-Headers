/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPAlert : NSObject {

	/*^block*/id _completion;
	CFUserNotificationRef _userNotification;

}

@property (assign,nonatomic) CFUserNotificationRef userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(id)title;
-(id)message;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)show;
-(id)defaultButtonTitle;
-(id)alternateButtonTitle;
-(id)otherButtonTitle;
-(void)defaultResponse;
-(void)otherResponse;
-(CFUserNotificationRef)userNotification;
-(void)alternateResponse;
-(void)showOnViewController:(id)arg1 ;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
@end

