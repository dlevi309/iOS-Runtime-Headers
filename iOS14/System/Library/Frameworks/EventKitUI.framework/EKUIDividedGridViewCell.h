/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewController:(EKUIDividedGridViewController *)arg1 ;
-(id)initWithBackgroundColor:(id)arg1 ;
-(id)init;
-(id)selectedTextColor;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(NSLayoutConstraint *)widthConstraint;
-(EKUIDividedGridViewController *)viewController;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setLabel:(UITextLabel *)arg1 ;
-(UITextLabel *)label;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

