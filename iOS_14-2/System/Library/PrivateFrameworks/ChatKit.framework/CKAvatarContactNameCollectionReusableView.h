/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)supplementaryViewKind;
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldDisplayTitle;
-(void)configureWithEntity:(id)arg1 ;
-(void)setShouldDisplayTitle:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end

