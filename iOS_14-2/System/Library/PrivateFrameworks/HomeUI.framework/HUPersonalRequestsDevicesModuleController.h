/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class HUPersonalRequestsDevicesItemModule, NSString;

@interface HUPersonalRequestsDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate, UITextViewDelegate>

@property (nonatomic,readonly) HUPersonalRequestsDevicesItemModule * module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(id)initWithModule:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithModule:(id)arg1 host:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(id)setPersonalRequestsDevices:(id)arg1 ;
-(id)turnOnPersonalRequestsForAllMultiUserCapableDevices;
-(void)_presentConfirmationForEnablingPersonalRequestsForItem:(id)arg1 cell:(id)arg2 didTurnOn:(BOOL)arg3 showLanguageVariant:(BOOL)arg4 ;
-(void)_turnOnPersonalRequestForItem:(id)arg1 cell:(id)arg2 didTurnOn:(BOOL)arg3 ;
-(BOOL)_isCurrentDeviceCandidateForLocationDevice;
-(id)_promptToChangeLocationDeviceIfNecessary;
-(id)_promptToEnableSiriIfNecessary;
-(void)_presentAlert:(id)arg1 ;
-(id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg1 ;
-(id)_preflightEnablingPersonalRequests;
-(void)_togglePersonalRequestStateForItem:(id)arg1 ;
@end

