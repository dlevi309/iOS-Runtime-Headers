/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIView, NSString;

@interface FIUIWorkoutFootnoteTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _footnoteLabel;
	UIView* _dividerView;
	NSString* _titleText;
	NSString* _footnoteText;

}

@property (nonatomic,copy) NSString * titleText;                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * footnoteText;              //@synthesize footnoteText=_footnoteText - In the implementation block
+(double)preferredHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setFootnoteText:(NSString *)arg1 ;
-(NSString *)footnoteText;
@end

