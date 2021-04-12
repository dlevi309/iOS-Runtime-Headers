/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSignalBars:(unsigned long long)arg1 ;
-(unsigned long long)signalBars;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupSubviews;
-(void)setBatteryView:(_UIBatteryView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIBatteryView *)batteryView;
-(unsigned long long)batteryCharge;
-(NSString *)cellularProtocolString;
-(void)setCellularProtocolString:(NSString *)arg1 ;
-(UIImageView *)signalImageView;
-(void)setSignalImageView:(UIImageView *)arg1 ;
-(void)setBatteryCharge:(unsigned long long)arg1 ;
-(void)updateSignalBars;
-(void)setNetworkTypeLabel:(UILabel *)arg1 ;
-(void)updateCellularProtocolLabel;
-(UILabel *)networkTypeLabel;
-(id)attributedStringFromCellularProtocol:(id)arg1 ;
@end

