/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class STDeviceBedtime, STAllowance, NSString;

@interface STIntroductionModel : NSObject {

	BOOL _deviceForChild;
	STDeviceBedtime* _bedtime;
	STAllowance* _allowance;
	NSString* _parentalControlsPasscode;
	NSString* _recoveryAltDSID;

}

@property (assign) BOOL deviceForChild;                              //@synthesize deviceForChild=_deviceForChild - In the implementation block
@property (retain) STDeviceBedtime * bedtime;                        //@synthesize bedtime=_bedtime - In the implementation block
@property (retain) STAllowance * allowance;                          //@synthesize allowance=_allowance - In the implementation block
@property (retain) NSString * parentalControlsPasscode;              //@synthesize parentalControlsPasscode=_parentalControlsPasscode - In the implementation block
@property (copy) NSString * recoveryAltDSID;                         //@synthesize recoveryAltDSID=_recoveryAltDSID - In the implementation block
-(STAllowance *)allowance;
-(void)setAllowance:(STAllowance *)arg1 ;
-(void)setRecoveryAltDSID:(NSString *)arg1 ;
-(NSString *)recoveryAltDSID;
-(STDeviceBedtime *)bedtime;
-(void)setBedtime:(STDeviceBedtime *)arg1 ;
-(NSString *)parentalControlsPasscode;
-(BOOL)deviceForChild;
-(void)setDeviceForChild:(BOOL)arg1 ;
-(void)setParentalControlsPasscode:(NSString *)arg1 ;
@end

