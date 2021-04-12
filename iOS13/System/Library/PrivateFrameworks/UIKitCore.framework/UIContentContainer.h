/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIContentContainer <NSObject>
@property (nonatomic,readonly) CGSize preferredContentSize; 
@required
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;

@end

