/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface HUVisualEffectContainerView : UIVisualEffectView {

	UIView* _innerContentView;

}

@property (nonatomic,retain) UIView * innerContentView;              //@synthesize innerContentView=_innerContentView - In the implementation block
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)innerContentView;
-(void)setInnerContentView:(UIView *)arg1 ;
-(id)initWithInnerContentView:(id)arg1 ;
@end

