/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/TPProcessObserverDelegate.h>

@class TPProcessObserver, NSString;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, TPProcessObserverDelegate> {

	TPProcessObserver* _processObserver;

}

@property (nonatomic,retain) TPProcessObserver * processObserver;              //@synthesize processObserver=_processObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1 ;
+(id)sharedInCallUILauncher;
-(void)processObserver:(id)arg1 bundleIdentifier:(id)arg2 didUpdateApplicationRunning:(BOOL)arg3 ;
-(TPProcessObserver *)processObserver;
-(void)setProcessObserver:(TPProcessObserver *)arg1 ;
-(void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

