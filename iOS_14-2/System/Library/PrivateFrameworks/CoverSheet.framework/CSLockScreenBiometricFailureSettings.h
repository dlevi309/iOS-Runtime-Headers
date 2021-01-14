/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenBiometricFailureSettings : PTSettings {

	BOOL _jiggleLock;
	BOOL _vibrate;
	BOOL _showPasscode;
	BOOL _waitUntilButtonUp;

}

@property (assign,nonatomic) BOOL jiggleLock;                     //@synthesize jiggleLock=_jiggleLock - In the implementation block
@property (assign,nonatomic) BOOL vibrate;                        //@synthesize vibrate=_vibrate - In the implementation block
@property (assign,nonatomic) BOOL showPasscode;                   //@synthesize showPasscode=_showPasscode - In the implementation block
@property (assign,nonatomic) BOOL waitUntilButtonUp;              //@synthesize waitUntilButtonUp=_waitUntilButtonUp - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)vibrate;
-(BOOL)showPasscode;
-(void)setVibrate:(BOOL)arg1 ;
-(BOOL)jiggleLock;
-(BOOL)waitUntilButtonUp;
-(void)setJiggleLock:(BOOL)arg1 ;
-(void)setShowPasscode:(BOOL)arg1 ;
-(void)setWaitUntilButtonUp:(BOOL)arg1 ;
@end

