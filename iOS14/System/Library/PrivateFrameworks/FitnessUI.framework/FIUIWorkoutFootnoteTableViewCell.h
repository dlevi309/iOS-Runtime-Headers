/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setFootnoteText:(NSString *)arg1 ;
-(NSString *)footnoteText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

