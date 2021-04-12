/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIActionSheetPresentationControllerVisualStyle.h>

@class UIColor, UIActionSheetiOSDismissActionView, NSString;

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle> {

	UIActionSheetiOSDismissActionView* _dismissActionView;

}

@property (nonatomic,retain) UIActionSheetiOSDismissActionView * dismissActionView;              //@synthesize dismissActionView=_dismissActionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double dismissToContentSpacing; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
-(id)init;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)cornerRadius;
-(UIActionSheetiOSDismissActionView *)dismissActionView;
-(void)setDismissActionView:(UIActionSheetiOSDismissActionView *)arg1 ;
-(UIColor *)dimmingViewColor;
-(double)dismissToContentSpacing;
@end

