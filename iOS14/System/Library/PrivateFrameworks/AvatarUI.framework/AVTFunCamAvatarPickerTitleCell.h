/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateWithTitle:(id)arg1 ;
-(void)prepareForReuse;
@end

