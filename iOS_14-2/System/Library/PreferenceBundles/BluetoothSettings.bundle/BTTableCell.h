/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIActivityIndicatorView *)spinner;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setDeviceState:(int)arg1 ;
-(void)dealloc;
-(BOOL)hasLimitedConnectivity;
-(void)setHasLimitedConnectivity:(BOOL)arg1 ;
@end

