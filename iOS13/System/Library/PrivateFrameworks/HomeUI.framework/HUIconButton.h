/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class HUIconView;

@interface HUIconButton : UIControl {

	HUIconView* _iconView;

}

@property (nonatomic,retain) HUIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)updateWithIconDescriptor:(id)arg1 animated:(BOOL)arg2 ;
@end

