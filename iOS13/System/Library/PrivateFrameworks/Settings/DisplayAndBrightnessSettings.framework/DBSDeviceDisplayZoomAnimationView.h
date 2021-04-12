/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAPackage, CAStateController;

@interface DBSDeviceDisplayZoomAnimationView : UIView {

	BOOL _animating;
	float _duration;
	unsigned long long _displayZoomOption;
	CALayer* _packageLayer;
	CAPackage* _package;
	CAStateController* _stateController;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long displayZoomOption;              //@synthesize displayZoomOption=_displayZoomOption - In the implementation block
@property (nonatomic,retain) CALayer * packageLayer;                            //@synthesize packageLayer=_packageLayer - In the implementation block
@property (nonatomic,retain) CAPackage * package;                               //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;               //@synthesize stateController=_stateController - In the implementation block
@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                 //@synthesize animating=_animating - In the implementation block
-(unsigned long long)state;
-(float)duration;
-(void)setPackage:(CAPackage *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setDuration:(float)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAnimating;
-(void)startAnimation;
-(void)stopAnimation;
-(void)drawRect:(CGRect)arg1 ;
-(void)_setPackage:(id)arg1 ;
-(CAPackage *)package;
-(void)setAnimating:(BOOL)arg1 ;
-(CAStateController *)stateController;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)_configureView;
-(unsigned long long)displayZoomOption;
-(CALayer *)packageLayer;
-(void)setPackageLayer:(CALayer *)arg1 ;
-(void)_startAnimationForLayer:(id)arg1 ;
-(void)_stepAnimamtionForLayer:(id)arg1 ;
-(id)initWithDisplayZoomOption:(unsigned long long)arg1 ;
-(void)setDisplayZoomOption:(unsigned long long)arg1 ;
@end

