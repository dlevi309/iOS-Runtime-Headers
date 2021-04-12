/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPAlert : NSObject {

	/*^block*/id _completion;
	CFUserNotificationRef _userNotification;

}

@property (assign,nonatomic) CFUserNotificationRef userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)message;
-(id)alternateButtonTitle;
-(void)show;
-(id)completion;
-(id)defaultButtonTitle;
-(CFUserNotificationRef)userNotification;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(id)otherButtonTitle;
-(id)title;
-(void)dealloc;
-(void)defaultResponse;
-(void)otherResponse;
-(void)alternateResponse;
-(void)showOnViewController:(id)arg1 ;
@end

