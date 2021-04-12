/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, AAUILabel, UIView;

@interface AAUIImageControl : UIControl {

	UIImageView* _imageView;
	AAUILabel* _label;
	UIView* _overlayView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) AAUILabel * label;                    //@synthesize label=_label - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AAUILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateLabelVisibility;
-(void)_updateOverlayViewVisibility;
@end

