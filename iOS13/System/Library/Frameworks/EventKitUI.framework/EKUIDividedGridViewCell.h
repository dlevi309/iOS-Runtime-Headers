/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@class UIColor, UITextLabel, EKUIDividedGridViewController, NSLayoutConstraint;

@interface EKUIDividedGridViewCell : UIView {

	UIColor* _bgColor;
	BOOL _selected;
	UITextLabel* _label;
	EKUIDividedGridViewController* _viewController;
	NSLayoutConstraint* _widthConstraint;

}

@property (__weak) EKUIDividedGridViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (__weak) NSLayoutConstraint * widthConstraint;                        //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) UITextLabel * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                                     //@synthesize selected=_selected - In the implementation block
-(id)init;
-(void)setLabel:(UITextLabel *)arg1 ;
-(UITextLabel *)label;
-(void)setViewController:(EKUIDividedGridViewController *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(EKUIDividedGridViewController *)viewController;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)selectedTextColor;
-(id)initWithBackgroundColor:(id)arg1 ;
@end

