/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <UIKitCore/UITableViewCell.h>

@class REUpNextBaseCell;

@interface TableCell : UITableViewCell {

	REUpNextBaseCell* _contentCell;

}

@property (nonatomic,retain) REUpNextBaseCell * contentCell;              //@synthesize contentCell=_contentCell - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithContent:(id)arg1 ;
-(REUpNextBaseCell *)contentCell;
-(void)setContentCell:(REUpNextBaseCell *)arg1 ;
@end

