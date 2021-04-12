/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UIInputViewController.h>

@class UIViewController, NSLayoutConstraint;

@interface MFContaineeInputViewController : UIInputViewController {

	BOOL _allowsSelfSizing;
	UIViewController* _contentViewController;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                 //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign,nonatomic) BOOL allowsSelfSizing;                                 //@synthesize allowsSelfSizing=_allowsSelfSizing - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAllowsSelfSizing:(BOOL)arg1 ;
-(BOOL)allowsSelfSizing;
-(void)_updateContentViewControllerHeight;
@end

