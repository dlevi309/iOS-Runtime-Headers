/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HULayoutContainerView : UIView {

	UIView* _contentView;
	/*^block*/id _layoutBlock;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy,readonly) id layoutBlock;               //@synthesize layoutBlock=_layoutBlock - In the implementation block
-(UIView *)contentView;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithContentView:(id)arg1 layoutBlock:(/*^block*/id)arg2 ;
-(id)layoutBlock;
@end

