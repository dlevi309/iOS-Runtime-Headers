/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class NSNumberFormatter, UILabel, UIImageView, HACCBatteryGroupView, BCBatteryDevice, NSString;

@interface HACCStatusView : UIControl <HACCContentModule> {

	NSNumberFormatter* _numberFormatter;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UILabel* _titleLabel;
	UIImageView* _iconView;
	HACCBatteryGroupView* _batteryView;
	BCBatteryDevice* _batteryDevice;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                     //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HACCBatteryGroupView * batteryView;                         //@synthesize batteryView=_batteryView - In the implementation block
@property (nonatomic,retain) BCBatteryDevice * batteryDevice;                            //@synthesize batteryDevice=_batteryDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
+(id)_backgroundUpdateQueue;
-(BOOL)enabled;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(HACCBatteryGroupView *)batteryView;
-(void)setBatteryView:(HACCBatteryGroupView *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(unsigned long long)module;
-(void)setModule:(unsigned long long)arg1 ;
-(void)updateValue;
-(id)contentValue;
-(id)_productIdentifierForBTDevice:(id)arg1 ;
-(void)setBatteryDevice:(BCBatteryDevice *)arg1 ;
-(id)liveListenImageName:(id)arg1 ;
-(BCBatteryDevice *)batteryDevice;
@end

