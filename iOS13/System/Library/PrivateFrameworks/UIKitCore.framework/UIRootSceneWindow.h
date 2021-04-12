/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRootWindow.h>
#import <UIKit/UIMutableTransformerDelegate.h>

@class FBSDisplayConfiguration, UIView, UIMutableTransformer, CALayer, NSString;

@interface UIRootSceneWindow : _UIRootWindow <UIMutableTransformerDelegate> {

	FBSDisplayConfiguration* _displayConfiguration;
	UIView* _sceneContainerView;
	UIMutableTransformer* _sceneTransformer;
	CALayer* _bezelLayer;
	CALayer* _maskLayer;

}

@property (nonatomic,readonly) UIView * _sceneContainerView;                                //@synthesize sceneContainerView=_sceneContainerView - In the implementation block
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) UIMutableTransformer * sceneTransformer;                     //@synthesize sceneTransformer=_sceneTransformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)_focusResponder;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(void)_updateTransforms;
-(void)transformsDidChange:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_appearsInLoupe;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_canBecomeKeyWindow;
-(UIMutableTransformer *)sceneTransformer;
-(UIView *)_sceneContainerView;
@end

