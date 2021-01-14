/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id<HFIconDescriptor>)iconDescriptor;
-(HUIconButton *)iconButton;
-(void)setIconButton:(HUIconButton *)arg1 ;
@end

