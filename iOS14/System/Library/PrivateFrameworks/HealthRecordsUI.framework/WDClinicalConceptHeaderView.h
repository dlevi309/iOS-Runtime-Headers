/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSString, UILabel;

@interface WDClinicalConceptHeaderView : UITableViewHeaderFooterView {

	NSString* _title;
	NSString* _subtitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)_setupSubviews;
-(UILabel *)subtitleLabel;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)title;
@end

