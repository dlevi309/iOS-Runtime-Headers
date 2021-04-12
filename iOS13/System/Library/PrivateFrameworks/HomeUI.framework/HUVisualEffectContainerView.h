/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface HUVisualEffectContainerView : UIVisualEffectView {

	UIView* _innerContentView;

}

@property (nonatomic,retain) UIView * innerContentView;              //@synthesize innerContentView=_innerContentView - In the implementation block
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setInnerContentView:(UIView *)arg1 ;
-(UIView *)innerContentView;
-(id)initWithInnerContentView:(id)arg1 ;
@end

