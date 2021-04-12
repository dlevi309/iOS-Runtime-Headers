/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRootWindow.h>
#import <UIKit/UIMutableTransformerDelegate.h>

@class FBSDisplayConfiguration, UIView, UIMutableTransformer, NSString;

@interface UIRootSceneWindow : _UIRootWindow <UIMutableTransformerDelegate> {

	FBSDisplayConfiguration* _displayConfiguration;
	UIView* _sceneContainerView;
	UIMutableTransformer* _sceneTransformer;

}

@property (nonatomic,readonly) UIView * _sceneContainerView;                                //@synthesize sceneContainerView=_sceneContainerView - In the implementation block
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) UIMutableTransformer * sceneTransformer;                     //@synthesize sceneTransformer=_sceneTransformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_canBecomeKeyWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)_updateTransforms;
-(BOOL)_shouldPrepareScreenForWindow;
-(UIMutableTransformer *)sceneTransformer;
-(id)_focusResponder;
-(UIView *)_sceneContainerView;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)transformsDidChange:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(void)dealloc;
-(BOOL)_appearsInLoupe;
@end

