/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCNotificationDispatcherDelegate.h>

@class SBNotificationBannerDestination, NSString;

@interface SBNCNotificationDispatcherDelegate : NSObject <NCNotificationDispatcherDelegate> {

	SBNotificationBannerDestination* _bannerDestination;

}

@property (assign,nonatomic,__weak) SBNotificationBannerDestination * bannerDestination;              //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBNotificationBannerDestination *)bannerDestination;
-(void)_requestAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)dispatcher:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 withParameters:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)dispatcher:(id)arg1 willExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 requestAuthentication:(BOOL)arg5 withParameters:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)dispatcher:(id)arg1 didExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 ;
-(void)dispatcher:(id)arg1 launchForegroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5 ;
-(void)dispatcher:(id)arg1 launchBackgroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5 ;
-(void)setBannerDestination:(SBNotificationBannerDestination *)arg1 ;
@end

