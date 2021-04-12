/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)setForcePresentationControllerDelegate:(id)arg1;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)setPresentationPhaseCompletionBlock:(/*^block*/id)arg1;
-(id)presentationPhaseCompletionBlock;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setPanningGestureRecognizer:(id)arg1;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(UIView *)_revealContainerView;
-(BOOL)_canCommitPresentation;
-(BOOL)_canDismissPresentation;

@end

