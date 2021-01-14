/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

@interface WDMedicalRecordMultilineTextCell : UITableViewCell {

	NSAttributedString* _text;
	UILabel* _label;
	UIView* _background;

}

@property (nonatomic,retain) UILabel * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * background;                    //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
-(UIView *)background;
-(void)setBackground:(UIView *)arg1 ;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)_setupSubviews;
-(NSAttributedString *)text;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

