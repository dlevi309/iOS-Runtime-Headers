/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBBaseWelcomeController.h>

@class UILabel, OBButtonTray, OBBoldTrayButton;

@interface OBSetupAssistantFinishedController : OBBaseWelcomeController {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	OBButtonTray* _buttonTray;
	OBBoldTrayButton* _boldButton;
	/*^block*/id _boldButtonBlock;
	UILabel* _instructionalLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                      //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) OBButtonTray * buttonTray;                  //@synthesize buttonTray=_buttonTray - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * boldButton;              //@synthesize boldButton=_boldButton - In the implementation block
@property (nonatomic,copy) id boldButtonBlock;                           //@synthesize boldButtonBlock=_boldButtonBlock - In the implementation block
@property (nonatomic,retain) UILabel * instructionalLabel;               //@synthesize instructionalLabel=_instructionalLabel - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithTitle:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 ;
-(id)_instructionFont;
-(void)setBoldButton:(OBBoldTrayButton *)arg1 ;
-(void)setBoldButtonBlock:(id)arg1 ;
-(id)boldButtonBlock;
-(void)setButtonTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setInstructionalText:(id)arg1 ;
-(id)_headerFont;
-(OBButtonTray *)buttonTray;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(void)setButtonTray:(OBButtonTray *)arg1 ;
-(OBBoldTrayButton *)boldButton;
-(UILabel *)instructionalLabel;
-(void)setInstructionalLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)detailLabel;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(id)_detailFont;
@end

