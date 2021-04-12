/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface SUCreditCardReaderInfoView : UIView {

	UILabel* _addCardDetailLabel;
	UILabel* _addCardLabel;

}

@property (nonatomic,retain) UILabel * addCardDetailLabel;              //@synthesize addCardDetailLabel=_addCardDetailLabel - In the implementation block
@property (nonatomic,retain) UILabel * addCardLabel;                    //@synthesize addCardLabel=_addCardLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAddCardLabel:(UILabel *)arg1 ;
-(UILabel *)addCardLabel;
-(void)setAddCardDetailLabel:(UILabel *)arg1 ;
-(UILabel *)addCardDetailLabel;
@end

