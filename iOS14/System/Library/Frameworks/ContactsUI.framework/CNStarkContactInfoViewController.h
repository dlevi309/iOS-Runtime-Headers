/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNUIGeminiDataSourceDelegate.h>

@class NSLayoutYAxisAnchor, UILabel, UIStackView, NSArray, CNContact, CNContactGeminiView, CNUIGeminiDataSource, CNGeminiResult, NSString;

@interface CNStarkContactInfoViewController : UIViewController <CNUIGeminiDataSourceDelegate> {

	NSLayoutYAxisAnchor* _firstBaselineAnchor;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIStackView* _stackView;
	NSArray* _layoutConstraints;
	CNContact* _contact;
	CNContactGeminiView* _contactGeminiView;
	CNUIGeminiDataSource* _geminiDataSource;
	CNGeminiResult* _geminiResult;

}

@property (nonatomic,readonly) UILabel * primaryLabel;                                 //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                               //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                    //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactGeminiView * contactGeminiView;                  //@synthesize contactGeminiView=_contactGeminiView - In the implementation block
@property (nonatomic,retain) CNUIGeminiDataSource * geminiDataSource;                  //@synthesize geminiDataSource=_geminiDataSource - In the implementation block
@property (nonatomic,retain) CNGeminiResult * geminiResult;                            //@synthesize geminiResult=_geminiResult - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * firstBaselineAnchor;              //@synthesize firstBaselineAnchor=_firstBaselineAnchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(void)updateViewConstraints;
-(CNContact *)contact;
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(CNUIGeminiDataSource *)geminiDataSource;
-(id)init;
-(UIStackView *)stackView;
-(NSLayoutYAxisAnchor *)firstBaselineAnchor;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(UILabel *)primaryLabel;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(BOOL)shouldShowGemini;
-(void)viewDidLoad;
-(id)initWithContact:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupViews;
-(CNGeminiResult *)geminiResult;
-(void)updateViews;
-(CNContactGeminiView *)contactGeminiView;
-(void)setContactGeminiView:(CNContactGeminiView *)arg1 ;
-(void)setGeminiDataSource:(CNUIGeminiDataSource *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)secondaryLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

