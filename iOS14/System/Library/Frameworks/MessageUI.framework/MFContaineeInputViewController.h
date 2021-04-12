/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(NSLayoutConstraint *)heightConstraint;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_updateContentViewControllerHeight;
-(BOOL)allowsSelfSizing;
-(void)setAllowsSelfSizing:(BOOL)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

