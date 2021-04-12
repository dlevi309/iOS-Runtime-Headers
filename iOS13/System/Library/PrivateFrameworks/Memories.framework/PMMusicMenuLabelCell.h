/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface PMMusicMenuLabelCell : UITableViewCell {

	UILabel* _label;
	NSLayoutConstraint* _labelLeadingConstraint;

}

@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeadingConstraint;              //@synthesize labelLeadingConstraint=_labelLeadingConstraint - In the implementation block
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
@end

