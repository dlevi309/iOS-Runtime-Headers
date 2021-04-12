/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIDateLabel;

@interface CKBlackholeConversationListCell : UITableViewCell {

	UILabel* _fromLabel;
	UIDateLabel* _dateLabel;

}

@property (nonatomic,retain) UILabel * fromLabel;                  //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;              //@synthesize dateLabel=_dateLabel - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIDateLabel *)dateLabel;
-(UILabel *)fromLabel;
-(void)setFromLabel:(UILabel *)arg1 ;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(void)configureForConversation:(id)arg1 ;
@end

