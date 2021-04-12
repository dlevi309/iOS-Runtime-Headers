/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(void)awakeFromNib;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

