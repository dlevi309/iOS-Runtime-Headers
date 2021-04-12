/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAssistantObserver.h>

@class NSDate, NSString;

@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver> {

	NSDate* _updateForAmbiguousOrientationsAfterDate;
	BOOL _wasUILocked;
	long long _lastOrientation;
	long long _lastValidOrientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)assistantDidAppear:(id)arg1 ;
-(void)_updateCacheForDeviceOrientation:(long long)arg1 ;
-(void)updateInterfaceOrientationWithRequestedOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(long long)arg1 ;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_deviceOrientationChanged:(id)arg1 ;
@end

