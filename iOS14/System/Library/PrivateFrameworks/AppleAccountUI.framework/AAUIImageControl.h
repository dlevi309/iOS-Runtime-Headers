/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AAUILabel *)label;
-(void)_updateLabelVisibility;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateOverlayViewVisibility;
@end

