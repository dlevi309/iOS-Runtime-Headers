/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)feeText;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setFeeText:(NSString *)arg1 ;
-(void)setShowCheckmark:(BOOL)arg1 ;
-(BOOL)showCheckmark;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

