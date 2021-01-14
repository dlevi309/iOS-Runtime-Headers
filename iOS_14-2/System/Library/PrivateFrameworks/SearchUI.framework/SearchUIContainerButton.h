/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(SearchUIHorizontallyScrollingContainerButtonController *)buttonController;
-(void)setButtonController:(SearchUIHorizontallyScrollingContainerButtonController *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithContainerButtonController:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setHighlighted:(BOOL)arg1 ;
@end

