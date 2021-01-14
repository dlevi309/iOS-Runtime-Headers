/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, NSLayoutConstraint;

@interface WDMedicalRecordSpacerTextCell : UITableViewCell {

	BOOL _useTallTopPadding;
	NSString* _title;
	UILabel* _titleLabel;
	NSLayoutConstraint* _topConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;              //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL useTallTopPadding;                          //@synthesize useTallTopPadding=_useTallTopPadding - In the implementation block
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(void)setUseTallTopPadding:(BOOL)arg1 ;
-(BOOL)useTallTopPadding;
-(void)setTitle:(NSString *)arg1 ;
-(void)_setupSubviews;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

