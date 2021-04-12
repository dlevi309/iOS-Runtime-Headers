/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/

#import <libobjc.A.dylib/SUKeybagInterfaceObserver.h>

@class NSUserDefaults, SUKeybagInterface, NSString;

@interface SUSUIAuthenticationInterface : NSObject <SUKeybagInterfaceObserver> {

	NSUserDefaults* _defaults;
	SUKeybagInterface* _keybag;
	BOOL _isController;
	BOOL _isPasscodeLocked;

}

@property (assign,setter=_setNumberOfFailedAuthenticationAttempts:,getter=_numberOfFailedAuthenticationAttempts,nonatomic) unsigned long long numberOfFailedAuthenticationAttempts; 
@property (assign,nonatomic) BOOL isController;                                                                                                                                                  //@synthesize isController=_isController - In the implementation block
@property (nonatomic,readonly) BOOL isBlocked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isBlocked;
-(id)init;
-(void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(BOOL)arg2 ;
-(id)initWithKeybag:(id)arg1 ;
-(unsigned long long)_currentFailedAttemptsCount;
-(void)_incrementFailedAttemptsCount;
-(void)_setNumberOfFailedAuthenticationAttempts:(unsigned long long)arg1 ;
-(void)resetAttempts;
-(void)_setPasscodeLocked:(BOOL)arg1 ;
-(BOOL)attemptAuthentication:(id)arg1 outBlocked:(BOOL*)arg2 ;
-(unsigned long long)_numberOfFailedAuthenticationAttempts;
-(BOOL)isController;
-(void)setIsController:(BOOL)arg1 ;
@end

