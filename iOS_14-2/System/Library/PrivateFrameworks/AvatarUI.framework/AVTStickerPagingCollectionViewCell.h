/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell {

	UIView* _pageContentView;
	UIEdgeInsets _additionnalContentInsets;

}

@property (nonatomic,retain) UIView * pageContentView;                           //@synthesize pageContentView=_pageContentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets additionnalContentInsets;              //@synthesize additionnalContentInsets=_additionnalContentInsets - In the implementation block
+(id)cellIdentifier;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setPageContentView:(UIView *)arg1 ;
-(void)setAdditionnalContentInsets:(UIEdgeInsets)arg1 ;
-(UIView *)pageContentView;
-(UIEdgeInsets)additionnalContentInsets;
@end

