/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _stacked;
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
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(void)_createConstraints;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(EKCalendarChooser *)chooser;
-(EKGroupInfoButton *)showAllButton;
-(void)setShowAllButton:(EKGroupInfoButton *)arg1 ;
-(UILabel *)primaryLabel;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_eventStoreChanged;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)showAllButtonHidden;
-(void)_activateConstraints;
-(void)_groupShowAllButtonTapped:(id)arg1 ;
-(void)updateSpinner;
-(void)setChooser:(EKCalendarChooser *)arg1 ;
-(void)setShowAllButtonHidden:(BOOL)arg1 ;
@end

