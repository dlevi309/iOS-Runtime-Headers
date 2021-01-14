/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@class SFPrivacyReportMeterBar, UILabel, UILayoutGuide, NSLayoutConstraint, NSNumberFormatter;

@interface SFPrivacyReportTrackingTableViewCell : UITableViewCell {

	SFPrivacyReportMeterBar* _countMeter;
	UILabel* _maxCountLabel;
	UILayoutGuide* _maxCountMeterGuide;
	NSLayoutConstraint* _countMeterWidthConstraint;
	NSNumberFormatter* _countFormatter;
	UILabel* _domainLabel;
	UILabel* _domainDetailLabel;
	UILabel* _countLabel;
	double _count;
	double _maxCount;

}

@property (nonatomic,readonly) UILabel * domainLabel;                    //@synthesize domainLabel=_domainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * domainDetailLabel;              //@synthesize domainDetailLabel=_domainDetailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countLabel;                     //@synthesize countLabel=_countLabel - In the implementation block
@property (assign,nonatomic) double count;                               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) double maxCount;                            //@synthesize maxCount=_maxCount - In the implementation block
-(void)setMaxCount:(double)arg1 ;
-(void)setCount:(double)arg1 ;
-(double)maxCount;
-(double)count;
-(UILabel *)domainLabel;
-(void)_updateCountViews;
-(UILabel *)domainDetailLabel;
-(UILabel *)countLabel;
-(id)initWithDetailLabel:(BOOL)arg1 reuseIdentifier:(id)arg2 ;
@end

