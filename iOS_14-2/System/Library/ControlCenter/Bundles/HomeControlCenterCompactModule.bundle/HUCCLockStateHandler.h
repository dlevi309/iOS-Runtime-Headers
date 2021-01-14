/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>

@protocol HUCCLockStateHandlerDelegate;
@class NSString;

@interface HUCCLockStateHandler : NSObject <HFHomeManagerObserver> {

	int _keybagLockStatusNotifyToken;
	id<HUCCLockStateHandlerDelegate> _delegate;

}

@property (assign,nonatomic) int keybagLockStatusNotifyToken;                               //@synthesize keybagLockStatusNotifyToken=_keybagLockStatusNotifyToken - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCLockStateHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeviceUnlocked;
-(id<HUCCLockStateHandlerDelegate>)delegate;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2 ;
-(void)setDelegate:(id<HUCCLockStateHandlerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)dealloc;
-(void)_unregisterKeybagLockStatusNotifications;
-(void)_registerKeybagLockStatusNotifications;
-(void)_updateAccessAllowedForLockState;
-(int)keybagLockStatusNotifyToken;
-(void)setKeybagLockStatusNotifyToken:(int)arg1 ;
-(BOOL)_isAccessAllowedForCurrentLockState;
-(void)_updateRegistrationForLockStatusNotification;
@end

