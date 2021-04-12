/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(NSLayoutConstraint *)topConstraint;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUseTallTopPadding:(BOOL)arg1 ;
-(BOOL)useTallTopPadding;
@end

