/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIDateLabel;

@interface CKBlackholeTranscriptCell : UITableViewCell {

	UILabel* _fromLabel;
	UIDateLabel* _dateLabel;
	UILabel* _bodyLabel;

}

@property (nonatomic,retain) UILabel * fromLabel;                  //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                  //@synthesize bodyLabel=_bodyLabel - In the implementation block
-(UIDateLabel *)dateLabel;
-(void)configureForMessageItem:(id)arg1 showSender:(BOOL)arg2 ;
-(void)prepareForReuse;
-(UILabel *)fromLabel;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setFromLabel:(UILabel *)arg1 ;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

