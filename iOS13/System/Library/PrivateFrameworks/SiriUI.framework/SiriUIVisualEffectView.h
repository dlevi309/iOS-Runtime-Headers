/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface SiriUIVisualEffectView : UIVisualEffectView {

	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;              //@synthesize customView=_customView - In the implementation block
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
@end

