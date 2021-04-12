/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SharingUI-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/SFWirelessSettingsControllerDelegate.h>

@class UIAlertController, SFWirelessSettingsController, NSString;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate, SFWirelessSettingsControllerDelegate> {

	id _delegate;
	BOOL _isVisible;
	BOOL _isLegacyDevice;
	BOOL _isLegacyModeEnabled;
	BOOL _isLegacyModeSettable;
	SFOperationRef _controller;
	id _alertControllerDelegate;
	UIAlertController* _alertController;
	SFWirelessSettingsController* _settingsController;
	long long _discoverableMode;

}

@property (getter=isVisible,readonly) BOOL visible; 
@property (assign) long long discoverableMode; 
@property (getter=isLegacyDevice,readonly) BOOL legacyDevice; 
@property (getter=isLegacyModeEnabled) BOOL legacyModeEnabled; 
@property (getter=isLegacyModeSettable,readonly) BOOL legacyModeSettable; 
@property (__weak) id<SFAirDropDiscoveryControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<SFAirDropDiscoveryAlertControllerDelegate> alertControllerDelegate;              //@synthesize alertControllerDelegate=_alertControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SFAirDropDiscoveryControllerDelegate>)delegate;
-(id<SFAirDropDiscoveryAlertControllerDelegate>)alertControllerDelegate;
-(void)setDelegate:(id<SFAirDropDiscoveryControllerDelegate>)arg1 ;
-(BOOL)isVisible;
-(void)invalidate;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setAlertControllerDelegate:(id<SFAirDropDiscoveryAlertControllerDelegate>)arg1 ;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(void)dealloc;
-(long long)discoverableMode;
-(void)setDiscoverableMode:(long long)arg1 ;
-(long long)operationDiscoverableModeToInteger:(id)arg1 ;
-(void)updateAlertControllerTitle;
-(id)discoverableModeToString:(long long)arg1 ;
-(BOOL)isLegacyDevice;
-(BOOL)isLegacyModeEnabled;
-(void)setLegacyModeEnabled:(BOOL)arg1 ;
-(BOOL)isLegacyModeSettable;
-(id)discoverableModeAlertController;
@end

