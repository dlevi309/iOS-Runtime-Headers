/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <Preferences/PSTableCell.h>

@class BTSDevice;

@interface BTTableSharingCell : PSTableCell {

	BTSDevice* _currentDevice;

}

@property (assign,nonatomic,__weak) BTSDevice * currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(BTSDevice *)currentDevice;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
@end

