/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class NSNumberFormatter, UILabel, UIImageView, HACCBatteryGroupView, BCBatteryDevice, BCBatteryDeviceController, NSString;

@interface HACCStatusView : UIControl <BCBatteryDeviceObserving, HACCContentModule> {

	NSNumberFormatter* _numberFormatter;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UILabel* _titleLabel;
	UIImageView* _iconView;
	HACCBatteryGroupView* _batteryView;
	BCBatteryDevice* _batteryDevice;
	BCBatteryDeviceController* _batteryController;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                     //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HACCBatteryGroupView * batteryView;                         //@synthesize batteryView=_batteryView - In the implementation block
@property (nonatomic,retain) BCBatteryDevice * batteryDevice;                            //@synthesize batteryDevice=_batteryDevice - In the implementation block
@property (nonatomic,retain) BCBatteryDeviceController * batteryController;              //@synthesize batteryController=_batteryController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
+(id)_backgroundUpdateQueue;
-(UILabel *)titleLabel;
-(BOOL)enabled;
-(id)accessibilityLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setModule:(unsigned long long)arg1 ;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(id)accessibilityValue;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setBatteryView:(HACCBatteryGroupView *)arg1 ;
-(void)updateValue;
-(unsigned long long)module;
-(id)_productIdentifierForBTDevice:(id)arg1 ;
-(HACCBatteryGroupView *)batteryView;
-(void)setBatteryDevice:(BCBatteryDevice *)arg1 ;
-(BCBatteryDevice *)batteryDevice;
-(id)contentValue;
-(id)liveListenImageName:(id)arg1 ;
-(BCBatteryDeviceController *)batteryController;
-(void)setBatteryController:(BCBatteryDeviceController *)arg1 ;
@end

