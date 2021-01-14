/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class TVRTouchProcessor, _TVRButtonHaptic;

@interface TVRTouchpadView : UIView {

	BOOL _highlighted;
	/*^block*/id _configurationHandler;
	TVRTouchProcessor* _touchProcessor;
	_TVRButtonHaptic* _haptic;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) TVRTouchProcessor * touchProcessor;              //@synthesize touchProcessor=_touchProcessor - In the implementation block
@property (nonatomic,retain) _TVRButtonHaptic * haptic;                              //@synthesize haptic=_haptic - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,copy) id configurationHandler;                                  //@synthesize configurationHandler=_configurationHandler - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                             //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(_TVRButtonHaptic *)haptic;
-(BOOL)isHighlighted;
-(id)configurationHandler;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_init;
-(void)setHaptic:(_TVRButtonHaptic *)arg1 ;
-(void)_notifyConfigurationHandler:(BOOL)arg1 ;
-(void)setConfigurationHandler:(id)arg1 ;
-(TVRTouchProcessor *)touchProcessor;
-(void)setTouchProcessor:(TVRTouchProcessor *)arg1 ;
@end

