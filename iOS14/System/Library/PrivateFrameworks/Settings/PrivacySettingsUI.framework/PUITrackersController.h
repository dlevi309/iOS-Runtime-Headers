/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PUITCCAccessController.h>

@class NSArray, ADTrackingTransparency;

@interface PUITrackersController : PUITCCAccessController {

	NSArray* _appSpecifiers;
	ADTrackingTransparency* _adTrackingTransparency;

}

@property (nonatomic,retain) NSArray * appSpecifiers;                                      //@synthesize appSpecifiers=_appSpecifiers - In the implementation block
@property (nonatomic,retain) ADTrackingTransparency * adTrackingTransparency;              //@synthesize adTrackingTransparency=_adTrackingTransparency - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(id)specifiers;
-(void)setAppSpecifiers:(NSArray *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)headerLinkWasTapped;
-(NSArray *)appSpecifiers;
-(ADTrackingTransparency *)adTrackingTransparency;
-(void)setAdTrackingTransparency:(ADTrackingTransparency *)arg1 ;
-(void)setAllowAsk:(id)arg1 specifier:(id)arg2 ;
-(id)allowAsk:(id)arg1 ;
-(BOOL)canChangeAllowAsk;
-(void)disableTCCForAllApps;
-(id)appsRequested:(id)arg1 ;
@end

