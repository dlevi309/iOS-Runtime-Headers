/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPWizardViewDelegate.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>
#import <libobjc.A.dylib/PNPChargingStatusViewHosting.h>

@protocol PNPPairingViewDelegate;
@class PNPDeviceState, PNPPencilView, PNPWizardView, PNPChargingStatusView, NSString;

@interface PNPPairingView : UIView <PNPWizardViewDelegate, PNPDeviceStateConfigurable, PNPChargingStatusViewHosting> {

	PNPDeviceState* _deviceState;
	PNPPencilView* _pencilView;
	PNPWizardView* _wizardView;
	BOOL _finishedWizardTransition;
	PNPChargingStatusView* _chargingStatusView;
	BOOL _showsChargingStatusView;
	CGRect _pencilSpinningRect;
	BOOL _showWizardContents;
	unsigned long long _state;
	id<PNPPairingViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PNPPairingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showWizardContents;                                 //@synthesize showWizardContents=_showWizardContents - In the implementation block
@property (nonatomic,readonly) PNPPencilView * pencilView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState; 
@property (nonatomic,retain) PNPChargingStatusView * chargingStatusView;              //@synthesize chargingStatusView=_chargingStatusView - In the implementation block
@property (assign,nonatomic) BOOL showsChargingStatusView;                            //@synthesize showsChargingStatusView=_showsChargingStatusView - In the implementation block
-(id<PNPPairingViewDelegate>)delegate;
-(void)setDelegate:(id<PNPPairingViewDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PNPDeviceState *)deviceState;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(void)wizardViewRequestsDismiss:(id)arg1 ;
-(PNPPencilView *)pencilView;
-(void)transitionToWizard;
-(void)setShowWizardContents:(BOOL)arg1 ;
-(void)wizardTransitionFinished;
-(void)setChargingStatusView:(PNPChargingStatusView *)arg1 ;
-(void)setShowsChargingStatusView:(BOOL)arg1 ;
-(BOOL)showsChargingStatusView;
-(PNPChargingStatusView *)chargingStatusView;
-(BOOL)showWizardContents;
-(CGSize)_intrinsicContentSizeForState:(unsigned long long)arg1 deviceState:(id)arg2 ;
-(CGSize)_pencilSizeForState:(unsigned long long)arg1 ;
-(CGAffineTransform)_pencilTransformForState:(unsigned long long)arg1 deviceState:(id)arg2 ;
@end

