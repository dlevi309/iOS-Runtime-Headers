/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(BOOL)canBecomeFocused;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)choose;
-(void)select;
-(void)deselect;
-(void)updateConstraints;
-(void)setupTitleLabel;
-(NSString *)titleString;
-(void)setupSiriButton;
-(void)setSiriButtonEnabled:(BOOL)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setupConstraintsforTitleLabel;
-(void)setSiriButton:(UIButton *)arg1 ;
-(void)setupConstraintsForTitleLabelAndSiriButton;
-(void)siriButtonTapped:(id)arg1 ;
-(void)siriButtonTouchDown:(id)arg1 ;
-(void)siriButtonTouchUp:(id)arg1 ;
-(BOOL)siriButtonEnabled;
-(NSMutableArray *)constraintsForTitleLabel;
-(BOOL)siriButtonSelected;
-(void)setConstraintsForTitleLabel:(NSMutableArray *)arg1 ;
-(NSMutableArray *)constraintsForTitleLabelAndSiriButton;
-(void)setConstraintsForTitleLabelAndSiriButton:(NSMutableArray *)arg1 ;
-(void)setSiriButtonSelected:(BOOL)arg1 ;
-(UIButton *)siriButton;
-(void)setupClickGestureRecognizer;
-(void)stateUpdated;
-(void)clickGestureDidUpdate:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

