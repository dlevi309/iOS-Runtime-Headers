/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIContentContainer <NSObject>
@property (nonatomic,readonly) CGSize preferredContentSize; 
@required
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
-(CGSize)preferredContentSize;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

