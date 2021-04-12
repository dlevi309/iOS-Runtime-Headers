/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIColor;


@protocol UIActionSheetPresentationControllerVisualStyle <NSObject>
@property (readonly) double dismissToContentSpacing; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
@property (readonly) UIView*<UIActionSheetPresentationControllerDismissActionView> dismissActionView; 
@required
-(UIEdgeInsets*)contentInsetsForContainerView:(id)arg1;
-(double)cornerRadius;
-(UIView*<UIActionSheetPresentationControllerDismissActionView>)dismissActionView;
-(UIColor *)dimmingViewColor;
-(double)dismissToContentSpacing;

@end

