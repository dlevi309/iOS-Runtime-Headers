/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/

@class PLClickPresentationInteractionManager, UIView;


@protocol PLClickPresentationInteractionPresenting <NSObject>
@property (nonatomic,readonly) PLClickPresentationInteractionManager * clickPresentationInteractionManager; 
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
@optional
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1;
-(CGRect)initialPresentedFrameOfViewForPreview;
-(CGRect)finalPresentedFrameOfViewForPreview;
-(CGRect)finalDismissedFrameOfViewForPreview;

@required
-(PLClickPresentationInteractionManager *)clickPresentationInteractionManager;
-(UIView *)viewForPreview;

@end

