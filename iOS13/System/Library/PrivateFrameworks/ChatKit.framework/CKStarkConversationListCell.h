/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImage, UIImageView, UILabel, UIDateLabel, NSDate, NSString;

@interface CKStarkConversationListCell : UITableViewCell {

	UIImage* _monogramImage;
	UIImageView* _chevronImageView;
	UIImageView* _unreadImageView;
	UILabel* _recipientsLabel;
	UIDateLabel* _dateLabel;

}

@property (nonatomic,retain) UIImageView * unreadImageView;               //@synthesize unreadImageView=_unreadImageView - In the implementation block
@property (nonatomic,retain) UILabel * recipientsLabel;                   //@synthesize recipientsLabel=_recipientsLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;                     //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic) BOOL hasUnreadMessages; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * recipientNames; 
@property (assign,nonatomic) UIImage * monogramImage;                     //@synthesize monogramImage=_monogramImage - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
+(double)starkCellMarginWidth;
-(void)setDate:(NSDate *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateUserInterfaceStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIDateLabel *)dateLabel;
-(void)setMonogramImage:(UIImage *)arg1 ;
-(UIImage *)monogramImage;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(void)setRecipientNames:(NSString *)arg1 ;
-(void)setHasUnreadMessages:(BOOL)arg1 ;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(UIImageView *)unreadImageView;
-(UILabel *)recipientsLabel;
-(void)setUnreadImageView:(UIImageView *)arg1 ;
-(void)setRecipientsLabel:(UILabel *)arg1 ;
@end

