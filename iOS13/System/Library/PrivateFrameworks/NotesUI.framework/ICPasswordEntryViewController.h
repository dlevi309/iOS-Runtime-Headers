/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UIViewController.h>

@class ICNote, UIImageView, UILabel, UIButton, NSLayoutConstraint, NSString;

@interface ICPasswordEntryViewController : UIViewController {

	BOOL _isAnimatingOut;
	ICNote* _note;
	unsigned long long _intent;
	/*^block*/id _passwordEntryCompletionHandler;
	/*^block*/id _passwordEntryFailedAttemptHandler;
	UIImageView* _lockImage;
	UILabel* _titleLabel;
	UIButton* _unlockButton;
	UIButton* _largeUnlockButton;
	NSLayoutConstraint* _titleLabelLeadingConstraint;
	NSLayoutConstraint* _titleLabelTrailingConstraint;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	NSLayoutConstraint* _titleLabelBottomConstraintForAXLargerTextSizes;
	NSString* _contentSizeCategory;

}

@property (assign,nonatomic,__weak) UIImageView * lockImage;                                                          //@synthesize lockImage=_lockImage - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * unlockButton;                                                          //@synthesize unlockButton=_unlockButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * largeUnlockButton;                                                     //@synthesize largeUnlockButton=_largeUnlockButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * titleLabelLeadingConstraint;                                 //@synthesize titleLabelLeadingConstraint=_titleLabelLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * titleLabelTrailingConstraint;                                //@synthesize titleLabelTrailingConstraint=_titleLabelTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * titleLabelBaselineConstraint;                                //@synthesize titleLabelBaselineConstraint=_titleLabelBaselineConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * titleLabelBottomConstraintForAXLargerTextSizes;              //@synthesize titleLabelBottomConstraintForAXLargerTextSizes=_titleLabelBottomConstraintForAXLargerTextSizes - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                                                            //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) unsigned long long intent;                                                               //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) ICNote * note;                                                                           //@synthesize note=_note - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingOut;                                                                     //@synthesize isAnimatingOut=_isAnimatingOut - In the implementation block
@property (nonatomic,copy) id passwordEntryCompletionHandler;                                                         //@synthesize passwordEntryCompletionHandler=_passwordEntryCompletionHandler - In the implementation block
@property (nonatomic,copy) id passwordEntryFailedAttemptHandler;                                                      //@synthesize passwordEntryFailedAttemptHandler=_passwordEntryFailedAttemptHandler - In the implementation block
-(void)dealloc;
-(unsigned long long)intent;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setIntent:(unsigned long long)arg1 ;
-(ICNote *)note;
-(void)setNote:(ICNote *)arg1 ;
-(void)updateFonts;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(UIImageView *)lockImage;
-(UIButton *)unlockButton;
-(void)updateforAccessibilityDarkerSystemColors;
-(UIButton *)largeUnlockButton;
-(void)updateTitleLabelPreferredMaxLayoutWidth;
-(void)updateConstraintsForContentSizeCategoryIfNecessary;
-(NSLayoutConstraint *)titleLabelLeadingConstraint;
-(NSLayoutConstraint *)titleLabelTrailingConstraint;
-(NSLayoutConstraint *)titleLabelBaselineConstraint;
-(NSLayoutConstraint *)titleLabelBottomConstraintForAXLargerTextSizes;
-(void)unlockPasswordButtonPressed:(id)arg1 ;
-(id)passwordEntryFailedAttemptHandler;
-(id)passwordEntryCompletionHandler;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 note:(id)arg3 intent:(unsigned long long)arg4 ;
-(void)beginAuthentication;
-(BOOL)isAnimatingOut;
-(void)setIsAnimatingOut:(BOOL)arg1 ;
-(void)setPasswordEntryCompletionHandler:(id)arg1 ;
-(void)setPasswordEntryFailedAttemptHandler:(id)arg1 ;
-(void)setLockImage:(UIImageView *)arg1 ;
-(void)setUnlockButton:(UIButton *)arg1 ;
-(void)setLargeUnlockButton:(UIButton *)arg1 ;
-(void)setTitleLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelBottomConstraintForAXLargerTextSizes:(NSLayoutConstraint *)arg1 ;
@end

