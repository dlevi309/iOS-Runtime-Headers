/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPChargingStatusViewHosting.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>

@class PNPChargingStatusView, PNPDeviceState, PNPPencilView, NSString;

@interface PNPPencilHorizontalPresentationContainerView : UIView <PNPChargingStatusViewHosting, PNPDeviceStateConfigurable> {

	PNPChargingStatusView* _chargingStatusView;
	BOOL _showsChargingStatusView;
	PNPDeviceState* _deviceState;
	PNPPencilView* _pencilView;

}

@property (nonatomic,retain) PNPPencilView * pencilView;                              //@synthesize pencilView=_pencilView - In the implementation block
@property (nonatomic,retain) PNPChargingStatusView * chargingStatusView;              //@synthesize chargingStatusView=_chargingStatusView - In the implementation block
@property (assign,nonatomic) BOOL showsChargingStatusView;                            //@synthesize showsChargingStatusView=_showsChargingStatusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState;                              //@synthesize deviceState=_deviceState - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(PNPDeviceState *)deviceState;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(PNPPencilView *)pencilView;
-(void)setPencilView:(PNPPencilView *)arg1 ;
-(void)setChargingStatusView:(PNPChargingStatusView *)arg1 ;
-(void)setShowsChargingStatusView:(BOOL)arg1 ;
-(BOOL)showsChargingStatusView;
-(PNPChargingStatusView *)chargingStatusView;
@end

