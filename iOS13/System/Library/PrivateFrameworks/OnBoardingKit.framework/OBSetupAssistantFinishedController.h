/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBBaseWelcomeController.h>

@class UILabel, OBButtonTray, OBBoldTrayButton;

@interface OBSetupAssistantFinishedController : OBBaseWelcomeController {

	UILabel* _titleLabel;
	OBButtonTray* _buttonTray;
	OBBoldTrayButton* _boldButton;
	/*^block*/id _boldButtonBlock;
	UILabel* _instructionalLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) OBButtonTray * buttonTray;                  //@synthesize buttonTray=_buttonTray - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * boldButton;              //@synthesize boldButton=_boldButton - In the implementation block
@property (nonatomic,copy) id boldButtonBlock;                           //@synthesize boldButtonBlock=_boldButtonBlock - In the implementation block
@property (nonatomic,retain) UILabel * instructionalLabel;               //@synthesize instructionalLabel=_instructionalLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(OBButtonTray *)buttonTray;
-(id)_headerFont;
-(void)setButtonTray:(OBButtonTray *)arg1 ;
-(void)setInstructionalLabel:(UILabel *)arg1 ;
-(UILabel *)instructionalLabel;
-(id)_instructionFont;
-(OBBoldTrayButton *)boldButton;
-(void)setBoldButton:(OBBoldTrayButton *)arg1 ;
-(void)setBoldButtonBlock:(id)arg1 ;
-(id)boldButtonBlock;
-(void)setButtonTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setInstructionalText:(id)arg1 ;
@end

