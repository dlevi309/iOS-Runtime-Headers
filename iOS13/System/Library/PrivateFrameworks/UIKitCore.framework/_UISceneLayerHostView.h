/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDirectionalRotationView.h>

@class FBSceneLayer, UITransformer, UIScenePresentationContext;

@interface _UISceneLayerHostView : _UIDirectionalRotationView {

	FBSceneLayer* _sceneLayer;
	UITransformer* _transformer;
	UIScenePresentationContext* _presentationContext;
	UIScenePresentationContext* _currentPresentationContext;

}

@property (nonatomic,retain) UIScenePresentationContext * currentPresentationContext;              //@synthesize currentPresentationContext=_currentPresentationContext - In the implementation block
@property (nonatomic,retain) UITransformer * transformer;                                          //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,readonly) FBSceneLayer * sceneLayer;                                          //@synthesize sceneLayer=_sceneLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 ;
-(void)setCurrentPresentationContext:(UIScenePresentationContext *)arg1 ;
-(UIScenePresentationContext *)currentPresentationContext;
-(UITransformer *)transformer;
-(void)setTransformer:(UITransformer *)arg1 ;
-(FBSceneLayer *)sceneLayer;
@end

