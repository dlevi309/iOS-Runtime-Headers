/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAPackage, CAStateController;

@interface DBSDeviceAppIconSizeAnimationView : UIView {

	BOOL _animating;
	float _duration;
	unsigned long long __deviceAppIconSize;
	CALayer* _packageLayer;
	CAPackage* _package;
	CAStateController* _stateController;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long _deviceAppIconSize;              //@synthesize _deviceAppIconSize=__deviceAppIconSize - In the implementation block
@property (nonatomic,retain) CALayer * packageLayer;                             //@synthesize packageLayer=_packageLayer - In the implementation block
@property (nonatomic,retain) CAPackage * package;                                //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;                //@synthesize stateController=_stateController - In the implementation block
@property (assign,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                  //@synthesize animating=_animating - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(CAStateController *)stateController;
-(CGSize)intrinsicContentSize;
-(void)setDuration:(float)arg1 ;
-(void)startAnimation;
-(void)setAnimating:(BOOL)arg1 ;
-(CALayer *)packageLayer;
-(void)setPackageLayer:(CALayer *)arg1 ;
-(void)_setPackage:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)stopAnimation;
-(CAPackage *)package;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(float)duration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAnimating;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)_startAnimationForLayer:(id)arg1 ;
-(void)_configureView;
-(unsigned long long)_deviceAppIconSize;
-(void)_stepAnimamtionForLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 deviceAppIconSize:(unsigned long long)arg2 ;
-(void)set_deviceAppIconSize:(unsigned long long)arg1 ;
@end

