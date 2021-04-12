/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITableViewCell.h>

@class TLKLabel;

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell {

	TLKLabel* _label;

}

@property (nonatomic,retain) TLKLabel * label;              //@synthesize label=_label - In the implementation block
-(void)updateWithRowModel:(id)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)setLabel:(TLKLabel *)arg1 ;
-(id)visibleResults;
-(TLKLabel *)label;
@end

