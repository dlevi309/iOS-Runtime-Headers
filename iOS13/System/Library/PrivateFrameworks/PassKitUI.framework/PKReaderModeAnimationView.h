/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAPackage, CALayer, CAStateController;

@interface PKReaderModeAnimationView : UIView {

	unsigned long long _state;
	CAPackage* _package;
	CALayer* _phoneLayer;
	CAStateController* _stateController;
	BOOL _isPhoneTarget;

}

@property (assign,nonatomic) unsigned long long state; 
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setDigitalCardImage:(id)arg1 ;
-(void)setPlasticCardImage:(id)arg1 ;
-(id)initWithAssetName:(id)arg1 forPhoneTarget:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 assetName:(id)arg2 forPhoneTarget:(BOOL)arg3 ;
-(void)setImageForCard:(id)arg1 image:(id)arg2 ;
-(unsigned long long)animationStateForProvisioningViewState:(unsigned long long)arg1 ;
-(void)_setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
@end

