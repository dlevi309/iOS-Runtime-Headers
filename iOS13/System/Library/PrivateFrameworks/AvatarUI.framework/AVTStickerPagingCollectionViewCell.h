/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIEdgeInsets)additionnalContentInsets;
-(UIView *)pageContentView;
@end

