/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView;

@interface _UIElasticContextMenuBackgroundView : UIView {

	UIVisualEffectView* _visualEffectView;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                //@synthesize insets=_insets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)layoutSubviews;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
@end

