/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView {

	BOOL _shouldDisplayTitle;
	long long _style;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) long long style;                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayTitle;              //@synthesize shouldDisplayTitle=_shouldDisplayTitle - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)configureWithEntity:(id)arg1 ;
-(void)setShouldDisplayTitle:(BOOL)arg1 ;
-(BOOL)shouldDisplayTitle;
@end

