/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(STDeviceBedtime *)bedtime;
-(STAllowance *)allowance;
-(void)setBedtime:(STDeviceBedtime *)arg1 ;
-(void)setRecoveryAltDSID:(NSString *)arg1 ;
-(void)setAllowance:(STAllowance *)arg1 ;
-(NSString *)recoveryAltDSID;
-(NSString *)parentalControlsPasscode;
-(BOOL)deviceForChild;
-(void)setDeviceForChild:(BOOL)arg1 ;
-(void)setParentalControlsPasscode:(NSString *)arg1 ;
@end

