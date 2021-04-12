/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface AVTFunCamAvatarPickerTitleCell : UICollectionViewCell {

	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
+(id)cellIdentifier;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)updateWithTitle:(id)arg1 ;
@end

