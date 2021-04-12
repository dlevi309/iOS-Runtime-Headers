/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class NSString;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver> {

	/*^block*/id _launchSOSCompletion;

}

@property (nonatomic,copy) id launchSOSCompletion;                  //@synthesize launchSOSCompletion=_launchSOSCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1 ;
+(id)sharedInCallUILauncher;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)setLaunchSOSCompletion:(id)arg1 ;
-(id)launchSOSCompletion;
-(void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

