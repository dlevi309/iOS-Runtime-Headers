/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIActionSheetPresentationControllerVisualStyle.h>

@class UIColor, UIActionSheetiOSDismissActionView, NSString;

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle> {

	UIActionSheetiOSDismissActionView* _dismissActionView;

}

@property (nonatomic,retain) UIActionSheetiOSDismissActionView * dismissActionView;              //@synthesize dismissActionView=_dismissActionView - In the implementation block
@property (readonly) double dismissToContentSpacing; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)cornerRadius;
-(UIActionSheetiOSDismissActionView *)dismissActionView;
-(void)setDismissActionView:(UIActionSheetiOSDismissActionView *)arg1 ;
-(UIColor *)dimmingViewColor;
-(double)dismissToContentSpacing;
@end

