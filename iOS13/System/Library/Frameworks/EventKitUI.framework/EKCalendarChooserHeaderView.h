/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView, NSArray, UILabel, EKGroupInfoButton, EKCalendarChooser, EKGroupInfo;

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView {

	UIActivityIndicatorView* _spinner;
	NSArray* _primaryLabelWithShowAllButtonLargeConstraints;
	NSArray* _primaryLabelWithoutShowAllButtonLargeConstraints;
	NSArray* _commonLargeConstraints;
	NSArray* _primaryLabelWithShowAllButtonNormalConstraints;
	NSArray* _primaryLabelWithoutShowAllButtonNormalConstraints;
	NSArray* _commonNormalConstraints;
	NSArray* _commonConstraints;
	UILabel* _primaryLabel;
	EKGroupInfoButton* _showAllButton;
	EKCalendarChooser* _chooser;
	EKGroupInfo* _group;

}

@property (nonatomic,retain) UILabel * primaryLabel;                          //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) EKGroupInfoButton * showAllButton;               //@synthesize showAllButton=_showAllButton - In the implementation block
@property (assign,nonatomic) BOOL showAllButtonHidden; 
@property (assign,nonatomic,__weak) EKCalendarChooser * chooser;              //@synthesize chooser=_chooser - In the implementation block
@property (nonatomic,retain) EKGroupInfo * group;                             //@synthesize group=_group - In the implementation block
-(void)setGroup:(EKGroupInfo *)arg1 ;
-(EKGroupInfo *)group;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_createConstraints;
-(UILabel *)primaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)_activateConstraints;
-(EKGroupInfoButton *)showAllButton;
-(BOOL)showAllButtonHidden;
-(void)_groupShowAllButtonTapped:(id)arg1 ;
-(void)_eventStoreChanged;
-(void)updateSpinner;
-(EKCalendarChooser *)chooser;
-(void)setChooser:(EKCalendarChooser *)arg1 ;
-(void)setShowAllButtonHidden:(BOOL)arg1 ;
-(void)setShowAllButton:(EKGroupInfoButton *)arg1 ;
@end

