/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>

@protocol CPSButtonDelegate;
@class NSArray, UIStackView, NSLayoutConstraint;

@interface CPSInformationTemplateButtonsViewController : UIViewController {

	NSArray* _buttons;
	UIStackView* _buttonStackView;
	id<CPSButtonDelegate> _buttonDelegate;
	unsigned long long _preferredButtonIndex;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UIStackView * buttonStackView;                            //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (assign,nonatomic,__weak) id<CPSButtonDelegate> buttonDelegate;              //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long preferredButtonIndex;                  //@synthesize preferredButtonIndex=_preferredButtonIndex - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                    //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                          //@synthesize buttons=_buttons - In the implementation block
-(id)preferredFocusEnvironments;
-(NSArray *)buttons;
-(id<CPSButtonDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<CPSButtonDelegate>)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)viewDidLoad;
-(void)_updateButtons;
-(void)_updateHeight;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPreferredButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)preferredButtonIndex;
-(id)initWithButtons:(id)arg1 buttonDelegate:(id)arg2 ;
-(void)setButtonIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
@end

