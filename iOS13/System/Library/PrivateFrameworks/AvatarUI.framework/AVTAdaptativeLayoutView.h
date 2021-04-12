/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVTAdaptativeLayout;
@class UIView;

@interface AVTAdaptativeLayoutView : UIView {

	id<AVTAdaptativeLayout> _layout;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) id<AVTAdaptativeLayout> layout;              //@synthesize layout=_layout - In the implementation block
-(id<AVTAdaptativeLayout>)layout;
-(void)setLayout:(id<AVTAdaptativeLayout>)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
@end

