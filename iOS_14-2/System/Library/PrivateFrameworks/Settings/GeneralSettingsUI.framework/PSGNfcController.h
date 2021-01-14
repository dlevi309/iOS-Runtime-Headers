/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/NFHardwareEventListener.h>

@class PSSpecifier, NSString;

@interface PSGNfcController : PSListController <NFHardwareEventListener> {

	PSSpecifier* _groupSpecifier;

}

@property (nonatomic,retain) PSSpecifier * groupSpecifier;              //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)viewDidLoad;
-(void)didChangeRadioState:(BOOL)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)dealloc;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
-(BOOL)_setNfcEnable:(BOOL)arg1 ;
-(void)_refreshNfcRadioStateSetting;
-(void)_disableNfcRadio;
-(void)_enableNfcRadio;
-(id)nfcEnable;
-(void)setNfcEnable:(id)arg1 specifier:(id)arg2 ;
@end

