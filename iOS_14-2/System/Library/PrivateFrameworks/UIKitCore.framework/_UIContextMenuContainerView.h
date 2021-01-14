/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate.h>

@class _UIPassthroughScrollInteraction, UIView, NSString;

@interface _UIContextMenuContainerView : UIView <_UIPassthroughScrollInteractionDelegate> {

	BOOL _lastHitTestWasPassedThrough;
	_UIPassthroughScrollInteraction* _passthroughInteraction;
	BOOL _dismissesInstantly;
	UIView* _contentWrapperView;
	/*^block*/id _dismissalHandler;
	/*^block*/id _subtreeTraitPropagationHandler;

}

@property (assign,nonatomic) BOOL dismissesInstantly;                         //@synthesize dismissesInstantly=_dismissesInstantly - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentWrapperView;              //@synthesize contentWrapperView=_contentWrapperView - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                               //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (nonatomic,copy) id subtreeTraitPropagationHandler;                 //@synthesize subtreeTraitPropagationHandler=_subtreeTraitPropagationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(void)didMoveToWindow;
-(BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_attemptDismiss:(BOOL)arg1 ;
-(id)dismissalHandler;
-(BOOL)dismissesInstantly;
-(UIView *)contentWrapperView;
-(void)setDismissalHandler:(id)arg1 ;
-(id)subtreeTraitPropagationHandler;
-(void)setDismissesInstantly:(BOOL)arg1 ;
-(void)setContentWrapperView:(UIView *)arg1 ;
-(void)setSubtreeTraitPropagationHandler:(id)arg1 ;
@end

