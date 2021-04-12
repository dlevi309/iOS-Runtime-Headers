/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 assetName:(id)arg2 forPhoneTarget:(BOOL)arg3 ;
-(void)setImage:(id)arg1 forPublishedObjectWithName:(id)arg2 ;
-(unsigned long long)animationStateForProvisioningViewState:(unsigned long long)arg1 ;
-(void)_setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithAssetName:(id)arg1 forPhoneTarget:(BOOL)arg2 ;
-(void)setWatchAssetImage:(id)arg1 ;
-(unsigned long long)state;
-(void)setDigitalCardImage:(id)arg1 ;
-(void)setPlasticCardImage:(id)arg1 ;
@end

