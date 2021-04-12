/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITableViewCell.h>

@class TLKLabel;

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell {

	TLKLabel* _label;

}

@property (nonatomic,retain) TLKLabel * label;              //@synthesize label=_label - In the implementation block
-(void)setLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)label;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)visibleResults;
@end

