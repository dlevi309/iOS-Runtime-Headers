/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 layoutBlock:(/*^block*/id)arg2 ;
-(id)layoutBlock;
@end

