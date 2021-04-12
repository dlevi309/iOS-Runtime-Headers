/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@interface WFComposeViewSizing : NSObject
+(double)moduleWidthForViewSize:(CGSize)arg1 maximumContentWidth:(double)arg2 maximumModuleWidth:(double)arg3 traitCollection:(id)arg4 safeAreaInsets:(UIEdgeInsets)arg5 ;
+(UIEdgeInsets)moduleHorizontalInsetWithTraitCollection:(id)arg1 safeAreaInsets:(UIEdgeInsets)arg2 ;
+(double)constrainMaximumContentWidth:(double)arg1 toSize:(CGSize)arg2 traitCollection:(id)arg3 ;
+(CGSize)drawerSizeFromParentSize:(CGSize)arg1 safeAreaInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 ;
+(CGSize)workflowViewSizeFromParentSize:(CGSize)arg1 safeAreaInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 ;
+(CGSize)sizeForRequestType:(unsigned long long)arg1 parentSize:(CGSize)arg2 safeAreaInsets:(UIEdgeInsets)arg3 traitCollection:(id)arg4 ;
@end

