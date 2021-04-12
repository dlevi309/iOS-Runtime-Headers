/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUIEnrollViewController.h>

@protocol OS_os_log;
@class NSObject;

@interface BKUIBundleEnrollViewController : BiometricKitUIEnrollViewController {

	long long _shortScanCount;
	long long _maxShortScanCount;
	NSObject*<OS_os_log> bkui_bundle_enroll_view_controller_log;

}
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)afterStatusMessage:(unsigned)arg1 ;
-(id)bundleAlertView;
@end

