/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <Preferences/PSTableCell.h>

@class MediaControlsBluetoothListeningModeButton, NSMutableArray, BTSDevice;

@interface BTAccessoryListeningModeControl : PSTableCell {

	MediaControlsBluetoothListeningModeButton* _listeningModeButton;
	NSMutableArray* _listeningModesArray;
	int _accessoryListeningModeSupport;
	BTSDevice* _currentDevice;

}

@property (assign,nonatomic) int accessoryListeningModeSupport;              //@synthesize accessoryListeningModeSupport=_accessoryListeningModeSupport - In the implementation block
@property (assign,nonatomic,__weak) BTSDevice * currentDevice;               //@synthesize currentDevice=_currentDevice - In the implementation block
+(double)preferredHeight;
+(long long)cellStyle;
-(BOOL)becomeFirstResponder;
-(BTSDevice *)currentDevice;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)setListeningMode:(id)arg1 ;
-(id)listeningMode;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)bluetoothListeningModeButtonDidUpdateValue:(id)arg1 ;
-(int)accessoryListeningModeSupport;
-(void)setAccessoryListeningModeSupport:(int)arg1 ;
@end

