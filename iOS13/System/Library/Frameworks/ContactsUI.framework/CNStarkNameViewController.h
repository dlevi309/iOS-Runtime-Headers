/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIStackView, NSArray, CNContact, NSLayoutYAxisAnchor;

@interface CNStarkNameViewController : UIViewController {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIStackView* _stackView;
	NSArray* _layoutConstraints;
	CNContact* _contact;

}

@property (nonatomic,readonly) UILabel * primaryLabel;                                 //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                               //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                    //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * firstBaselineAnchor; 
+(id)descriptorForRequiredKeys;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(CNContact *)contact;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(NSLayoutYAxisAnchor *)firstBaselineAnchor;
-(void)updateViewConstraints;
-(id)initWithContact:(id)arg1 ;
-(void)setupViews;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)updateViews;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
@end

