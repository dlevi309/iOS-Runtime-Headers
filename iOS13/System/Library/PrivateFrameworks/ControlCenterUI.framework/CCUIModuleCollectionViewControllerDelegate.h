/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@protocol CCUIModuleCollectionViewControllerDelegate <NSObject>
@required
-(long long)interfaceOrientationForModuleCollectionViewController:(id)arg1;
-(void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2;

@end

