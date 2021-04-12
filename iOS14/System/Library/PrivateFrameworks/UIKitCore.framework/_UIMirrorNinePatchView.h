/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface _UIMirrorNinePatchView : UIView {

	UIImage* _originalImage;
	UIEdgeInsets _insets;
	UIImageView* _imageViews[4];

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)_updateResizableImageAndViews;
-(void)setImage:(id)arg1 withResizableCornerSize:(CGSize)arg2 ;
@end

