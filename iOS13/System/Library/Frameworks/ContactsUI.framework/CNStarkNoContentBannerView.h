/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, NSMutableArray, NSString;

@interface CNStarkNoContentBannerView : UIView {

	BOOL _siriButtonEnabled;
	BOOL _siriButtonSelected;
	UILabel* _titleLabel;
	UIButton* _siriButton;
	NSMutableArray* _constraintsForTitleLabel;
	NSMutableArray* _constraintsForTitleLabelAndSiriButton;

}

@property (retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UIButton * siriButton;                                               //@synthesize siriButton=_siriButton - In the implementation block
@property (retain) NSMutableArray * constraintsForTitleLabel;                           //@synthesize constraintsForTitleLabel=_constraintsForTitleLabel - In the implementation block
@property (retain) NSMutableArray * constraintsForTitleLabelAndSiriButton;              //@synthesize constraintsForTitleLabelAndSiriButton=_constraintsForTitleLabelAndSiriButton - In the implementation block
@property (assign,nonatomic) BOOL siriButtonSelected;                                   //@synthesize siriButtonSelected=_siriButtonSelected - In the implementation block
@property (nonatomic,retain) NSString * titleString; 
@property (assign,nonatomic) BOOL siriButtonEnabled;                                    //@synthesize siriButtonEnabled=_siriButtonEnabled - In the implementation block
-(void)select;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setupClickGestureRecognizer;
-(void)clickGestureDidUpdate:(id)arg1 ;
-(void)deselect;
-(void)choose;
-(void)stateUpdated;
-(void)setupTitleLabel;
-(void)setupSiriButton;
-(void)setupConstraintsforTitleLabel;
-(void)setupConstraintsForTitleLabelAndSiriButton;
-(void)setSiriButtonEnabled:(BOOL)arg1 ;
-(void)siriButtonTapped:(id)arg1 ;
-(void)siriButtonTouchDown:(id)arg1 ;
-(void)siriButtonTouchUp:(id)arg1 ;
-(BOOL)siriButtonEnabled;
-(UIButton *)siriButton;
-(void)setSiriButton:(UIButton *)arg1 ;
-(NSMutableArray *)constraintsForTitleLabel;
-(void)setConstraintsForTitleLabel:(NSMutableArray *)arg1 ;
-(NSMutableArray *)constraintsForTitleLabelAndSiriButton;
-(void)setConstraintsForTitleLabelAndSiriButton:(NSMutableArray *)arg1 ;
-(BOOL)siriButtonSelected;
-(void)setSiriButtonSelected:(BOOL)arg1 ;
@end

