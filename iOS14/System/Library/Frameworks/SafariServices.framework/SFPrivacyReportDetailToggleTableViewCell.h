/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SFPrivacyReportDetailToggleTableViewCellDelegate;
@class UISegmentedControl, UILabel;

@interface SFPrivacyReportDetailToggleTableViewCell : UITableViewCell {

	UISegmentedControl* _segmentedControl;
	UILabel* _titleLabel;
	BOOL _useCurrentWebsiteHeader;
	long long _detailType;
	id<SFPrivacyReportDetailToggleTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic) long long detailType;                                                              //@synthesize detailType=_detailType - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrivacyReportDetailToggleTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useCurrentWebsiteHeader;                                                      //@synthesize useCurrentWebsiteHeader=_useCurrentWebsiteHeader - In the implementation block
-(void)_updateTitle;
-(id<SFPrivacyReportDetailToggleTableViewCellDelegate>)delegate;
-(void)_addSegmentForDetailType:(long long)arg1 ;
-(void)_selectDetailType:(long long)arg1 ;
-(BOOL)useCurrentWebsiteHeader;
-(void)setDelegate:(id<SFPrivacyReportDetailToggleTableViewCellDelegate>)arg1 ;
-(long long)detailType;
-(void)setDetailType:(long long)arg1 ;
-(void)setUseCurrentWebsiteHeader:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

