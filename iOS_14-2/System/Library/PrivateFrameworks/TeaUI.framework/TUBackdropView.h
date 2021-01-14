/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface TUBackdropView : UIView {

	UIVisualEffectView* _backdropView;

}

@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
-(UIVisualEffectView *)backdropView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
@end

