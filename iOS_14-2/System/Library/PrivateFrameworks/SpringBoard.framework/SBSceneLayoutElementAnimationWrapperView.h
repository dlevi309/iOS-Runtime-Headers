/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol BSInvalidatable;
@class SBLayoutElement, SBApplicationSceneView, SBOrientationTransformWrapperView, UIView;

@interface SBSceneLayoutElementAnimationWrapperView : UIView {

	SBLayoutElement* _layoutElement;
	SBApplicationSceneView* _appView;
	SBOrientationTransformWrapperView* _orientedView;
	UIView*<BSInvalidatable> _contentView;

}

@property (nonatomic,readonly) SBLayoutElement * layoutElement;                                    //@synthesize layoutElement=_layoutElement - In the implementation block
@property (nonatomic,readonly) UIView*<BSInvalidatable> contentView;                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneView * applicationSceneViewIfExists; 
-(void)willMoveToSuperview:(id)arg1 ;
-(void)addContentView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(SBLayoutElement *)layoutElement;
-(void)invalidate;
-(id)initWithLayoutElement:(id)arg1 contentView:(id)arg2 orientation:(long long)arg3 ;
-(UIView*<BSInvalidatable>)contentView;
-(SBApplicationSceneView *)applicationSceneViewIfExists;
@end

