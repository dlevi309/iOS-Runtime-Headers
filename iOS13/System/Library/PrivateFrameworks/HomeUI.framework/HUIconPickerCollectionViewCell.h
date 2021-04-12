/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class HUIconButton;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell {

	HUIconButton* _iconButton;

}

@property (nonatomic,retain) HUIconButton * iconButton;                        //@synthesize iconButton=_iconButton - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(HUIconButton *)iconButton;
-(void)setIconButton:(HUIconButton *)arg1 ;
@end

