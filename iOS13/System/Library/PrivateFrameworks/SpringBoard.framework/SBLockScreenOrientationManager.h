/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAssistantObserver.h>

@class NSDate, NSString;

@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver> {

	NSDate* _updateForAmbiguousOrientationsAfterDate;
	BOOL _wasUILocked;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)assistantDidAppear:(id)arg1 ;
-(void)updateInterfaceOrientationWithRequestedOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(long long)arg1 ;
@end

