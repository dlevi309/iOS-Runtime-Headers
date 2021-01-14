/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol SFPrivacyReportExplanationTableViewCellDelegate;
@class SFPrivacyReportIconView, UILabel, UIButton, NSArray;

@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell {

	SFPrivacyReportIconView* _iconView;
	UILabel* _textLabel;
	UIButton* _toggleButton;
	UIButton* _sizingToggleButton;
	NSArray* _iconConstraints;
	BOOL _wideLayout;
	BOOL _expanded;
	id<SFPrivacyReportExplanationTableViewCellDelegate> _delegate;

}

@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                  //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrivacyReportExplanationTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_toggleExpanded:(id)arg1 ;
-(void)_updateToggleButtonText;
-(void)_updateUsesWideLayoutForSize:(CGSize)arg1 ;
-(CGRect)_separatorFrame;
-(id<SFPrivacyReportExplanationTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<SFPrivacyReportExplanationTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

