/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setLayout:(id<AVTAdaptativeLayout>)arg1 ;
-(id<AVTAdaptativeLayout>)layout;
@end

