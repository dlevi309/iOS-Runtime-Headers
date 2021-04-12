/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAPackage, CAStateController;

@interface DBSDeviceDisplayZoomAnimationView : UIView {

	BOOL _animating;
	float _duration;
	double _scale;
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
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic) double scale;                                      //@synthesize scale=_scale - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(CAStateController *)stateController;
-(CGSize)intrinsicContentSize;
-(void)setDuration:(float)arg1 ;
-(void)startAnimation;
-(void)setAnimating:(BOOL)arg1 ;
-(CALayer *)packageLayer;
-(CGSize)preferredSize;
-(void)setPackageLayer:(CALayer *)arg1 ;
-(double)scale;
-(void)_setPackage:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)stopAnimation;
-(void)setScale:(double)arg1 ;
-(CAPackage *)package;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(float)duration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAnimating;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)_startAnimationForLayer:(id)arg1 ;
-(void)_configureView;
-(unsigned long long)displayZoomOption;
-(void)_stepAnimamtionForLayer:(id)arg1 ;
-(id)initWithDisplayZoomOption:(unsigned long long)arg1 ;
-(void)setDisplayZoomOption:(unsigned long long)arg1 ;
@end

