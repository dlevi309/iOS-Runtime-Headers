/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@interface _KSDeviceStateMonitor : NSObject {

	BOOL _isContentProtectionAvailable;

}

@property (assign,nonatomic) BOOL isContentProtectionAvailable;              //@synthesize isContentProtectionAvailable=_isContentProtectionAvailable - In the implementation block
+(id)deviceStateMonitor;
+(BOOL)isRunningOnInternalBuild;
-(id)init;
-(void)handleKeyBagLockNotification;
-(BOOL)isContentProtectionAvailable;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)isDataAvailableForClassC;
-(void)dealloc;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(void)setIsContentProtectionAvailable:(BOOL)arg1 ;
@end

