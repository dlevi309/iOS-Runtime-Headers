/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CALayer;

@interface CAMInterfaceModulationView : UIView {

	UIView* _hostingView;
	unsigned long long _interfaceModulation;
	CALayer* __modulationFilterLayer;
	unsigned long long __inFlightAnimationCount;

}

@property (setter=_setModulationFilterLayer:,nonatomic,retain) CALayer * _modulationFilterLayer;                         //@synthesize _modulationFilterLayer=__modulationFilterLayer - In the implementation block
@property (assign,setter=_setInFlightAnimationCount:,nonatomic) unsigned long long _inFlightAnimationCount;              //@synthesize _inFlightAnimationCount=__inFlightAnimationCount - In the implementation block
@property (nonatomic,__weak,readonly) UIView * hostingView;                                                              //@synthesize hostingView=_hostingView - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceModulation;                                                     //@synthesize interfaceModulation=_interfaceModulation - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)hostingView;
-(void)didAddSubview:(id)arg1 ;
-(id)initWithHostingView:(id)arg1 ;
-(unsigned long long)interfaceModulation;
-(void)setInterfaceModulation:(unsigned long long)arg1 ;
-(void)setInterfaceModulation:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CALayer *)_modulationFilterLayer;
-(void)_addOrRemoveModulationLayer;
-(void)_setModulationFilterLayer:(id)arg1 ;
-(unsigned long long)_inFlightAnimationCount;
-(void)_setInFlightAnimationCount:(unsigned long long)arg1 ;
-(void)modulationAnimationDidStop:(BOOL)arg1 ;
@end

