/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@class NSString, _UIBatteryView, UIImageView, UILabel;

@interface WFHotspotDetailsView : UIStackView {

	unsigned long long _batteryCharge;
	NSString* _cellularProtocolString;
	unsigned long long _signalBars;
	_UIBatteryView* _batteryView;
	UIImageView* _signalImageView;
	UILabel* _networkTypeLabel;

}

@property (nonatomic,retain) _UIBatteryView * batteryView;                  //@synthesize batteryView=_batteryView - In the implementation block
@property (nonatomic,retain) UIImageView * signalImageView;                 //@synthesize signalImageView=_signalImageView - In the implementation block
@property (nonatomic,retain) UILabel * networkTypeLabel;                    //@synthesize networkTypeLabel=_networkTypeLabel - In the implementation block
@property (assign,nonatomic) unsigned long long batteryCharge;              //@synthesize batteryCharge=_batteryCharge - In the implementation block
@property (nonatomic,copy) NSString * cellularProtocolString;               //@synthesize cellularProtocolString=_cellularProtocolString - In the implementation block
@property (assign,nonatomic) unsigned long long signalBars;                 //@synthesize signalBars=_signalBars - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UIBatteryView *)batteryView;
-(void)setBatteryView:(_UIBatteryView *)arg1 ;
-(void)setupSubviews;
-(void)setSignalBars:(unsigned long long)arg1 ;
-(unsigned long long)signalBars;
-(NSString *)cellularProtocolString;
-(void)setCellularProtocolString:(NSString *)arg1 ;
-(UIImageView *)signalImageView;
-(void)setSignalImageView:(UIImageView *)arg1 ;
-(void)setBatteryCharge:(unsigned long long)arg1 ;
-(void)updateSignalBars;
-(void)setNetworkTypeLabel:(UILabel *)arg1 ;
-(void)updateCellularProtocolLabel;
-(UILabel *)networkTypeLabel;
-(unsigned long long)batteryCharge;
-(id)attributedStringFromCellularProtocol:(id)arg1 ;
@end

