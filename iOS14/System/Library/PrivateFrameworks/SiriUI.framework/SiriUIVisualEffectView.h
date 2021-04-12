/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface SiriUIVisualEffectView : UIVisualEffectView {

	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;              //@synthesize customView=_customView - In the implementation block
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIView *)customView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
@end

