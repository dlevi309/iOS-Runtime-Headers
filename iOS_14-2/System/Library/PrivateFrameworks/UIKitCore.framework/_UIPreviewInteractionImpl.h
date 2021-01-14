/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)cancelInteraction;
-(UIPreviewInteraction *)previewInteraction;
-(void)setPreviewInteraction:(id)arg1;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2;
-(void)setTouchForceProvider:(id)arg1;
-(void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;

@end

