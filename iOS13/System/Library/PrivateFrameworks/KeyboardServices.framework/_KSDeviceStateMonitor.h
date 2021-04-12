/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@interface _KSDeviceStateMonitor : NSObject {

	BOOL _isContentProtectionAvailable;

}

@property (assign,nonatomic) BOOL isContentProtectionAvailable;              //@synthesize isContentProtectionAvailable=_isContentProtectionAvailable - In the implementation block
+(BOOL)isRunningOnInternalBuild;
+(id)deviceStateMonitor;
-(id)init;
-(void)dealloc;
-(BOOL)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)isContentProtectionAvailable;
-(void)setIsContentProtectionAvailable:(BOOL)arg1 ;
@end

