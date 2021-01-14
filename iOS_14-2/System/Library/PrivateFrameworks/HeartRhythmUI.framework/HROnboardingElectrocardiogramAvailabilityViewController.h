/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class HKHeartRhythmAvailability, UIView, UILabel, HKSeparatorLineView, UIStackView, HKCaretOptionalTextField, UIDatePicker, NSDate, NSDateFormatter, HRStackedButtonView, NSLayoutConstraint, NSString;

@interface HROnboardingElectrocardiogramAvailabilityViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate> {

	HKHeartRhythmAvailability* _availability;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UILabel* _birthdayPromptLabel;
	HKSeparatorLineView* _birthdayTopSeparator;
	UIStackView* _birthdayEntryView;
	HKCaretOptionalTextField* _birthdayTextField;
	UIDatePicker* _datePicker;
	NSDate* _dateOfBirth;
	NSDateFormatter* _dateFormatter;
	HKSeparatorLineView* _birthdayBottomSeparator;
	UILabel* _birthdayFooterLabel;
	UILabel* _locationFooterLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSString* _productType;
	long long _provenance;

}

@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                      //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) UIView * heroView;                                             //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UILabel * birthdayPromptLabel;                                 //@synthesize birthdayPromptLabel=_birthdayPromptLabel - In the implementation block
@property (nonatomic,retain) HKSeparatorLineView * birthdayTopSeparator;                    //@synthesize birthdayTopSeparator=_birthdayTopSeparator - In the implementation block
@property (nonatomic,retain) UIStackView * birthdayEntryView;                               //@synthesize birthdayEntryView=_birthdayEntryView - In the implementation block
@property (nonatomic,retain) HKCaretOptionalTextField * birthdayTextField;                  //@synthesize birthdayTextField=_birthdayTextField - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;                                     //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSDate * dateOfBirth;                                          //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                               //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) HKSeparatorLineView * birthdayBottomSeparator;                 //@synthesize birthdayBottomSeparator=_birthdayBottomSeparator - In the implementation block
@property (nonatomic,retain) UILabel * birthdayFooterLabel;                                 //@synthesize birthdayFooterLabel=_birthdayFooterLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationFooterLabel;                                 //@synthesize locationFooterLabel=_locationFooterLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSString * productType;                                        //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) long long provenance;                                          //@synthesize provenance=_provenance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(long long)provenance;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSString *)productType;
-(id)_titleFont;
-(NSDateFormatter *)dateFormatter;
-(void)setProductType:(NSString *)arg1 ;
-(NSDate *)dateOfBirth;
-(void)setDateOfBirth:(NSDate *)arg1 ;
-(void)setProvenance:(long long)arg1 ;
-(UIDatePicker *)datePicker;
-(HKHeartRhythmAvailability *)availability;
-(void)viewDidLoad;
-(id)bodyString;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpConstraints;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(id)titleString;
-(id)_titleFontTextStyle;
-(UIView *)heroView;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)setHeroView:(UIView *)arg1 ;
-(void)setUpUI;
-(id)createHeroView;
-(id)buttonTitleString;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(id)disclaimerString;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(void)_keyboardFrameChanged:(id)arg1 ;
-(void)setBirthdayTopSeparator:(HKSeparatorLineView *)arg1 ;
-(HKSeparatorLineView *)birthdayTopSeparator;
-(void)setBirthdayBottomSeparator:(HKSeparatorLineView *)arg1 ;
-(HKSeparatorLineView *)birthdayBottomSeparator;
-(void)setBirthdayFooterLabel:(UILabel *)arg1 ;
-(UILabel *)birthdayFooterLabel;
-(id)_footnoteFont;
-(void)_updateDateOfBirthDisplay;
-(HKCaretOptionalTextField *)birthdayTextField;
-(UIStackView *)birthdayEntryView;
-(double)_ageEntryTopSeparatorToFirstBaseline;
-(double)_ageEntryLastBaselineToBottomSeparator;
-(id)_ageEntryTitleFont;
-(void)setBirthdayTextField:(HKCaretOptionalTextField *)arg1 ;
-(id)_dateOfBirthDatePicker;
-(void)setBirthdayEntryView:(UIStackView *)arg1 ;
-(void)_dateOfBirthTapped:(id)arg1 ;
-(void)_datePickerValueChanged:(id)arg1 ;
-(BOOL)_meetsAgeRequirement;
-(id)ageIneligiblePromptBodyString;
-(id)ageIneligiblePromptAckButtonString;
-(id)ageWithDate:(id)arg1 ;
-(id)ageLimit;
-(id)ageIneligiblePromptTitleString;
-(id)learnMoreString;
-(id)featureDisabledBodyString;
-(id)locationNotFoundPromptBodyString;
-(id)watchOSVersionTooLowBodyString;
-(id)deviceNotSupportedBodyString;
-(id)locationFeatureIneligiblePromptBodyString;
-(id)_footnoteTextStyle;
-(id)initForOnboarding:(BOOL)arg1 provenance:(long long)arg2 ;
-(void)setBirthdayPromptLabel:(UILabel *)arg1 ;
-(UILabel *)birthdayPromptLabel;
-(id)_birthdayPromptFont;
-(void)_setupBirthdayEntryView;
-(id)birthdayFooterString;
-(id)locationFooterString;
-(void)setLocationFooterLabel:(UILabel *)arg1 ;
-(UILabel *)locationFooterLabel;
-(double)_titleBottomToBodyTop;
-(double)_bodyBottomToAgePromptTop;
-(double)_agePromptLastBaselineToAgeEntryTop;
-(double)_bottomSeparatorToBirthdayFooterFirstBaseline;
-(double)_birthdayFooterLastBaselineToContinueButton;
-(void)_trackElectrocardiogramOnboardingStepIfNeeded:(long long)arg1 countryCode:(id)arg2 ;
-(id)createLearnMoreExpandedView;
@end

