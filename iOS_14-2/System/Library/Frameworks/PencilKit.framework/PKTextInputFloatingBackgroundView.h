/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface PKTextInputFloatingBackgroundView : UIView {

	UIVisualEffectView* __blurView;
	UIView* __textureView;

}

@property (nonatomic,readonly) UIVisualEffectView * _blurView;              //@synthesize _blurView=__blurView - In the implementation block
@property (nonatomic,readonly) UIView * _textureView;                       //@synthesize _textureView=__textureView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)_blurView;
-(UIView *)_textureView;
@end

