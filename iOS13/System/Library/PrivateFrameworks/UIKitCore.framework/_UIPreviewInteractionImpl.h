/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView, UIPreviewInteraction;


@protocol _UIPreviewInteractionImpl <NSObject>
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate; 
@property (nonatomic,__weak,readonly) UIView * view; 
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; 
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction; 
@required
-(id<UIPreviewInteractionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)cancelInteraction;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(UIPreviewInteraction *)previewInteraction;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2;
-(void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;
-(void)setTouchForceProvider:(id)arg1;
-(void)setPreviewInteraction:(id)arg1;

@end

