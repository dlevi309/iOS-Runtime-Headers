/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BTSDevice *)currentDevice;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(id)listeningMode;
-(BOOL)setListeningMode:(id)arg1 ;
-(void)bluetoothListeningModeButtonDidUpdateValue:(id)arg1 ;
-(int)accessoryListeningModeSupport;
-(void)setAccessoryListeningModeSupport:(int)arg1 ;
@end

