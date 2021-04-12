/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@protocol CKStickerDetailCellDelegate;
@class NSString, NSDate, CKAnimatedImageView, UILabel, UIDateLabel, SKUIItemOfferButton;

@interface CKStickerDetailCell : UITableViewCell {

	id _stickerPreview;
	NSString* _senderText;
	NSString* _stickerPackText;
	NSDate* _timestampDate;
	id<CKStickerDetailCellDelegate> _delegate;
	CKAnimatedImageView* _stickerView;
	UILabel* _senderLabel;
	UILabel* _stickerPackLabel;
	UIDateLabel* _timestampLabel;
	SKUIItemOfferButton* _viewButton;

}

@property (nonatomic,retain) CKAnimatedImageView * stickerView;                            //@synthesize stickerView=_stickerView - In the implementation block
@property (nonatomic,retain) UILabel * senderLabel;                                        //@synthesize senderLabel=_senderLabel - In the implementation block
@property (nonatomic,retain) UILabel * stickerPackLabel;                                   //@synthesize stickerPackLabel=_stickerPackLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * timestampLabel;                                 //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButton * viewButton;                             //@synthesize viewButton=_viewButton - In the implementation block
@property (nonatomic,retain) id stickerPreview;                                            //@synthesize stickerPreview=_stickerPreview - In the implementation block
@property (nonatomic,retain) NSString * senderText;                                        //@synthesize senderText=_senderText - In the implementation block
@property (nonatomic,retain) NSString * stickerPackText;                                   //@synthesize stickerPackText=_stickerPackText - In the implementation block
@property (nonatomic,retain) NSDate * timestampDate;                                       //@synthesize timestampDate=_timestampDate - In the implementation block
@property (assign,nonatomic,__weak) id<CKStickerDetailCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)identifier;
-(id<CKStickerDetailCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setDelegate:(id<CKStickerDetailCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(SKUIItemOfferButton *)viewButton;
-(NSString *)senderText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setStickerView:(CKAnimatedImageView *)arg1 ;
-(void)setSenderLabel:(UILabel *)arg1 ;
-(void)setTimestampLabel:(UIDateLabel *)arg1 ;
-(void)setStickerPackLabel:(UILabel *)arg1 ;
-(void)setViewButton:(SKUIItemOfferButton *)arg1 ;
-(void)setStickerPreview:(id)arg1 ;
-(void)setSenderText:(NSString *)arg1 ;
-(void)setStickerPackText:(NSString *)arg1 ;
-(void)setTimestampDate:(NSDate *)arg1 ;
-(CKAnimatedImageView *)stickerView;
-(UILabel *)senderLabel;
-(UILabel *)stickerPackLabel;
-(UIDateLabel *)timestampLabel;
-(id)stickerPreview;
-(NSString *)stickerPackText;
-(NSDate *)timestampDate;
@end

