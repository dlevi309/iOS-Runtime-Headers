/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, NSString;

@interface PKPeerPaymentActionTransferToBankCell : UITableViewCell {

	BOOL _isRTL;
	UILabel* _feeLabel;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIImageView* _checkmarkImageView;
	BOOL _showCheckmark;
	NSString* _titleText;
	NSString* _subtitleText;
	NSString* _feeText;

}

@property (nonatomic,copy) NSString * titleText;                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;              //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSString * feeText;                   //@synthesize feeText=_feeText - In the implementation block
@property (assign,nonatomic) BOOL showCheckmark;                 //@synthesize showCheckmark=_showCheckmark - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(BOOL)showCheckmark;
-(void)setShowCheckmark:(BOOL)arg1 ;
-(void)setFeeText:(NSString *)arg1 ;
-(NSString *)feeText;
@end

