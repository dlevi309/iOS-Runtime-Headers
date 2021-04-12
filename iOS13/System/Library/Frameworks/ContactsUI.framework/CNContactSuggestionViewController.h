/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol CNContactSuggestionViewControllerDataSource;
@class CNPropertySuggestionAction, CNPropertyCell, UILabel, UIButton, NSLayoutConstraint;

@interface CNContactSuggestionViewController : UITableViewController {

	CNPropertySuggestionAction* _action;
	CNPropertyCell* _propertyCell;
	id<CNContactSuggestionViewControllerDataSource> _dataSource;
	UILabel* _fromLabel;
	UILabel* _dateLabel;
	UILabel* _subjectLabel;
	UILabel* _contentLabel;
	UIButton* _addToContactButton;
	UIButton* _ignoreButton;
	NSLayoutConstraint* _addToContactLeadingMargin;
	NSLayoutConstraint* _ignoreTrailingMargin;
	NSLayoutConstraint* _fromLeadingMargin;
	NSLayoutConstraint* _dateTrailingMargin;

}

@property (nonatomic,retain) id<CNContactSuggestionViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UILabel * fromLabel;                                                     //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                                     //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * subjectLabel;                                                  //@synthesize subjectLabel=_subjectLabel - In the implementation block
@property (nonatomic,retain) UILabel * contentLabel;                                                  //@synthesize contentLabel=_contentLabel - In the implementation block
@property (nonatomic,retain) UIButton * addToContactButton;                                           //@synthesize addToContactButton=_addToContactButton - In the implementation block
@property (nonatomic,retain) UIButton * ignoreButton;                                                 //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * addToContactLeadingMargin;                          //@synthesize addToContactLeadingMargin=_addToContactLeadingMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * ignoreTrailingMargin;                               //@synthesize ignoreTrailingMargin=_ignoreTrailingMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fromLeadingMargin;                                  //@synthesize fromLeadingMargin=_fromLeadingMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dateTrailingMargin;                                 //@synthesize dateTrailingMargin=_dateTrailingMargin - In the implementation block
@property (nonatomic,retain) CNPropertySuggestionAction * action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) CNPropertyCell * propertyCell;                                           //@synthesize propertyCell=_propertyCell - In the implementation block
+(id)viewControllerWithDataSource:(id)arg1 ;
-(CNPropertySuggestionAction *)action;
-(id<CNContactSuggestionViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<CNContactSuggestionViewControllerDataSource>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAction:(CNPropertySuggestionAction *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UILabel *)dateLabel;
-(void)setContentLabel:(UILabel *)arg1 ;
-(UILabel *)contentLabel;
-(BOOL)shouldShowPreview;
-(void)updatePreview;
-(BOOL)sectionAtIndexContainsAddAndIgnoreControls:(unsigned long long)arg1 ;
-(BOOL)shouldShowAddIgnoreControls;
-(void)addToContact:(id)arg1 ;
-(void)ignore:(id)arg1 ;
-(void)showSource:(id)arg1 ;
-(CNPropertyCell *)propertyCell;
-(void)setPropertyCell:(CNPropertyCell *)arg1 ;
-(UILabel *)fromLabel;
-(void)setFromLabel:(UILabel *)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(UILabel *)subjectLabel;
-(void)setSubjectLabel:(UILabel *)arg1 ;
-(UIButton *)addToContactButton;
-(void)setAddToContactButton:(UIButton *)arg1 ;
-(UIButton *)ignoreButton;
-(void)setIgnoreButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)addToContactLeadingMargin;
-(void)setAddToContactLeadingMargin:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)ignoreTrailingMargin;
-(void)setIgnoreTrailingMargin:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)fromLeadingMargin;
-(void)setFromLeadingMargin:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)dateTrailingMargin;
-(void)setDateTrailingMargin:(NSLayoutConstraint *)arg1 ;
@end

