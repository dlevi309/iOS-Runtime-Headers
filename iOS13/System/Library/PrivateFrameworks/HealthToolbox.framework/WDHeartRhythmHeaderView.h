/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, UITextView, NSString, NSURL, NSLayoutConstraint, NSAttributedString;

@interface WDHeartRhythmHeaderView : UITableViewHeaderFooterView <UITextViewDelegate> {

	UILabel* _titleLabel;
	UITextView* _bodyTextView;
	NSString* _bodyText;
	NSString* _bodyURLText;
	NSURL* _bodyURL;
	NSLayoutConstraint* _titleFirstBaselineToTopMarginConstraint;
	NSLayoutConstraint* _bodyFirstBaslineToTitleLastBaslineConstraint;
	NSLayoutConstraint* _bottomMarginToBodyLastBaselineConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * bodyTextView;                                                      //@synthesize bodyTextView=_bodyTextView - In the implementation block
@property (nonatomic,copy) NSString * bodyText;                                                              //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy) NSString * bodyURLText;                                                           //@synthesize bodyURLText=_bodyURLText - In the implementation block
@property (nonatomic,copy) NSURL * bodyURL;                                                                  //@synthesize bodyURL=_bodyURL - In the implementation block
@property (nonatomic,readonly) NSAttributedString * bodyTextAttributedString; 
@property (nonatomic,readonly) NSAttributedString * bodyURLAttributedString; 
@property (nonatomic,retain) NSLayoutConstraint * titleFirstBaselineToTopMarginConstraint;                   //@synthesize titleFirstBaselineToTopMarginConstraint=_titleFirstBaselineToTopMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bodyFirstBaslineToTitleLastBaslineConstraint;              //@synthesize bodyFirstBaslineToTitleLastBaslineConstraint=_bodyFirstBaslineToTitleLastBaslineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomMarginToBodyLastBaselineConstraint;                  //@synthesize bottomMarginToBodyLastBaselineConstraint=_bottomMarginToBodyLastBaselineConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSString *)titleText;
-(UITextView *)bodyTextView;
-(void)setBodyTextView:(UITextView *)arg1 ;
-(void)updateConstraintConstants;
-(void)setBodyText:(id)arg1 URLText:(id)arg2 URL:(id)arg3 ;
-(void)setUpUI;
-(NSLayoutConstraint *)titleFirstBaselineToTopMarginConstraint;
-(NSLayoutConstraint *)bodyFirstBaslineToTitleLastBaslineConstraint;
-(NSLayoutConstraint *)bottomMarginToBodyLastBaselineConstraint;
-(NSAttributedString *)bodyTextAttributedString;
-(NSAttributedString *)bodyURLAttributedString;
-(void)updateBodyTextView;
-(NSString *)bodyURLText;
-(NSURL *)bodyURL;
-(void)setBodyURLText:(NSString *)arg1 ;
-(void)setBodyURL:(NSURL *)arg1 ;
-(void)setTitleFirstBaselineToTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBodyFirstBaslineToTitleLastBaslineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomMarginToBodyLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end

