/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, SearchUIHorizontallyScrollingContainerButtonController;

@interface SearchUIContainerButton : UIButton {

	UIView* _contentView;
	SearchUIHorizontallyScrollingContainerButtonController* _buttonController;

}

@property (nonatomic,retain) UIView * contentView;                                                                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) SearchUIHorizontallyScrollingContainerButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setButtonController:(SearchUIHorizontallyScrollingContainerButtonController *)arg1 ;
-(SearchUIHorizontallyScrollingContainerButtonController *)buttonController;
-(id)initWithContainerButtonController:(id)arg1 ;
@end

