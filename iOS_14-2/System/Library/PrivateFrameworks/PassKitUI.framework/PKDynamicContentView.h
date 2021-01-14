/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, PKDynamicLayerEmitterConfiguration, CAEmitterLayer;

@interface PKDynamicContentView : UIView {

	UIImageView* _imageView;
	PKDynamicLayerEmitterConfiguration* _dynamicLayerEmitterConfiguration;
	CAEmitterLayer* _emitterLayer;
	BOOL _paused;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_pauseEmitters;
-(void)_configureEmitterLayerWithImage:(id)arg1 ;
-(void)_startEmitters;
-(id)initWithImage:(id)arg1 emitterImage:(id)arg2 dynamicLayerEmitterConfiguration:(id)arg3 ;
-(void)invalidate;
-(BOOL)isPaused;
-(void)dealloc;
@end

