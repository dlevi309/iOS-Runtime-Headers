/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIGestureRecognizer, UIView, _UIStatesFeedbackGenerator;


@protocol UIForcePresentationController <NSObject>
@property (nonatomic,copy) id presentationPhaseCompletionBlock; 
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer; 
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; 
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator; 
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; 
@optional
-(void)_willCommitPresentation;

@required
-(void)setFeedbackGenerator:(id)arg1;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(BOOL)_canDismissPresentation;
-(BOOL)_canCommitPresentation;
-(id)presentationPhaseCompletionBlock;
-(void)setPresentationPhaseCompletionBlock:(/*^block*/id)arg1;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(id)arg1;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1;
-(UIView *)_revealContainerView;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)setForcePresentationControllerDelegate:(id)arg1;

@end

