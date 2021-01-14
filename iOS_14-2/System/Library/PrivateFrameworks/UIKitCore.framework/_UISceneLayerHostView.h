/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransformer:(UITransformer *)arg1 ;
-(UITransformer *)transformer;
-(id)initWithFrame:(CGRect)arg1 ;
-(FBSceneLayer *)sceneLayer;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIScenePresentationContext *)currentPresentationContext;
-(id)initWithSceneLayer:(id)arg1 ;
-(void)setCurrentPresentationContext:(UIScenePresentationContext *)arg1 ;
@end

