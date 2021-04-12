/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/_UIRootWindow.h>
#import <libobjc.A.dylib/FBSceneTransformTarget.h>

@class UIView, NSHashTable, CALayer, NSString;

@interface FBRootWindow : _UIRootWindow <FBSceneTransformTarget> {

	UIView* _sceneContainerView;
	NSHashTable* _transforms;
	CALayer* _bezelLayer;
	CALayer* _maskLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(void)_updateTransforms;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_appearsInLoupe;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_canBecomeKeyWindow;
-(void)transformDidInvalidate:(id)arg1 ;
-(void)transformDidUpdate:(id)arg1 ;
-(void)attachSceneTransform:(id)arg1 ;
-(void)removeSceneTransform:(id)arg1 ;
-(id)sceneContainerView;
@end

