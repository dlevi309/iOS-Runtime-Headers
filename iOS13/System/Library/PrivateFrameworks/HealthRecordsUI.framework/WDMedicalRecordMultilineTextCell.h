/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(UIView *)background;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setBackground:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
@end

