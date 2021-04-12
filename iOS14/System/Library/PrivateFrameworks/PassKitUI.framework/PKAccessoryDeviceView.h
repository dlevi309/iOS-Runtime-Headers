/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKGlyphView, UIImageView, UILabel, PKAccessoryDevice, PKPass, UIView, UIColor;

@interface PKAccessoryDeviceView : UIView {

	PKGlyphView* _glyph;
	UIImageView* _imageView;
	UILabel* _label;
	PKAccessoryDevice* _accessory;
	PKPass* _pass;
	UIView* _parentView;
	UIColor* _strokeColor;
	UIColor* _backgroundColor;
	double _animationDelay;
	/*^block*/id _timeoutBlock;
	long long _state;
	CGRect _cutoutFrame;

}

@property (assign,nonatomic) CGRect cutoutFrame;              //@synthesize cutoutFrame=_cutoutFrame - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)changeToState:(long long)arg1 ;
-(void)_setColors;
-(void)presentOnParentView;
-(void)_changeToProcessingState;
-(void)_changeToSuccessState;
-(void)_changeToSuccessWithUserInterventionState;
-(void)_changeToFailureState;
-(void)_changeToTryAgainState;
-(CGRect)_springBoardCutoutRect;
-(void)_showWalletWithMessage:(id)arg1 ;
-(id)initWithPass:(id)arg1 accessory:(id)arg2 cutoutFrame:(CGRect)arg3 parentView:(id)arg4 ;
-(id)initWithState:(long long)arg1 accessory:(id)arg2 cutoutFrame:(CGRect)arg3 parentView:(id)arg4 ;
-(void)setCutoutFrame:(CGRect)arg1 ;
-(CGRect)cutoutFrame;
-(void)dismissViewWithCompletion:(/*^block*/id)arg1 ;
@end

