/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

