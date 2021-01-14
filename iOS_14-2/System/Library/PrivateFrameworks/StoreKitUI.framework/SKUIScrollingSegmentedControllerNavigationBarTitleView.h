/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIInteractiveSegmentedControl;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView {

	long long _layoutStyle;
	SKUIInteractiveSegmentedControl* _segmentedControl;
	double _segmentedControlMinimumHeight;

}

@property (assign,nonatomic) long long layoutStyle;                                           //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,retain) SKUIInteractiveSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) double segmentedControlMinimumHeight;                            //@synthesize segmentedControlMinimumHeight=_segmentedControlMinimumHeight - In the implementation block
+(UIEdgeInsets)defaultLayoutMargins;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)layoutStyle;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIInteractiveSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(SKUIInteractiveSegmentedControl *)arg1 ;
-(double)segmentedControlMinimumHeight;
-(void)setSegmentedControlMinimumHeight:(double)arg1 ;
@end

