/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutConstraint;

@interface MiroDurationPickerCell : UIView {

	UILabel* _textLabel;
	NSLayoutConstraint* _textLabelLeadingConstraint;
	NSLayoutConstraint* _textLabelTrailingConstraint;

}

@property (nonatomic,retain) UILabel * textLabel;                                           //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelLeadingConstraint;               //@synthesize textLabelLeadingConstraint=_textLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelTrailingConstraint;              //@synthesize textLabelTrailingConstraint=_textLabelTrailingConstraint - In the implementation block
-(void)setTextLabel:(UILabel *)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelLeadingConstraint;
-(NSLayoutConstraint *)textLabelTrailingConstraint;
@end

