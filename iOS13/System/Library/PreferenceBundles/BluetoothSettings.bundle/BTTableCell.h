/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface BTTableCell : PSTableCell {

	BOOL _hasLimitedConnectivity;
	int _state;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasLimitedConnectivity;                    //@synthesize hasLimitedConnectivity=_hasLimitedConnectivity - In the implementation block
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDeviceState:(int)arg1 ;
-(void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2 ;
-(BOOL)hasLimitedConnectivity;
-(void)setHasLimitedConnectivity:(BOOL)arg1 ;
@end

